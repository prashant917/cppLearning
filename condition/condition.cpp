// Conditional operator sample

#include <cstdio>
using namespace std;

int main () {
	int x = 42;
	int y = 7;

	if(x > y) {
		printf("x is greater than y\n");
	} else {
		printf("y is greater than x\n");
	}

	int result;
	result = (x > y);
	printf("result(x > y) = %d\n", result);
	result = (x == y);
	printf("result(x == y) = %d\n", result);
	result = (y > x);
	printf("result(y > x) = %d\n", result);

	if(111) printf("if will be executed when result is non 0\n");


	// Switch statement
	const int a = 1;
	const int b = 2;
	const int c = 3;
	const int d = 4;

	x = 3;

	switch(x) {
		case a:
			puts("a is 1");
			break;
		case b:
			puts("b is 2");
			break;
		case c:
			puts("c is 3");
			break;
		case d:
			puts("d is 4");
			break;
		default:
			puts("no result");
			break;
	}
	

	return 0;
}
