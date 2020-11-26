// Example pf premitive string
// **************************

#include <cstdio>
using namespace std;

int main() {
	char s[] = "String";
	printf("String s is : %s\n", s);

	printf("using s[i]");
	for(int i =0; s[i] != 0; i++) {
		printf("Char at i is : %c\n", s[i]);
	}
	printf("using *pt");
	for(char* pt = s; *pt != 0; pt++) {
		printf("Char is : %c\n", *pt);
	}
	// C++ 11 for loop
	printf("using for(char c : s)");
	for(char c : s) {
		if(c == 0) break;
		printf("char is %c\n", c);
	}
	char st[] = {'S', 't', 'r', 'i', 'n', 'g', 0};
	printf("String st is : %s\n", st);

	return 0;
}
