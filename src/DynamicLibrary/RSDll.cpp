// Dll1.cpp : Defines the exported functions for the DLL.
//

#include "RSDll.h"


// This is an example of an exported variable
HERTZ_DLL_API int library_variable = 0;

// This is an example of an exported function.
HERTZ_DLL_API int add(int a, int b) { return a + b; }

// This is the constructor of a class that has been exported.
LBClass::LBClass() {
    return;
}
