#include <wtypes.h>
extern void InitMenu();
extern void InitCheat();

void InitThread()
{
    InitMenu();
    InitCheat();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        CloseHandle(CreateThread(0, 0, (LPTHREAD_START_ROUTINE)InitThread, 0, 0, 0));
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}