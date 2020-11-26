// VECTOR sample

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// printing vector elements
void print_vect(const vector<int>& vt) {
	for(auto it : vt)
		cout << it << "\t";
	cout << endl;
}

// main function
int main() {
	// declaring and initializing a vector
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	print_vect(v);
	// size of vector
	int size = v.size();
	// using pop_back to remove last element
	while(!v.empty()) {
		v.pop_back();
		print_vect(v);
	}
	// using push_back to add element at last
	for(int i = 0; i < size; i++) {
		v.push_back(i+1);
		print_vect(v);
	}
	// reversing a vector
	reverse(v.begin(), v.end());
	print_vect(v);
	// sortint a vector
	sort(v.begin(), v.end());
	print_vect(v);
	// insert an elemet at a position
	v.insert(v.begin() + 5, 99);
	print_vect(v);
	// erasing an elemet at a position
	v.erase(v.begin() + 5);
	print_vect(v);
	// index
	cout << v[5] << endl;
	cout << v.at(5) << endl;
	// clearing vector
	v.clear();
	cout << v.size() << endl;
	// adding elemets by vector initialization
	v.insert(v.begin(), { 1,2,3,4,5 } );
	print_vect(v);
	constexpr size_t siz = 9;
	int ia[siz] = { 1,2,3,4,5,6,7,8,9 };
	vector<int> via(ia, ia + siz);
	print_vect(via);
	return 0;
}
