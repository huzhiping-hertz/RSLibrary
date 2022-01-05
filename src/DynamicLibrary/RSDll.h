
#ifdef HERTZ_DLL_EXPORTS
#define HERTZ_DLL_API __declspec(dllexport)
#else
#define HERTZ_DLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class HERTZ_DLL_API LBClass {
public:
  LBClass(void);
	// TODO: add your methods here.
};

//以下部分兼容C

#ifdef __cplusplus
extern "C" {
#endif

extern HERTZ_DLL_API int library_variable;

HERTZ_DLL_API int add(int a, int b);

#ifdef __cplusplus
}
#endif