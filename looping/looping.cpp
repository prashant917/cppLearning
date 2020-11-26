// Sample for Looping
// ********************

#include <cstdio>
using namespace std;

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9};
	for(int i = 0; i < 9; i++) {
		printf("arr[%d} : [%d]\n", i, arr[i]);
	}
	for(int* ptr = arr; *ptr; ptr++) {
		printf("%d\n", *ptr);
	}
	//C++ 11 for loop
	for(int i : arr) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	return 0;
}
