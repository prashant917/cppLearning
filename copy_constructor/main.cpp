#include "CopyConstructor.h"
using namespace std;

int main() {
	CopyConstructor cp1(10, 20);
	cp1.display();
	CopyConstructor cp2 = cp1;
	cp2.display();

	return 0;
}
