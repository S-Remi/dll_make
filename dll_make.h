#ifndef  INCLUDE_GUARD_DLL_MAKE_H
#define  INCLUDE_GUARD_DLL_MAKE_H

#ifdef WIN_DLL_CREATE
/* WIN_DLL */
#ifdef __cplusplus
#define DLLEXPORT extern "C" __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllexport)
#endif
#define DLL(type) DLLEXPORT type __stdcall

#elif GCC_DLL_CREATE
/* GCC_DLL */
#ifdef __cplusplus
#define DLLEXPORT extern "C" __attribute__((visibility ("default")))
#else
#define DLLEXPORT __attribute__((visibility ("default")))
#endif
#define DLL(type) DLLEXPORT type

#else
/* NOT_DLL */
#define DLL(type) type
#endif

#endif /*INCLUDE_GUARD_DLL_MAKE_H*/
