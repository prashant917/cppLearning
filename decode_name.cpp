#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string str = "kjPjrahjsjkhntkj kjSdf| 3 5 6 9 7 12 6 13 14 17 20";

int main() {
	stringstream ss(str);
	string fstr;
	bool push = false;
	while(ss.good()) {
		string substr;
		getline(ss, substr, '|');
		if(push == true) {
			fstr = substr;
		}
		push = true;
	}
	
	vector<string> vi;
	stringstream fss(fstr);
	while(fss.good()) {
		string fsubstr;
		getline(fss, fsubstr, ' ');
		vi.push_back(fsubstr);
	}
	int pos;
	for(auto it = vi.begin() + 1; it < vi.end(); it++) {
		pos = stoi(*it);
		cout << str[pos -1];
	}
	cout << endl;
	return 0;
}
