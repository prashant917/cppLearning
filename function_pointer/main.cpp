#include <iostream>
using namespace std;

void printHello() { cout << "Hello World!\n"; }
void printHi() { cout << "Hi!\n"; }
void printsomething() { cout << "Printing something\n"; }

int main() {
	cout << "C-Style function pointer\n";
	void (*func)() = printHello;
	func();
	func = printHi;
	func();
	func = printsomething;
	func();
	cout << "------------------------\n";
	cout << "C++ Style function pointer (auto)\n";
	auto fun = printHello;
	fun();
	fun = printHi;
	fun();
	fun = printsomething;
	fun();

	return 0;
}
