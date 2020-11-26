#include <iostream>
using namespace std;

void sort_arr(auto & ar, int s) {
	int tmp;
	for(int i = 0; i < s; i++) {
		for(int j = i+1; j < s; j++) {
			if(ar[i] > ar[j]) {
				tmp = ar[i];
				ar[i] = ar[j];
				ar[j] = tmp;
			}
		}
	}
}

int main() {
	int arr[] = { 23, 45, 56, 11, 6, 71, 40 };
	int size = (sizeof(arr) / sizeof(arr[0]));
	sort_arr(arr, size);
	for(int i = 0; i < 7; i++)
		cout << arr[i] << "\t";
	cout << endl;
	return 0;
}
