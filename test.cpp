#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

vector<int> iv = { 1,2,3,4,5,6 };

int main() {
	greater<int> f;
	sort(iv.begin(), iv.end(), f);
	for(auto & it : iv) { cout << it << "\t"; }
	cout << endl;
	less<int> g;
	sort(iv.begin(), iv.end(), g);
	for(auto & it : iv) { cout << it << "\t"; }
	cout << endl;

	vector<int> vp;
	for(int i = 1; i <= 50; i++) vp.push_back(i);
	for(auto & it : vp) { cout << it << " "; }
	cout << endl;
	return 0;
}
