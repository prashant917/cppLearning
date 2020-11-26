/*
 macros sample
 -----------------
 preprocessor replace macros before
 compiling.
 */

#include <iostream>
using namespace std;

//#define DEBUG 1
#define DEBUG 0

#if DEBUG == 1
#define LOG(x) cout << x << endl
#else
#define LOG(x)
#endif

int main() {
	LOG("Hello World!");
	return 0;
}
