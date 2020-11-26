#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
	//int a = 64;
	//cout << a << endl;
	string s1 = "This is a STRING!";
	string s2 = "This is a bigger STRING!";
	string s3 = "This is a even bigger STRING!";

	//start STRING STREAM
	string str = "This is a sample string";
	stringstream ss(str);
	while(ss.good()) {
		string substr;
		getline(ss, substr, ' ');
		cout << substr << endl;
	}
	//end STRING STREAM

	cout << "String Formatting" << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	cout << setw(64) << right << s1 << endl;
	cout << setw(64) << right << s2 << endl;
	cout << setw(64) << right << s3 << endl;

	cout << setfill('-') << setw(64) << right << s1 << endl;
	cout << setfill('-') << setw(64) << right << s2 << endl;
	cout << setfill('-') << setw(64) << right << s3 << endl;

	cout << setfill('-') << setw(64) << left << s1 << endl;
	cout << setfill('-') << setw(64) << left << s2 << endl;
	cout << setfill('-') << setw(64) << left << s3 << endl;
	

	cout << "Precision" << endl;

	int a = 64;
	cout << a << endl;
	int b = 94;
	cout << b << endl;
	cout << a << "\t" << b << endl;
	cout << hex << a << "\t" << b << endl;
	cout << showbase << a << "\t" << b << endl;
	cout << oct << a << "\t" << b << endl;

	double pi = 3.1456123456;
	cout << pi << endl;
	cout << setprecision(2) << fixed << pi << endl;
	cout << setprecision(8) << fixed << pi << endl;
	cout << setprecision(10) << fixed << pi << endl;


	return 0;
}
