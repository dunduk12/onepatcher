#pragma once
#include <vector>
#include <map>

#include "segment.h"

#include "imports.h"
#include "relocs.h"

enum InitStage
{
    INIT_NONE,
    INIT_COPY_SEGMENT,
    INIT_FIX_SEGMENT,
    INIT_FILL_DEPENDENCY_TABLE,
    INIT_CALL_OEP,
    INIT_FINISHED,
};

class OneTap
{
public:
    int init_stage = INIT_NONE;

    uintptr_t original_allocation_address;
    uintptr_t current_allocation_address;

    uintptr_t allocation_size;
    uintptr_t dependency_table_size;
    uintptr_t segment_size;

    uintptr_t entry_point_address;

    OneTap_Relocations relocs;
    OneTap_Imports imports;

    std::vector<uintptr_t> dependency_table;
    std::vector<const char*> signatures;

    void update_text_instructions(char compressed_array[], int offset_to_instructions, int instruction_iterator, int instruction_count, int iteration_cycle_update, int instruction_char_move_count, int array_char_iterator, int array_char_cycle_update) 
    {
        int segmented_char_iterator = array_char_iterator;

        for (int instructions_iterator = instruction_iterator; instructions_iterator < instruction_count; instructions_iterator += iteration_cycle_update) 
        {
            std::memcpy(reinterpret_cast<uintptr_t*>(current_allocation_address + offset_to_instructions + instructions_iterator), compressed_array + segmented_char_iterator, instruction_char_move_count);
            segmented_char_iterator += array_char_cycle_update;
        }
    }

    const unsigned char* get_segment()
    {
        return onetap_segment;
    }
};