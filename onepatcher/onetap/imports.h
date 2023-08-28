#pragma once
#include <vector>
#include <map>

enum ImportType
{
    INTERNAL,
    PUBLIC
};

struct ImportInfo
{
    const char* function;
    std::multimap<ImportType, uintptr_t> offsets;
};

class OneTap_Imports
{
public:
    void fill_imports()
    {
        ImportInfo imp_rtlInitializeSListHead = { "RtlInitializeSListHead" };
        imp_rtlInitializeSListHead.offsets.emplace(ImportType::INTERNAL, 0x47889);

        imports.emplace(("ntdll.dll"), std::vector<ImportInfo>({ imp_rtlInitializeSListHead }));

        ImportInfo imp_createFileA = { "CreateFileA" };
        imp_createFileA.offsets.emplace(ImportType::INTERNAL, 0x1A7D8);
        imp_createFileA.offsets.emplace(ImportType::INTERNAL, 0x6C116);
        imp_createFileA.offsets.emplace(ImportType::INTERNAL, 0xE0F66);
        imp_createFileA.offsets.emplace(ImportType::PUBLIC, 0x142068);

        ImportInfo imp_findFirstFileA = { "FindFirstFileA" };
        imp_findFirstFileA.offsets.emplace(ImportType::INTERNAL, 0x1C2FF);
        imp_findFirstFileA.offsets.emplace(ImportType::INTERNAL, 0x6C1E6);
        imp_findFirstFileA.offsets.emplace(ImportType::INTERNAL, 0xE1036);
        imp_findFirstFileA.offsets.emplace(ImportType::INTERNAL, 0xE2167);

        ImportInfo imp_findClose = { "FindClose" };
        imp_findClose.offsets.emplace(ImportType::INTERNAL, 0x1CA4A);
        imp_findClose.offsets.emplace(ImportType::INTERNAL, 0x6C82D);
        imp_findClose.offsets.emplace(ImportType::INTERNAL, 0xE167D);
        imp_findClose.offsets.emplace(ImportType::INTERNAL, 0xE280C);

        ImportInfo imp_findNextFileA = { "FindNextFileA" };
        imp_findNextFileA.offsets.emplace(ImportType::INTERNAL, 0x1CA3B);
        imp_findNextFileA.offsets.emplace(ImportType::INTERNAL, 0x6C81A);
        imp_findNextFileA.offsets.emplace(ImportType::INTERNAL, 0xE166A);
        imp_findNextFileA.offsets.emplace(ImportType::INTERNAL, 0xE27FD);

        ImportInfo imp_writePrivateProfileStringA = { "WritePrivateProfileStringA" };
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2CE8E);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2D1AE);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2D4AE);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2D93E);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2DC6E);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2E10E);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2E41E);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2E72E);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2EA3E);
        imp_writePrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0xE17F5);

        ImportInfo imp_sleep = { "Sleep" };
        imp_sleep.offsets.emplace(ImportType::INTERNAL, 0x34315);

        ImportInfo imp_getPrivateProfileStringA = { "GetPrivateProfileStringA" };
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2CF65);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2D270);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2D585);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2D702);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2DA30);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2DD46);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2DEC8);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2E1DE);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2E4E8);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2E7F8);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0x2EB02);
        imp_getPrivateProfileStringA.offsets.emplace(ImportType::INTERNAL, 0xE18B7);

        ImportInfo imp_rtlCaptureContext = { "RtlCaptureContext" };
        imp_rtlCaptureContext.offsets.emplace(ImportType::INTERNAL, 0x2F042);
        imp_rtlCaptureContext.offsets.emplace(ImportType::INTERNAL, 0x2F43C);
        imp_rtlCaptureContext.offsets.emplace(ImportType::INTERNAL, 0xE1A05);
        imp_rtlCaptureContext.offsets.emplace(ImportType::INTERNAL, 0xE1C02);
        imp_rtlCaptureContext.offsets.emplace(ImportType::INTERNAL, 0xE1C49);
        imp_rtlCaptureContext.offsets.emplace(ImportType::INTERNAL, 0xE295B);
        imp_rtlCaptureContext.offsets.emplace(ImportType::INTERNAL, 0xE29A9);
        imp_rtlCaptureContext.offsets.emplace(ImportType::INTERNAL, 0xE2AAD);
        imp_rtlCaptureContext.offsets.emplace(ImportType::PUBLIC, 0x142058);

        ImportInfo imp_isDebuggerPresent = { "IsDebuggerPresent" };
        imp_isDebuggerPresent.offsets.emplace(ImportType::INTERNAL, 0x47712);

        ImportInfo imp_setUnhandledExceptionFilter = { "SetUnhandledExceptionFilter" };
        imp_setUnhandledExceptionFilter.offsets.emplace(ImportType::INTERNAL, 0x47732);
        imp_setUnhandledExceptionFilter.offsets.emplace(ImportType::INTERNAL, 0x4792D);

        ImportInfo imp_setPriorityClass = { "SetPriorityClass" };
        imp_setPriorityClass.offsets.emplace(ImportType::INTERNAL, 0xE1D59);

        ImportInfo imp_unhandledExceptionFilter = { "UnhandledExceptionFilter" };
        imp_unhandledExceptionFilter.offsets.emplace(ImportType::INTERNAL, 0x4773C);
        imp_unhandledExceptionFilter.offsets.emplace(ImportType::INTERNAL, 0x47936);

        ImportInfo imp_getSystemTimeAsFileTime = { "GetSystemTimeAsFileTime" };
        imp_getSystemTimeAsFileTime.offsets.emplace(ImportType::INTERNAL, 0x477FE);

        ImportInfo imp_getCurrentProcess = { "GetCurrentProcess" };
        imp_getCurrentProcess.offsets.emplace(ImportType::INTERNAL, 0x47941);

        ImportInfo imp_getCurrentThreadId = { "GetCurrentThreadId" };
        imp_getCurrentThreadId.offsets.emplace(ImportType::INTERNAL, 0x4780D);

        ImportInfo imp_getCurrentProcessId = { "GetCurrentProcessId" };
        imp_getCurrentProcessId.offsets.emplace(ImportType::INTERNAL, 0x47816);

        ImportInfo imp_queryPerformanceCounter = { "QueryPerformanceCounter" };
        imp_queryPerformanceCounter.offsets.emplace(ImportType::INTERNAL, 0x47823);

        ImportInfo imp_terminateProcess = { "TerminateProcess" };
        imp_terminateProcess.offsets.emplace(ImportType::INTERNAL, 0x47948);

        ImportInfo imp_isProcessorFeaturePresent = { "IsProcessorFeaturePresent" };
        imp_isProcessorFeaturePresent.offsets.emplace(ImportType::INTERNAL, 0x47ABB);

        ImportInfo imp_getWindowsDirectoryA = { "GetWindowsDirectoryA" };
        imp_getWindowsDirectoryA.offsets.emplace(ImportType::INTERNAL, 0x624D1);

        ImportInfo imp_formatMessageW = { "FormatMessageW" };
        imp_formatMessageW.offsets.emplace(ImportType::INTERNAL, 0x6040B);
        imp_formatMessageW.offsets.emplace(ImportType::INTERNAL, 0x6045A);

        ImportInfo imp_getLastError = { "GetLastError" };
        imp_getLastError.offsets.emplace(ImportType::INTERNAL, 0x60415);
        imp_getLastError.offsets.emplace(ImportType::INTERNAL, 0x60713);

        ImportInfo imp_wideCharToMultiByte = { "WideCharToMultiByte" };
        imp_wideCharToMultiByte.offsets.emplace(ImportType::INTERNAL, 0x60706);
        imp_wideCharToMultiByte.offsets.emplace(ImportType::INTERNAL, 0x60745);

        ImportInfo imp_mulDiv = { "MulDiv" };
        imp_mulDiv.offsets.emplace(ImportType::INTERNAL, 0x616C2);
        imp_mulDiv.offsets.emplace(ImportType::INTERNAL, 0x62230);

        ImportInfo imp_getTickCount = { "GetTickCount" };
        imp_getTickCount.offsets.emplace(ImportType::INTERNAL, 0x6289D);
        imp_getTickCount.offsets.emplace(ImportType::PUBLIC, 0x142080);

        ImportInfo imp_multiByteToWideChar = { "MultiByteToWideChar" };
        imp_multiByteToWideChar.offsets.emplace(ImportType::INTERNAL, 0x139EF7);
        imp_multiByteToWideChar.offsets.emplace(ImportType::PUBLIC, 0x142088);

        imports.emplace(("kernel32.dll"), std::vector<ImportInfo>({ imp_createFileA, imp_findFirstFileA, imp_findClose, imp_findNextFileA,
                                                                      imp_writePrivateProfileStringA, imp_sleep, imp_getPrivateProfileStringA,
                                                                      imp_rtlCaptureContext, imp_isDebuggerPresent, imp_setUnhandledExceptionFilter,
                                                                      imp_setPriorityClass, imp_unhandledExceptionFilter, imp_getSystemTimeAsFileTime,
                                                                      imp_getCurrentProcess, imp_getCurrentThreadId, imp_getCurrentProcessId,
                                                                      imp_queryPerformanceCounter, imp_terminateProcess, imp_isProcessorFeaturePresent, imp_getWindowsDirectoryA,
                                                                      imp_formatMessageW, imp_getLastError, imp_wideCharToMultiByte, imp_mulDiv, imp_getTickCount,
                                                                      imp_multiByteToWideChar }));

        ImportInfo imp__except_handler4_common = { "_except_handler4_common" };
        imp__except_handler4_common.offsets.emplace(ImportType::INTERNAL, 0x47A61);

        ImportInfo imp____std_exception_copy = { "__std_exception_copy" };
        imp____std_exception_copy.offsets.emplace(ImportType::INTERNAL, 0x11DD0);
        imp____std_exception_copy.offsets.emplace(ImportType::INTERNAL, 0x11E10);
        imp____std_exception_copy.offsets.emplace(ImportType::INTERNAL, 0x45EC1);
        imp____std_exception_copy.offsets.emplace(ImportType::INTERNAL, 0x45F11);
        imp____std_exception_copy.offsets.emplace(ImportType::INTERNAL, 0x461F9);

        ImportInfo imp___std_exception_destroy = { "__std_exception_destroy" };
        imp___std_exception_destroy.offsets.emplace(ImportType::INTERNAL, 0x11D5C);
        imp___std_exception_destroy.offsets.emplace(ImportType::INTERNAL, 0x11D82);
        imp___std_exception_destroy.offsets.emplace(ImportType::INTERNAL, 0x460C2);
        imp___std_exception_destroy.offsets.emplace(ImportType::INTERNAL, 0x47A4F);

        ImportInfo imp__CxxThrowException = { "_CxxThrowException" };
        imp__CxxThrowException.offsets.emplace(ImportType::INTERNAL, 0x47A55);

        ImportInfo imp_strstr = { "strstr" };
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x1C69E);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x57219);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x57362);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x57460);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x590A0);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x5911A);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x5918F);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x6446A);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x6475A);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x6C4FB);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0xE134B);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0xE2511);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x115EE7);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x131CB8);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x13DE63);
        imp_strstr.offsets.emplace(ImportType::INTERNAL, 0x13E68A);
        imp_strstr.offsets.emplace(ImportType::PUBLIC, 0x1421B4);

        ImportInfo imp___std_type_info_destroy_list = { "__std_type_info_destroy_list" };
        imp___std_type_info_destroy_list.offsets.emplace(ImportType::INTERNAL, 0x47A67);

        ImportInfo imp__purecall = { "_purecall" };
        imp__purecall.offsets.emplace(ImportType::INTERNAL, 0x47A49);

        ImportInfo imp_memset = { "memset" };
        imp_memset.offsets.emplace(ImportType::INTERNAL, 0x47A5B);

        ImportInfo imp___CxxFrameHandler = { "__CxxFrameHandler3" };
        imp___CxxFrameHandler.offsets.emplace(ImportType::INTERNAL, 0x140189);

        ImportInfo imp_memchr = { "memchr" };
        imp_memchr.offsets.emplace(ImportType::INTERNAL, 0x14018F);

        ImportInfo imp_memcpy = { "memcpy" };
        imp_memcpy.offsets.emplace(ImportType::INTERNAL, 0x140195);

        ImportInfo imp_memmove = { "memmove" };
        imp_memmove.offsets.emplace(ImportType::INTERNAL, 0x14019B);

        imports.emplace(("vcruntime140.dll"), std::vector<ImportInfo>({ imp__except_handler4_common, imp____std_exception_copy, imp___std_exception_destroy,
                                                                          imp__CxxThrowException, imp_strstr, imp___std_type_info_destroy_list, imp__purecall,
                                                                          imp_memset, imp___CxxFrameHandler, imp_memchr, imp_memcpy, imp_memmove }));

        ImportInfo imp___xbad_function_call_std__YAXXZ = { "?_Xbad_function_call@std@@YAXXZ" };
        imp___xbad_function_call_std__YAXXZ.offsets.emplace(ImportType::INTERNAL, 0x13D1ED);
        imp___xbad_function_call_std__YAXXZ.offsets.emplace(ImportType::INTERNAL, 0x13D419);
        imp___xbad_function_call_std__YAXXZ.offsets.emplace(ImportType::INTERNAL, 0x13D85B);

        ImportInfo imp___xlength_error_std__YAXPBD_Z = { "?_Xlength_error@std@@YAXPBD@Z" };
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x3747);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x5BE7);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x71D7);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0xBED0);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x134B8);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x13E56);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x142F8);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x14AF1);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x14CA7);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x1590D);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x15B55);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x15BAA);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x16103);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x178A5);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x1D226);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x1E030);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x3350E);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x3BF7E);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x3C29E);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x127F4D);
        imp___xlength_error_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x128E06);

        ImportInfo imp__in___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PBD1AAPBDPAD3AAPAD_Z = { "?in@?$codecvt@DDU_Mbstatet@@@std@@QBEHAAU_Mbstatet@@PBD1AAPBDPAD3AAPAD@Z" };
        imp__in___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PBD1AAPBDPAD3AAPAD_Z.offsets.emplace(ImportType::INTERNAL, 0x1E5FB);

        ImportInfo imp___xout_of_range_std__YAXPBD_Z = { "?_Xout_of_range@std@@YAXPBD@Z" };
        imp___xout_of_range_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x3137);
        imp___xout_of_range_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x63B7);
        imp___xout_of_range_std__YAXPBD_Z.offsets.emplace(ImportType::INTERNAL, 0x31EE7);

        ImportInfo imp__mtx_init_in_situ = { "_Mtx_init_in_situ" };
        imp__mtx_init_in_situ.offsets.emplace(ImportType::INTERNAL, 0x2B19);

        ImportInfo imp___fiopen_std__YAPAU_iobuf__PBDHH_Z = { "?_Fiopen@std@@YAPAU_iobuf@@PBDHH@Z" };
        imp___fiopen_std__YAPAU_iobuf__PBDHH_Z.offsets.emplace(ImportType::INTERNAL, 0x1B25C);

        ImportInfo imp__cnd_init_in_situ = { "_Cnd_init_in_situ" };
        imp__cnd_init_in_situ.offsets.emplace(ImportType::INTERNAL, 0x2B24);

        ImportInfo imp__getcat___codecvt_DDU_Mbstatet___std__SAIPAPBVfacet_locale_2_PBV42__Z = { "?_Getcat@?$codecvt@DDU_Mbstatet@@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z" };
        imp__getcat___codecvt_DDU_Mbstatet___std__SAIPAPBVfacet_locale_2_PBV42__Z.offsets.emplace(ImportType::INTERNAL, 0x1EC5B);

        ImportInfo imp___xbad_alloc_std__YAXXZ = { "?_Xbad_alloc@std@@YAXXZ" };
        imp___xbad_alloc_std__YAXXZ.offsets.emplace(ImportType::INTERNAL, 0x2C8E);

        ImportInfo imp___gettrue__Locinfo_std__QBEPBDXZ = { "?_Gettrue@_Locinfo@std@@QBEPBDXZ" };
        imp___gettrue__Locinfo_std__QBEPBDXZ.offsets.emplace(ImportType::INTERNAL, 0x11CCD);

        ImportInfo imp___getfalse__Locinfo_std__QBEPBDXZ = { "?_Getfalse@_Locinfo@std@@QBEPBDXZ" };
        imp___getfalse__Locinfo_std__QBEPBDXZ.offsets.emplace(ImportType::INTERNAL, 0x11CBB);

        ImportInfo imp___getgloballocale_locale_std__CAPAV_Locimp_12_XZ = { "?_Getgloballocale@locale@std@@CAPAV_Locimp@12@XZ" };
        imp___getgloballocale_locale_std__CAPAV_Locimp_12_XZ.offsets.emplace(ImportType::INTERNAL, 0x11C02);
        imp___getgloballocale_locale_std__CAPAV_Locimp_12_XZ.offsets.emplace(ImportType::INTERNAL, 0x1EC3A);

        ImportInfo imp__0_basic_ostream_DU__char_traits_D_std___std__QAE_PAV__basic_streambuf_DU__char_traits_D_std___1__N_Z = { "??0?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@1@_N@Z" };
        imp__0_basic_ostream_DU__char_traits_D_std___std__QAE_PAV__basic_streambuf_DU__char_traits_D_std___1__N_Z.offsets.emplace(ImportType::INTERNAL, 0x1B03B);

        ImportInfo imp___getlconv__Locinfo_std__QBEPBUlconv__XZ = { "?_Getlconv@_Locinfo@std@@QBEPBUlconv@@XZ" };
        imp___getlconv__Locinfo_std__QBEPBUlconv__XZ.offsets.emplace(ImportType::INTERNAL, 0x11C75);

        ImportInfo imp___init_locale_std__CAPAV_Locimp_12__N_Z = { "?_Init@locale@std@@CAPAV_Locimp@12@_N@Z" };
        imp___init_locale_std__CAPAV_Locimp_12__N_Z.offsets.emplace(ImportType::INTERNAL, 0xCEA8);
        imp___init_locale_std__CAPAV_Locimp_12__N_Z.offsets.emplace(ImportType::INTERNAL, 0x60159);

        ImportInfo imp__mtx_destroy_in_situ = { "_Mtx_destroy_in_situ" };
        imp__mtx_destroy_in_situ.offsets.emplace(ImportType::INTERNAL, 0x141527);

        ImportInfo imp___gninc___basic_streambuf_DU__char_traits_D_std___std__IAEPADXZ = { "?_Gninc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEPADXZ" };
        imp___gninc___basic_streambuf_DU__char_traits_D_std___std__IAEPADXZ.offsets.emplace(ImportType::INTERNAL, 0x1E526);

        ImportInfo imp___0__basic_streambuf_DU__char_traits_D_std___std__IAE_XZ = { "??0?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAE@XZ" };
        imp___0__basic_streambuf_DU__char_traits_D_std___std__IAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x1B071);

        ImportInfo imp___bid_locale_std__QAEIXZ = { "??Bid@locale@std@@QAEIXZ" };
        imp___bid_locale_std__QAEIXZ.offsets.emplace(ImportType::INTERNAL, 0x11BDA);
        imp___bid_locale_std__QAEIXZ.offsets.emplace(ImportType::INTERNAL, 0x1EC16);

        ImportInfo imp__thrd_join = { "_Thrd_join" };
        imp__thrd_join.offsets.emplace(ImportType::INTERNAL, 0x13D647);

        ImportInfo imp___1_Lockit_std__QAE_XZ = { "??1_Lockit@std@@QAE@XZ" };
        imp___1_Lockit_std__QAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x11C24);
        imp___1_Lockit_std__QAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x11D08);
        imp___1_Lockit_std__QAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x1EC88);

        ImportInfo imp___0_Lockit_std__QAE_H_Z = { "??0_Lockit@std@@QAE@H@Z" };
        imp___0_Lockit_std__QAE_H_Z.offsets.emplace(ImportType::INTERNAL, 0x11BC8);
        imp___0_Lockit_std__QAE_H_Z.offsets.emplace(ImportType::INTERNAL, 0x1EC02);

        ImportInfo imp___0_Locinfo_std__QAE_PBD_Z = { "??0_Locinfo@std@@QAE@PBD@Z" };
        imp___0_Locinfo_std__QAE_PBD_Z.offsets.emplace(ImportType::INTERNAL, 0x11C5E);

        ImportInfo imp___getcvt__Locinfo_std__QBE_AU_Cvtvec__XZ = { "?_Getcvt@_Locinfo@std@@QBE?AU_Cvtvec@@XZ" };
        imp___getcvt__Locinfo_std__QBE_AU_Cvtvec__XZ.offsets.emplace(ImportType::INTERNAL, 0x11C81);
        imp___getcvt__Locinfo_std__QBE_AU_Cvtvec__XZ.offsets.emplace(ImportType::INTERNAL, 0x11CA5);

        ImportInfo imp___1_Locinfo_std__QAE_XZ = { "??1_Locinfo@std@@QAE@XZ" };
        imp___1_Locinfo_std__QAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x11CE9);

        ImportInfo imp___throw_Cpp_error_std__YAXH_Z = { "?_Throw_Cpp_error@std@@YAXH@Z" };
        imp___throw_Cpp_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x458F2);
        imp___throw_Cpp_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0xE1E2F);
        imp___throw_Cpp_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D57F);
        imp___throw_Cpp_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D681);
        imp___throw_Cpp_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D689);

        ImportInfo imp__query_perf_frequency = { "_Query_perf_frequency" };
        imp__query_perf_frequency.offsets.emplace(ImportType::INTERNAL, 0x1305E);

        ImportInfo imp__always_noconv_codecvt_base_std__QBE_NXZ = { "?always_noconv@codecvt_base@std@@QBE_NXZ" };
        imp__always_noconv_codecvt_base_std__QBE_NXZ.offsets.emplace(ImportType::INTERNAL, 0x1B299);
        imp__always_noconv_codecvt_base_std__QBE_NXZ.offsets.emplace(ImportType::INTERNAL, 0x1EBC5);

        ImportInfo imp__query_perf_counter = { "_Query_perf_counter" };
        imp__query_perf_counter.offsets.emplace(ImportType::INTERNAL, 0x1306B);

        ImportInfo imp___0__basic_ios_DU__char_traits_D_std___std__IAE_XZ = { "??0?$basic_ios@DU?$char_traits@D@std@@@std@@IAE@XZ" };
        imp___0__basic_ios_DU__char_traits_D_std___std__IAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x1B022);

        ImportInfo imp___incref_facet_locale_std__UAEXXZ = { "?_Incref@facet@locale@std@@UAEXXZ" };
        imp___incref_facet_locale_std__UAEXXZ.offsets.emplace(ImportType::INTERNAL, 0x46C5A);

        ImportInfo imp___init___basic_streambuf_DU__char_traits_D_std___std__IAEXXZ = { "?_Init@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEXXZ" };
        imp___init___basic_streambuf_DU__char_traits_D_std___std__IAEXXZ.offsets.emplace(ImportType::INTERNAL, 0x1B099);
        imp___init___basic_streambuf_DU__char_traits_D_std___std__IAEXXZ.offsets.emplace(ImportType::INTERNAL, 0x1B2BE);
        imp___init___basic_streambuf_DU__char_traits_D_std___std__IAEXXZ.offsets.emplace(ImportType::INTERNAL, 0x1EBE1);
        imp___init___basic_streambuf_DU__char_traits_D_std___std__IAEXXZ.offsets.emplace(ImportType::INTERNAL, 0x1EEB8);
        imp___init___basic_streambuf_DU__char_traits_D_std___std__IAEXXZ.offsets.emplace(ImportType::INTERNAL, 0x1EF6B);

        ImportInfo imp__mtx_unclock = { "_Mtx_unlock" };
        imp__mtx_unclock.offsets.emplace(ImportType::INTERNAL, 0x457D8);
        imp__mtx_unclock.offsets.emplace(ImportType::INTERNAL, 0x13D3E0);
        imp__mtx_unclock.offsets.emplace(ImportType::INTERNAL, 0x13D433);
        imp__mtx_unclock.offsets.emplace(ImportType::INTERNAL, 0x13D66B);
        imp__mtx_unclock.offsets.emplace(ImportType::INTERNAL, 0x13D700);
        imp__mtx_unclock.offsets.emplace(ImportType::INTERNAL, 0x13D809);
        imp__mtx_unclock.offsets.emplace(ImportType::PUBLIC, 0x142164);

        ImportInfo imp__setstate___basic_ios_DU__char_traits_D_std___std__QAEXH_N_Z = { "?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z" };
        imp__setstate___basic_ios_DU__char_traits_D_std___std__QAEXH_N_Z.offsets.emplace(ImportType::INTERNAL, 0x1B315);
        imp__setstate___basic_ios_DU__char_traits_D_std___std__QAEXH_N_Z.offsets.emplace(ImportType::INTERNAL, 0x1B51B);

        ImportInfo imp__getloc___basic_streambuf_DU__char_traits_D_std___std__QBE_AVlocale_2_XZ = { "?getloc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QBE?AVlocale@2@XZ" };
        imp__getloc___basic_streambuf_DU__char_traits_D_std___std__QBE_AVlocale_2_XZ.offsets.emplace(ImportType::INTERNAL, 0x1B288);

        ImportInfo imp__clear___basic_ios_DU__char_traits_D_std___std__QAEXH_N_Z = { "?clear@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z" };
        imp__clear___basic_ios_DU__char_traits_D_std___std__QAEXH_N_Z.offsets.emplace(ImportType::INTERNAL, 0x1B2F6);
        imp__clear___basic_ios_DU__char_traits_D_std___std__QAEXH_N_Z.offsets.emplace(ImportType::INTERNAL, 0x1B4EF);

        ImportInfo imp__cnd_destroy_in_situ = { "_Cnd_destroy_in_situ" };
        imp__cnd_destroy_in_situ.offsets.emplace(ImportType::INTERNAL, 0x14151C);

        ImportInfo imp__cnd_broadcast = { "_Cnd_broadcast" };
        imp__cnd_broadcast.offsets.emplace(ImportType::INTERNAL, 0x13D3A2);
        imp__cnd_broadcast.offsets.emplace(ImportType::INTERNAL, 0x13D609);
        imp__cnd_broadcast.offsets.emplace(ImportType::INTERNAL, 0x13D7BF);

        ImportInfo imp__xsputn___basic_streambuf_DU__char_traits_D_std___std__MAE_JPBD_J_Z = { "?xsputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JPBD_J@Z" };
        imp__xsputn___basic_streambuf_DU__char_traits_D_std___std__MAE_JPBD_J_Z.offsets.emplace(ImportType::INTERNAL, 0x1E89F);

        ImportInfo imp___1__basic_streambuf_DU__char_traits_D_std___std__UAE_XZ = { "??1?$basic_streambuf@DU?$char_traits@D@std@@@std@@UAE@XZ" };
        imp___1__basic_streambuf_DU__char_traits_D_std___std__UAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x1CB5F);
        imp___1__basic_streambuf_DU__char_traits_D_std___std__UAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x1E353);

        ImportInfo imp___1__basic_ios_DU__char_traits_D_std___std__UAE_XZ = { "??1?$basic_ios@DU?$char_traits@D@std@@@std@@UAE@XZ" };
        imp___1__basic_ios_DU__char_traits_D_std___std__UAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x1CB72);

        ImportInfo imp___1__basic_ostream_DU__char_traits_D_std___std__UAE_XZ = { "??1?$basic_ostream@DU?$char_traits@D@std@@@std@@UAE@XZ" };
        imp___1__basic_ostream_DU__char_traits_D_std___std__UAE_XZ.offsets.emplace(ImportType::INTERNAL, 0x1CB68);

        ImportInfo imp__xsgetn___basic_streambuf_DU__char_traits_D_std___std__MAE_JPAD_J_Z = { "?xsgetn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JPAD_J@Z" };
        imp__xsgetn___basic_streambuf_DU__char_traits_D_std___std__MAE_JPAD_J_Z.offsets.emplace(ImportType::INTERNAL, 0x1E748);

        ImportInfo imp___pninc___basic_streambuf_DU__char_traits_D_std___std__IAEPADXZ = { "?_Pninc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@IAEPADXZ" };
        imp___pninc___basic_streambuf_DU__char_traits_D_std___std__IAEPADXZ.offsets.emplace(ImportType::INTERNAL, 0x1ED14);

        ImportInfo imp__out___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PBD1AAPBDPAD3AAPAD_Z = { "?out@?$codecvt@DDU_Mbstatet@@@std@@QBEHAAU_Mbstatet@@PBD1AAPBDPAD3AAPAD@Z" };
        imp__out___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PBD1AAPBDPAD3AAPAD_Z.offsets.emplace(ImportType::INTERNAL, 0x1ED7A);

        ImportInfo imp__unshift___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PAD1AAPAD_Z = { "?unshift@?$codecvt@DDU_Mbstatet@@@std@@QBEHAAU_Mbstatet@@PAD1AAPAD@Z" };
        imp__unshift___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PAD1AAPAD_Z.offsets.emplace(ImportType::INTERNAL, 0x1EE37);

        ImportInfo imp___throw_C_error_std__YAXH_Z = { "?_Throw_C_error@std@@YAXH@Z" };
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x457E6);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D441);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D5CA);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D617);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D679);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D6B9);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D70E);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D792);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D7CD);
        imp___throw_C_error_std__YAXH_Z.offsets.emplace(ImportType::INTERNAL, 0x13D817);

        ImportInfo imp__cnd_do_broadcast_at_thread_exit = { "_Cnd_do_broadcast_at_thread_exit" };
        imp__cnd_do_broadcast_at_thread_exit.offsets.emplace(ImportType::INTERNAL, 0x45E80);

        ImportInfo imp__thrd_hardware_concurrency = { "_Thrd_hardware_concurrency" };
        imp__thrd_hardware_concurrency.offsets.emplace(ImportType::INTERNAL, 0xE1C8A);

        ImportInfo imp__decref_facet_locale_std__UAEPAV_Facet_base_3_XZ = { "?_Decref@facet@locale@std@@UAEPAV_Facet_base@3@XZ" };
        imp__decref_facet_locale_std__UAEPAV_Facet_base_3_XZ.offsets.emplace(ImportType::INTERNAL, 0x46C54);

        ImportInfo imp___syserror_map_std__YAPBDH_Z = { "?_Syserror_map@std@@YAPBDH@Z" };
        imp___syserror_map_std__YAPBDH_Z.offsets.emplace(ImportType::INTERNAL, 0x45F7A);

        ImportInfo imp___execute_once_std__YAHAAUonce_flag_1_P6GHPAX1PAPAX_Z1_Z = { "?_Execute_once@std@@YAHAAUonce_flag@1@P6GHPAX1PAPAX@Z1@Z" };
        imp___execute_once_std__YAHAAUonce_flag_1_P6GHPAX1PAPAX_Z1_Z.offsets.emplace(ImportType::INTERNAL, 0x46087);

        ImportInfo imp__showmanyc___basic_streambuf_DU__char_traits_D_std___std__MAE_JXZ = { "?showmanyc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MAE_JXZ" };
        imp__showmanyc___basic_streambuf_DU__char_traits_D_std___std__MAE_JXZ.offsets.emplace(ImportType::INTERNAL, 0x46CE4);

        ImportInfo imp__mtx_lock = { "_Mtx_lock" };
        imp__mtx_lock.offsets.emplace(ImportType::INTERNAL, 0x13D239);
        imp__mtx_lock.offsets.emplace(ImportType::INTERNAL, 0x13D29F);
        imp__mtx_lock.offsets.emplace(ImportType::INTERNAL, 0x13D348);
        imp__mtx_lock.offsets.emplace(ImportType::INTERNAL, 0x13D5BC);
        imp__mtx_lock.offsets.emplace(ImportType::INTERNAL, 0x13D6AB);
        imp__mtx_lock.offsets.emplace(ImportType::INTERNAL, 0x13D784);

        ImportInfo imp__cnd_wait = { "_Cnd_wait" };
        imp__cnd_wait.offsets.emplace(ImportType::INTERNAL, 0x13D26F);
        imp__cnd_wait.offsets.emplace(ImportType::PUBLIC, 0x142184);

        ImportInfo imp____7facet_locale_std__6B_ = { "??_7facet@locale@std@@6B@" };
        imp____7facet_locale_std__6B_.offsets.emplace(ImportType::PUBLIC, 0x1420B0);

        ImportInfo imp____7_Facet_base_std__6B_ = { "??_7_Facet_base@std@@6B@" };
        imp____7_Facet_base_std__6B_.offsets.emplace(ImportType::PUBLIC, 0x1420B4);

        ImportInfo imp__id___numpunct_D_std__2V0locale_2_A = { "?id@?$numpunct@D@std@@2V0locale@2@A" };
        imp__id___numpunct_D_std__2V0locale_2_A.offsets.emplace(ImportType::PUBLIC, 0x1420E8);

        ImportInfo imp__id___codecvt_DDU_Mbstatet___std__2V0locale_2_A = { "?id@?$codecvt@DDU_Mbstatet@@@std@@2V0locale@2@A" };
        imp__id___codecvt_DDU_Mbstatet___std__2V0locale_2_A.offsets.emplace(ImportType::PUBLIC, 0x142118);

        ImportInfo imp__getCurrentThreadId_platform_details_Concurrency__YAJXZ = { "?GetCurrentThreadId@platform@details@Concurrency@@YAJXZ" };
        imp__getCurrentThreadId_platform_details_Concurrency__YAJXZ.offsets.emplace(ImportType::PUBLIC, 0x142178);

        imports.emplace(("msvcp140.dll"), std::vector<ImportInfo>({ imp___xbad_function_call_std__YAXXZ, imp___xlength_error_std__YAXPBD_Z, imp__in___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PBD1AAPBDPAD3AAPAD_Z,
                                                                      imp___xout_of_range_std__YAXPBD_Z, imp__mtx_init_in_situ, imp___fiopen_std__YAPAU_iobuf__PBDHH_Z, imp__cnd_init_in_situ,
                                                                      imp__getcat___codecvt_DDU_Mbstatet___std__SAIPAPBVfacet_locale_2_PBV42__Z, imp___xbad_alloc_std__YAXXZ, imp___gettrue__Locinfo_std__QBEPBDXZ,
                                                                      imp___getfalse__Locinfo_std__QBEPBDXZ, imp___getgloballocale_locale_std__CAPAV_Locimp_12_XZ,
                                                                      imp__0_basic_ostream_DU__char_traits_D_std___std__QAE_PAV__basic_streambuf_DU__char_traits_D_std___1__N_Z, imp___getlconv__Locinfo_std__QBEPBUlconv__XZ,
                                                                      imp___init_locale_std__CAPAV_Locimp_12__N_Z, imp__mtx_destroy_in_situ, imp___gninc___basic_streambuf_DU__char_traits_D_std___std__IAEPADXZ,
                                                                      imp___0__basic_streambuf_DU__char_traits_D_std___std__IAE_XZ, imp___bid_locale_std__QAEIXZ, imp__thrd_join, imp___1_Lockit_std__QAE_XZ, imp___0_Lockit_std__QAE_H_Z,
                                                                      imp___0_Locinfo_std__QAE_PBD_Z, imp___getcvt__Locinfo_std__QBE_AU_Cvtvec__XZ, imp___1_Locinfo_std__QAE_XZ, imp___throw_Cpp_error_std__YAXH_Z, imp__query_perf_frequency,
                                                                      imp__always_noconv_codecvt_base_std__QBE_NXZ, imp__query_perf_counter, imp___0__basic_ios_DU__char_traits_D_std___std__IAE_XZ, imp___incref_facet_locale_std__UAEXXZ,
                                                                      imp___init___basic_streambuf_DU__char_traits_D_std___std__IAEXXZ, imp__mtx_unclock, imp__setstate___basic_ios_DU__char_traits_D_std___std__QAEXH_N_Z,
                                                                      imp__getloc___basic_streambuf_DU__char_traits_D_std___std__QBE_AVlocale_2_XZ, imp__clear___basic_ios_DU__char_traits_D_std___std__QAEXH_N_Z, imp__cnd_destroy_in_situ,
                                                                      imp__cnd_broadcast, imp__xsputn___basic_streambuf_DU__char_traits_D_std___std__MAE_JPBD_J_Z, imp___1__basic_streambuf_DU__char_traits_D_std___std__UAE_XZ,
                                                                      imp___1__basic_ios_DU__char_traits_D_std___std__UAE_XZ, imp___1__basic_ostream_DU__char_traits_D_std___std__UAE_XZ, imp__xsgetn___basic_streambuf_DU__char_traits_D_std___std__MAE_JPAD_J_Z,
                                                                      imp___pninc___basic_streambuf_DU__char_traits_D_std___std__IAEPADXZ, imp__out___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PBD1AAPBDPAD3AAPAD_Z,
                                                                      imp__unshift___codecvt_DDU_Mbstatet___std__QBEHAAU_Mbstatet__PAD1AAPAD_Z, imp___throw_C_error_std__YAXH_Z, imp__cnd_do_broadcast_at_thread_exit, imp__thrd_hardware_concurrency,
                                                                      imp__decref_facet_locale_std__UAEPAV_Facet_base_3_XZ, imp___syserror_map_std__YAPBDH_Z, imp___execute_once_std__YAHAAUonce_flag_1_P6GHPAX1PAPAX_Z1_Z,
                                                                      imp__showmanyc___basic_streambuf_DU__char_traits_D_std___std__MAE_JXZ, imp__mtx_lock, imp__cnd_wait, imp____7facet_locale_std__6B_, imp____7_Facet_base_std__6B_,
                                                                      imp__id___numpunct_D_std__2V0locale_2_A, imp__id___codecvt_DDU_Mbstatet___std__2V0locale_2_A, imp__getCurrentThreadId_platform_details_Concurrency__YAJXZ }));

        ImportInfo imp___stdio_common_vsprintf = { "__stdio_common_vsprintf" };
        imp___stdio_common_vsprintf.offsets.emplace(ImportType::INTERNAL, 0xC363);
        imp___stdio_common_vsprintf.offsets.emplace(ImportType::INTERNAL, 0x2EFF1);
        imp___stdio_common_vsprintf.offsets.emplace(ImportType::INTERNAL, 0x139EBC);

        ImportInfo imp__invalid_parameter_noinfo_noreturn = { "_invalid_parameter_noinfo_noreturn" };
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2bc3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2c07);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2f2c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3061);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3110);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x318d);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3209);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3244);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x34c9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3716);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x54ec);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5661);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5c23);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5c77);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5ce7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5e82);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5fdf);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6099);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6126);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6246);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6382);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6416);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x646f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6562);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6953);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6b49);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6dae);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6e5f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x700e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x71c4);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x7590);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x8935);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x89de);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x8a8e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x8b6f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x8c4f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x8d33);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x9102);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x924a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x97d3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x996e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x99cd);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x9a42);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x9ae1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x9b7e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x9d1d);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x9d69);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x9daa);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x9de9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xa0e8);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xa2b0);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xa4c9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xa589);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xab2a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xaea5);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xaf76);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xb40e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xb6a2);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xb9c2);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xbc80);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xc2fe);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xc776);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xc7ca);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xc85f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xc996);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xca94);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xcb02);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xcc0c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xccdb);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xcd94);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xce67);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xd05e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xfd9f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1014a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x122a1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x12396);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1246f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x124cf);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x12df9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x12e8e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x13bea);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x14080);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x14160);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x14200);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x158cf);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x171f7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x17307);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x17417);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x17527);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1855b);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x187b9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x18962);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x18c78);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x18f72);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x19032);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x191a0);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x19276);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x19329);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x19574);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1aa20);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1abf3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1afd6);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1b4c8);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1b5dd);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1bc06);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1bdf9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1bfa7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1c09c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1c1a0);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1c346);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1cf13);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1cf69);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1cfc7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1d019);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1d1d8);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1ddf2);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1e69d);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1f0d7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1f159);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1f27c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1f330);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1f721);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2ceba);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2cf91);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2d1da);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2d29c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2d4da);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2d5b1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2d72e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2d96a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2da5c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2dc9a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2dd72);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2def4);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2e13a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2e20a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2e44a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2e514);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2e75a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2e824);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2ea6a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2eb2e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2ef62);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x2f5be);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x31029);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3110d);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x314ed);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x31742);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x31d9a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x31e9b);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x324e0);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x326e2);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x32919);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x339f3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x33bf9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x33ca2);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x33d1f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x34088);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x34172);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x34a3b);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x34e32);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x34f13);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x34ff1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x350d0);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x35196);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x35270);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x35389);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x35486);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x368ce);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x36a6e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x36ac9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x36b27);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x37ed9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3891e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3b1d2);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3c644);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3c70c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3cf14);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3dfe9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3e0c6);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3e124);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3efac);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3f184);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3f4a8);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x3f63e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x40343);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x40389);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x405a5);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x40edf);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x40f59);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x41101);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x41fcb);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x420d0);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x42913);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x42b61);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x42c1e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x4304f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x432b7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x4344e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x43604);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x43ae3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x44837);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x44aed);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x45157);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x4543e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x45741);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x457bb);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x45879);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x45aaa);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x45cc4);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x4619a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x4622e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x46276);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x46887);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x46ab6);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5074f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x509c9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5af2a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5b009);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5b536);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5b681);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5b6bf);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5b79c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5b856);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5d8c3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5d982);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5da1e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5dac0);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5db5a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x5eeab);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6035a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x60630);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x60681);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x62335);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x62676);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x62708);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x63eef);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x644f5);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x64cdf);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x65397);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x65447);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6566a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x65835);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x65abb);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x66b16);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x66ba7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x670cc);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6715e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x676de);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x677df);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x67ca3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x67f0b);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x68945);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x691b2);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x693db);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x69ce4);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x69e25);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6a15c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6a3ca);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6a65a);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6b37f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6b496);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6bba8);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6bf52);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x6c21b);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe106b);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe1821);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe18e3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe1e69);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe1f63);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe200d);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe21ae);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe309c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe4f7e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xe5cd7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xec8c1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xec9eb);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xecfa1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xed6c1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xf25a7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xf3bf7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0xfdce7);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x110d9c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x110ea9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1138f9);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1143fa);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x115ddd);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x11dda0);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x11fd1f);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1252fe);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x128dfb);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x133481);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x133d6d);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1353d6);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x137d7c);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x13b907);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x13e6bb);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x13f66b);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x14062e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1408c1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x140921);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x140aa1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x140d61);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x140e81);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1410fe);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x14115e);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1411be);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x141269);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1412b1);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1414a3);
        imp__invalid_parameter_noinfo_noreturn.offsets.emplace(ImportType::INTERNAL, 0x1415a3);

        ImportInfo imp_fputc = { "fputc" };
        imp_fputc.offsets.emplace(ImportType::INTERNAL, 0x1ED96);

        ImportInfo imp_fflush = { "fflush" };
        imp_fflush.offsets.emplace(ImportType::INTERNAL, 0x1EB9A);

        ImportInfo imp_clock = { "clock" };
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x13A25);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x13C25);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x13CC5);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x14535);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x145F5);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x148C5);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x14965);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x14D35);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x14DF5);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x15A12);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x16685);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x16735);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x16833);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x16872);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x4634B);
        imp_clock.offsets.emplace(ImportType::INTERNAL, 0x6BDE7);
        imp_clock.offsets.emplace(ImportType::PUBLIC, 0x14232C);

        ImportInfo imp__dtest = { "_dtest" };
        imp__dtest.offsets.emplace(ImportType::INTERNAL, 0xE996);
        imp__dtest.offsets.emplace(ImportType::INTERNAL, 0xE9F2);

        ImportInfo imp_ispunct = { "ispunct" };
        imp_ispunct.offsets.emplace(ImportType::INTERNAL, 0xFDADE);
        imp_ispunct.offsets.emplace(ImportType::INTERNAL, 0x110F7D);

        ImportInfo imp__initialize_narrow_environment = { "_initialize_narrow_environment" };
        imp__initialize_narrow_environment.offsets.emplace(ImportType::INTERNAL, 0x47A8B);

        ImportInfo imp__dsign = { "_dsign" };
        imp__dsign.offsets.emplace(ImportType::INTERNAL, 0xE92F);
        imp__dsign.offsets.emplace(ImportType::INTERNAL, 0xEB8F);

        ImportInfo imp__fdtest = { "_fdtest" };
        imp__fdtest.offsets.emplace(ImportType::INTERNAL, 0x56AF);
        imp__fdtest.offsets.emplace(ImportType::INTERNAL, 0x5A6F4);
        imp__fdtest.offsets.emplace(ImportType::INTERNAL, 0x5A712);
        imp__fdtest.offsets.emplace(ImportType::INTERNAL, 0x1255B4);
        imp__fdtest.offsets.emplace(ImportType::INTERNAL, 0x12676B);
        imp__fdtest.offsets.emplace(ImportType::PUBLIC, 0x142240);

        ImportInfo imp_calloc = { "calloc" };
        imp_calloc.offsets.emplace(ImportType::INTERNAL, 0x2C7F);

        ImportInfo imp__lock_file = { "_lock_file" };
        imp__lock_file.offsets.emplace(ImportType::INTERNAL, 0x1E37A);

        ImportInfo imp___stdio_common_vsnprintf_s = { "__stdio_common_vsnprintf_s" };
        imp___stdio_common_vsnprintf_s.offsets.emplace(ImportType::INTERNAL, 0xC933);
        imp___stdio_common_vsnprintf_s.offsets.emplace(ImportType::INTERNAL, 0x11DA25);

        ImportInfo imp_isalnum = { "isalnum" };
        imp_isalnum.offsets.emplace(ImportType::INTERNAL, 0xFDB00);
        imp_isalnum.offsets.emplace(ImportType::INTERNAL, 0x110F9F);

        ImportInfo imp_isdigit = { "isdigit" };
        imp_isdigit.offsets.emplace(ImportType::INTERNAL, 0x340F3);
        imp_isdigit.offsets.emplace(ImportType::INTERNAL, 0xEC506);
        imp_isdigit.offsets.emplace(ImportType::INTERNAL, 0xEC546);

        ImportInfo imp__unlock_file = { "_unlock_file" };
        imp__unlock_file.offsets.emplace(ImportType::INTERNAL, 0x1E38A);

        ImportInfo imp___stdio_common_vsprintf_s = { "__stdio_common_vsprintf_s" };
        imp___stdio_common_vsprintf_s.offsets.emplace(ImportType::INTERNAL, 0x6D01);
        imp___stdio_common_vsprintf_s.offsets.emplace(ImportType::INTERNAL, 0x8F60);

        ImportInfo imp_strerror_s = { "strerror_s" };
        imp_strerror_s.offsets.emplace(ImportType::INTERNAL, 0x601E6);
        imp_strerror_s.offsets.emplace(ImportType::INTERNAL, 0x61660);

        ImportInfo imp_roundf = { "roundf" };
        imp_roundf.offsets.emplace(ImportType::INTERNAL, 0x5B22);
        imp_roundf.offsets.emplace(ImportType::INTERNAL, 0x5B3F);
        imp_roundf.offsets.emplace(ImportType::INTERNAL, 0x147AA);
        imp_roundf.offsets.emplace(ImportType::INTERNAL, 0x4C7EA);
        imp_roundf.offsets.emplace(ImportType::INTERNAL, 0x4C879);

        ImportInfo imp__ldtest = { "_ldtest" };
        imp__ldtest.offsets.emplace(ImportType::INTERNAL, 0xEBF6);
        imp__ldtest.offsets.emplace(ImportType::INTERNAL, 0xEC52);

        ImportInfo imp_fgetpos = { "fgetpos" };
        imp_fgetpos.offsets.emplace(ImportType::INTERNAL, 0x1E9E2);

        ImportInfo imp_strncpy_s = { "strncpy_s" };
        imp_strncpy_s.offsets.emplace(ImportType::INTERNAL, 0x15EB3);
        imp_strncpy_s.offsets.emplace(ImportType::INTERNAL, 0x46561);
        imp_strncpy_s.offsets.emplace(ImportType::INTERNAL, 0x46600);
        imp_strncpy_s.offsets.emplace(ImportType::INTERNAL, 0x66879);
        imp_strncpy_s.offsets.emplace(ImportType::INTERNAL, 0x66CC5);
        imp_strncpy_s.offsets.emplace(ImportType::PUBLIC, 0x142308);

        ImportInfo imp_atoi = { "atoi" };
        imp_atoi.offsets.emplace(ImportType::INTERNAL, 0x18F25);
        imp_atoi.offsets.emplace(ImportType::INTERNAL, 0x18FE5);
        imp_atoi.offsets.emplace(ImportType::INTERNAL, 0xEC5CC);

        ImportInfo imp_fwrite = { "fwrite" };
        imp_fwrite.offsets.emplace(ImportType::INTERNAL, 0x1E949);
        imp_fwrite.offsets.emplace(ImportType::INTERNAL, 0x1EDC3);
        imp_fwrite.offsets.emplace(ImportType::INTERNAL, 0x1EE6C);
        imp_fwrite.offsets.emplace(ImportType::INTERNAL, 0x626A3);

        ImportInfo imp_tolower = { "tolower" };
        imp_tolower.offsets.emplace(ImportType::INTERNAL, 0x503C7);
        imp_tolower.offsets.emplace(ImportType::INTERNAL, 0x50887);
        imp_tolower.offsets.emplace(ImportType::INTERNAL, 0xFDB12);
        imp_tolower.offsets.emplace(ImportType::INTERNAL, 0x110FB1);
        imp_tolower.offsets.emplace(ImportType::PUBLIC, 0x1422F4);

        ImportInfo imp__cexit = { "_cexit" };
        imp__cexit.offsets.emplace(ImportType::INTERNAL, 0x47AA9);

        ImportInfo imp_strncmp = { "strncmp" };
        imp_strncmp.offsets.emplace(ImportType::INTERNAL, 0x1A4BB);
        imp_strncmp.offsets.emplace(ImportType::INTERNAL, 0x11D6A8);

        ImportInfo imp_fmaxf = { "fmaxf" };
        imp_fmaxf.offsets.emplace(ImportType::INTERNAL, 0x124D03);

        ImportInfo imp_remove = { "remove" };
        imp_remove.offsets.emplace(ImportType::INTERNAL, 0x1B76E);
        imp_remove.offsets.emplace(ImportType::INTERNAL, 0x625E1);
        imp_remove.offsets.emplace(ImportType::INTERNAL, 0x626D9);

        ImportInfo imp_ungetc = { "ungetc" };
        imp_ungetc.offsets.emplace(ImportType::INTERNAL, 0x1E3EA);
        imp_ungetc.offsets.emplace(ImportType::INTERNAL, 0x1E4AB);
        imp_ungetc.offsets.emplace(ImportType::PUBLIC, 0x1422E8);

        ImportInfo imp_fgetc = { "fgetc" };
        imp_fgetc.offsets.emplace(ImportType::INTERNAL, 0x1E56F);
        imp_fgetc.offsets.emplace(ImportType::INTERNAL, 0x1E59C);
        imp_fgetc.offsets.emplace(ImportType::INTERNAL, 0x1E65C);

        ImportInfo imp__fseeki64 = { "_fseeki64" };
        imp__fseeki64.offsets.emplace(ImportType::INTERNAL, 0x1E9CD);

        ImportInfo imp_fopen = { "fopen" };
        imp_fopen.offsets.emplace(ImportType::INTERNAL, 0x62645);

        ImportInfo imp_fsetpos = { "fsetpos" };
        imp_fsetpos.offsets.emplace(ImportType::INTERNAL, 0x1EA9A);

        ImportInfo imp_setvbuf = { "setvbuf" };
        imp_setvbuf.offsets.emplace(ImportType::INTERNAL, 0x1EB5B);

        ImportInfo imp__cIfmod = { "_CIfmod" };
        imp__cIfmod.offsets.emplace(ImportType::INTERNAL, 0x1401A7);

        ImportInfo imp__get_stream_buffer_pointers = { "_get_stream_buffer_pointers" };
        imp__get_stream_buffer_pointers.offsets.emplace(ImportType::INTERNAL, 0x1EEE7);

        ImportInfo imp_fclose = { "fclose" };
        imp_fclose.offsets.emplace(ImportType::INTERNAL, 0x1EF51);
        imp_fclose.offsets.emplace(ImportType::INTERNAL, 0x626AA);

        ImportInfo imp_strcpy_s = { "strcpy_s" };
        imp_strcpy_s.offsets.emplace(ImportType::INTERNAL, 0x1F816);
        imp_strcpy_s.offsets.emplace(ImportType::INTERNAL, 0x1F896);
        imp_strcpy_s.offsets.emplace(ImportType::INTERNAL, 0x110E7A);
        imp_strcpy_s.offsets.emplace(ImportType::INTERNAL, 0x1111BA);

        ImportInfo imp__libm_sse2_asin_precise = { "_libm_sse2_asin_precise" };
        imp__libm_sse2_asin_precise.offsets.emplace(ImportType::INTERNAL, 0x1401AD);

        ImportInfo imp_toupper = { "toupper" };
        imp_toupper.offsets.emplace(ImportType::INTERNAL, 0xE2C39);
        imp_toupper.offsets.emplace(ImportType::INTERNAL, 0xE3EA6);
        imp_toupper.offsets.emplace(ImportType::INTERNAL, 0xE3F66);

        ImportInfo imp_fminf = { "fminf" };
        imp_fminf.offsets.emplace(ImportType::INTERNAL, 0x124D42);

        ImportInfo imp__execute_onexit_table = { "_execute_onexit_table" };
        imp__execute_onexit_table.offsets.emplace(ImportType::INTERNAL, 0x47A9D);

        ImportInfo imp___stdio_common_vsscanf = { "__stdio_common_vsscanf" };
        imp___stdio_common_vsscanf.offsets.emplace(ImportType::INTERNAL, 0x2EFBD);

        ImportInfo imp_terminate = { "terminate" };
        imp_terminate.offsets.emplace(ImportType::INTERNAL, 0x457B5);
        imp_terminate.offsets.emplace(ImportType::INTERNAL, 0x458A3);
        imp_terminate.offsets.emplace(ImportType::INTERNAL, 0x45AA4);
        imp_terminate.offsets.emplace(ImportType::INTERNAL, 0x46094);

        ImportInfo imp__initialize_onexit_table = { "_initialize_onexit_table" };
        imp__initialize_onexit_table.offsets.emplace(ImportType::INTERNAL, 0x47A91);

        ImportInfo imp__beginthreadex = { "_beginthreadex" };
        imp__beginthreadex.offsets.emplace(ImportType::INTERNAL, 0x458DF);
        imp__beginthreadex.offsets.emplace(ImportType::INTERNAL, 0xE1CF5);
        imp__beginthreadex.offsets.emplace(ImportType::INTERNAL, 0x13D52F);

        ImportInfo imp_malloc = { "malloc" };
        imp_malloc.offsets.emplace(ImportType::INTERNAL, 0x47A79);

        ImportInfo imp_free = { "free" };
        imp_free.offsets.emplace(ImportType::INTERNAL, 0x47A6D);
        imp_free.offsets.emplace(ImportType::PUBLIC, 0x142208);

        ImportInfo imp__callnewh = { "_callnewh" };
        imp__callnewh.offsets.emplace(ImportType::INTERNAL, 0x47A73);

        ImportInfo imp__seh_filter_dll = { "_seh_filter_dll" };
        imp__seh_filter_dll.offsets.emplace(ImportType::INTERNAL, 0x47A7F);

        ImportInfo imp__configure_narrow_argv = { "_configure_narrow_argv" };
        imp__configure_narrow_argv.offsets.emplace(ImportType::INTERNAL, 0x47A85);

        ImportInfo imp__CIatan2 = { "_CIatan2" };
        imp__CIatan2.offsets.emplace(ImportType::INTERNAL, 0x1401A1);

        ImportInfo imp__register_onexit_function = { "_register_onexit_function" };
        imp__register_onexit_function.offsets.emplace(ImportType::INTERNAL, 0x47A97);

        ImportInfo imp_strftime = { "strftime" };
        imp_strftime.offsets.emplace(ImportType::INTERNAL, 0x12D369);

        ImportInfo imp_rand = { "rand" };
        imp_rand.offsets.emplace(ImportType::INTERNAL, 0x4C549);
        imp_rand.offsets.emplace(ImportType::INTERNAL, 0xE0F02);
        imp_rand.offsets.emplace(ImportType::INTERNAL, 0x11330F);

        ImportInfo imp__crt_atexit = { "_crt_atexit" };
        imp__crt_atexit.offsets.emplace(ImportType::INTERNAL, 0x47AA3);

        ImportInfo imp__initterm = { "_initterm" };
        imp__initterm.offsets.emplace(ImportType::INTERNAL, 0x47AAF);

        ImportInfo imp_towupper = { "towupper" };
        imp_towupper.offsets.emplace(ImportType::INTERNAL, 0xE2B86);
        imp_towupper.offsets.emplace(ImportType::INTERNAL, 0xE42B6);
        imp_towupper.offsets.emplace(ImportType::INTERNAL, 0xE9FC6);
        imp_towupper.offsets.emplace(ImportType::PUBLIC, 0x142320);

        ImportInfo imp__initterm_e = { "_initterm_e" };
        imp__initterm_e.offsets.emplace(ImportType::INTERNAL, 0x47AB5);

        ImportInfo imp_abort = { "abort" };
        imp_abort.offsets.emplace(ImportType::INTERNAL, 0x628B2);

        ImportInfo imp_strtol = { "strtol" };
        imp_strtol.offsets.emplace(ImportType::INTERNAL, 0x66B42);

        ImportInfo imp_strtoul = { "strtoul" };
        imp_strtoul.offsets.emplace(ImportType::PUBLIC, 0x1421F0);

        ImportInfo imp__time64 = { "_time64" };
        imp__time64.offsets.emplace(ImportType::INTERNAL, 0x12CE84);
        imp__time64.offsets.emplace(ImportType::INTERNAL, 0x12D2F5);

        ImportInfo imp__localtime64 = { "_localtime64" };
        imp__localtime64.offsets.emplace(ImportType::INTERNAL, 0x12CE93);
        imp__localtime64.offsets.emplace(ImportType::INTERNAL, 0x12D308);

        ImportInfo imp___stdio_common_vswprintf = { "__stdio_common_vswprintf" };
        imp___stdio_common_vswprintf.offsets.emplace(ImportType::INTERNAL, 0x139DBD);

        ImportInfo imp__libm_sse2_atan_precise = { "_libm_sse2_atan_precise" };
        imp__libm_sse2_atan_precise.offsets.emplace(ImportType::INTERNAL, 0x1401B3);

        ImportInfo imp__libm_sse2_cos_precise = { "_libm_sse2_cos_precise" };
        imp__libm_sse2_cos_precise.offsets.emplace(ImportType::INTERNAL, 0x1401B9);

        ImportInfo imp__libm_sse2_exp_precise = { "_libm_sse2_exp_precise" };
        imp__libm_sse2_exp_precise.offsets.emplace(ImportType::INTERNAL, 0x1401BF);

        ImportInfo imp__libm_sse2_pow_precise = { "_libm_sse2_pow_precise" };
        imp__libm_sse2_pow_precise.offsets.emplace(ImportType::INTERNAL, 0x1401C5);

        ImportInfo imp__libm_sse2_sin_precise = { "_libm_sse2_sin_precise" };
        imp__libm_sse2_sin_precise.offsets.emplace(ImportType::INTERNAL, 0x1401CB);

        ImportInfo imp__libm_sse2_sqrt_precise = { "_libm_sse2_sqrt_precise" };
        imp__libm_sse2_sqrt_precise.offsets.emplace(ImportType::INTERNAL, 0x1401D1);

        ImportInfo imp__libm_sse2_tan_precise = { "_libm_sse2_tan_precise" };
        imp__libm_sse2_tan_precise.offsets.emplace(ImportType::INTERNAL, 0x1401D7);

        ImportInfo imp_ceil = { "ceil" };
        imp_ceil.offsets.emplace(ImportType::INTERNAL, 0x1401DD);

        ImportInfo imp_fread = { "fread" };
        imp_fread.offsets.emplace(ImportType::PUBLIC, 0x1422C8);

        ImportInfo imp_towlower = { "towlower" };
        imp_towlower.offsets.emplace(ImportType::PUBLIC, 0x142300);

        ImportInfo imp_isspace = { "isspace" };
        imp_isspace.offsets.emplace(ImportType::PUBLIC, 0x14230C);

        ImportInfo imp_strcat_s = { "strcat_s" };
        imp_strcat_s.offsets.emplace(ImportType::PUBLIC, 0x14231C);

        imports.emplace(("ucrtbase.dll"), std::vector<ImportInfo>({ imp___stdio_common_vsprintf, imp__invalid_parameter_noinfo_noreturn, imp_fputc, imp_fflush, imp_clock,
                                                                      imp__dtest, imp_ispunct, imp__initialize_narrow_environment, imp__dsign, imp__fdtest, imp_calloc,
                                                                      imp__lock_file, imp___stdio_common_vsnprintf_s, imp_isalnum, imp_isdigit, imp__unlock_file,
                                                                      imp___stdio_common_vsprintf_s, imp_strerror_s, imp_roundf, imp__ldtest, imp_fgetpos, imp_strncpy_s,
                                                                      imp_atoi, imp_fwrite, imp_tolower, imp__cexit, imp_strncmp, imp_fmaxf, imp_remove, imp_ungetc,
                                                                      imp_fgetc, imp__fseeki64, imp_fopen, imp_fsetpos, imp_setvbuf, imp__cIfmod, imp__get_stream_buffer_pointers,
                                                                      imp_fclose, imp_strcpy_s, imp__libm_sse2_asin_precise, imp_toupper, imp_fminf, imp__execute_onexit_table,
                                                                      imp___stdio_common_vsscanf, imp_terminate, imp__initialize_onexit_table, imp__beginthreadex, imp_malloc,
                                                                      imp_free, imp__callnewh, imp__seh_filter_dll, imp__configure_narrow_argv, imp__CIatan2, imp__register_onexit_function,
                                                                      imp_strftime, imp_rand, imp__crt_atexit, imp__initterm, imp_towupper, imp__initterm_e, imp_abort, imp_strtol,
                                                                      imp__time64, imp__localtime64, imp___stdio_common_vswprintf, imp__libm_sse2_atan_precise, imp__libm_sse2_cos_precise,
                                                                      imp__libm_sse2_exp_precise, imp__libm_sse2_pow_precise, imp__libm_sse2_sin_precise, imp__libm_sse2_sqrt_precise,
                                                                      imp__libm_sse2_tan_precise, imp_ceil, imp_fread, imp_towlower, imp_isspace, imp_strcat_s, imp_strtoul }));

        ImportInfo imp_createCompatibleDC = { "CreateCompatibleDC" };
        imp_createCompatibleDC.offsets.emplace(ImportType::INTERNAL, 0x6169F);

        ImportInfo imp_setMapMode = { "SetMapMode" };
        imp_setMapMode.offsets.emplace(ImportType::INTERNAL, 0x616B5);

        ImportInfo imp_setBkColor = { "SetBkColor" };
        imp_setBkColor.offsets.emplace(ImportType::INTERNAL, 0x61818);

        ImportInfo imp_getTextExtentPoint32A = { "GetTextExtentPoint32A" };
        imp_getTextExtentPoint32A.offsets.emplace(ImportType::INTERNAL, 0x6205D);
        imp_getTextExtentPoint32A.offsets.emplace(ImportType::INTERNAL, 0x620D5);

        ImportInfo imp_createFontA = { "CreateFontA" };
        imp_createFontA.offsets.emplace(ImportType::INTERNAL, 0x61717);
        imp_createFontA.offsets.emplace(ImportType::INTERNAL, 0x62285);

        ImportInfo imp_setTextAlign = { "SetTextAlign" };
        imp_setTextAlign.offsets.emplace(ImportType::INTERNAL, 0x61821);

        ImportInfo imp_createDIBSection = { "CreateDIBSection" };
        imp_createDIBSection.offsets.emplace(ImportType::INTERNAL, 0x617E7);

        ImportInfo imp_setTextColor = { "SetTextColor" };
        imp_setTextColor.offsets.emplace(ImportType::INTERNAL, 0x6180F);

        ImportInfo imp_deleteDC = { "DeleteDC" };
        imp_deleteDC.offsets.emplace(ImportType::INTERNAL, 0x618D2);

        ImportInfo imp_addFontMemResourceEx = { "AddFontMemResourceEx" };
        imp_addFontMemResourceEx.offsets.emplace(ImportType::INTERNAL, 0x623DF);
        imp_addFontMemResourceEx.offsets.emplace(ImportType::INTERNAL, 0x62471);
        imp_addFontMemResourceEx.offsets.emplace(ImportType::PUBLIC, 0x142004);

        ImportInfo imp_extTextOutA = { "ExtTextOutA" };
        imp_extTextOutA.offsets.emplace(ImportType::INTERNAL, 0x62146);

        ImportInfo imp_addFontResourceExA = { "AddFontResourceExA" };
        imp_addFontResourceExA.offsets.emplace(ImportType::INTERNAL, 0x626C3);

        ImportInfo imp_deleteObject = { "DeleteObject" };
        imp_deleteObject.offsets.emplace(ImportType::PUBLIC, 0x14200C);

        ImportInfo imp_selectObject = { "SelectObject" };
        imp_selectObject.offsets.emplace(ImportType::PUBLIC, 0x142020);


        imports.emplace(("gdi32.dll"), std::vector<ImportInfo>({ imp_createCompatibleDC, imp_setMapMode, imp_setBkColor, imp_getTextExtentPoint32A, imp_createFontA,
                                                                   imp_setTextAlign, imp_createDIBSection, imp_setTextColor, imp_deleteDC, imp_addFontMemResourceEx,
                                                                   imp_extTextOutA, imp_addFontResourceExA, imp_deleteObject, imp_selectObject }));

        ImportInfo imp_findWindowA = { "FindWindowA" };
        imp_findWindowA.offsets.emplace(ImportType::INTERNAL, 0xECF70);

        ImportInfo imp_getActiveWindow = { "GetActiveWindow" };
        imp_getActiveWindow.offsets.emplace(ImportType::INTERNAL, 0x13E7BA);

        ImportInfo imp_setWindowLongA = { "SetWindowLongA" };
        imp_setWindowLongA.offsets.emplace(ImportType::INTERNAL, 0xEE51F);
        imp_setWindowLongA.offsets.emplace(ImportType::INTERNAL, 0xEFACC);

        ImportInfo imp_callWindowProcA = { "CallWindowProcA" };
        imp_callWindowProcA.offsets.emplace(ImportType::INTERNAL, 0x13EA59);

        imports.emplace(("user32.dll"), std::vector<ImportInfo>({ imp_findWindowA, imp_getActiveWindow, imp_setWindowLongA, imp_callWindowProcA }));
    }

    std::map<const char*, std::vector<ImportInfo>>& get_imports()
    {
        return imports;
    }
private:
    std::map<const char*, std::vector<ImportInfo>> imports;
};