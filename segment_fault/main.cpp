/*
Cause of segment faults
-------------------------
1. writing to readonly location of memory.
2. accessing array out of bound
3. Using variable values as an addres
4. dereferencing null pointer
5. dereferencing or accessing uninitialized pointer
6. dereferencing or accessing a freed pointer
7. buffer overflow
8. stack overflow
 */

#include <iostream>
using namespace std;

int main() {
	//char* cp;
	//*cp = 'a';
	//----------------
	//char* cp = "Hello World";
	//*cp = 'H';
	//--------------------
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	arr[12] = 12;
	cout << arr[12] << endl;
	return 0;
}
