// Template sample
#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maxof(const T& a, const T& b) {
	return (a > b ? a : b);
}

int main() {
	int i_a = 9;
	int i_b = 7;
	//cout << "max is " << maxof<int>(i_a, i_b) << endl;
	cout << "max is " << maxof(i_a, i_b) << endl;
	double d_a = 2.2;
	double d_b = 3.3;
	//cout << "max is " << maxof<double>(d_a, d_b) << endl;
	cout << "max is " << maxof(d_a, d_b) << endl;
	const char* c_a = "seven";
	const char* c_b = "nine";
	//cout << "max is " << maxof<const char*>(c_a, c_b) << endl;
	cout << "max is " << maxof(c_a, c_b) << endl;
	string s_a = "nine";
	string s_b = "seven";
	//cout << "max is " << maxof<string>(s_a, s_b) << endl;
	cout << "max is " << maxof(s_a, s_b) << endl;

	return 0;
}
