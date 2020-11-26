#include <iostream>
#include <list>
using namespace std;

template<typename T>
void printlist(list<T>& l) {
	for(T& it : l) cout << it << " ";
	cout << endl;
}

int main() {
	list<int> mylist = { 2, 4, 5, 6, 1 };
	printlist(mylist);
	mylist.push_back(20);
	printlist(mylist);
	mylist.push_front(21);
	printlist(mylist);
	mylist.pop_back();
	printlist(mylist);
	mylist.pop_front();
	printlist(mylist);

	return 0;
}
