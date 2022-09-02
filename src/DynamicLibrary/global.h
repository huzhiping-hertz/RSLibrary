#ifdef WIN32
  #ifdef HERTZ_DLL_EXPORTS
    #define HERTZ_DLL_API __declspec(dllexport)
  #else
    #define HERTZ_DLL_API __declspec(dllimport)
  #endif
#else
  #define HERTZ_DLL_API 
#endif