#include <iostream>

#include "TutorialConfig.h"
#ifdef USE_MYLIB
#include "MyLib/mylib.h"
#endif
int main()
{
    std::cout << "test version: "
              << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << mysqrt(9) << std::endl;
    return 0;
}