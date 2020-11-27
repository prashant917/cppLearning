#ifndef DEBUG_H
#define DEBUG_H

//#define DEBUG 1
#define DEBUG 0

#if DEBUG == 1
#include <iostream>
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(X)
#endif 

#endif // DEBUG_H
