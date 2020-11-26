#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> vs = { "1 2 12", "2 3 10", "2 1 14" };

int main() {
	vector<string> result_v;
	vector<int> tmp_v;
	vector<int> tv;
	string tmp_s;
	for(auto it = vs.begin(); it < vs.end(); it++) {
		tmp_s = *it;
		stringstream ss(tmp_s);
		while(ss.good()) {
			string substr;
			getline(ss, substr, ' ');
			tmp_v.push_back(stoi(substr));
		}
	}

	int sid, rid;
	for(auto it = tmp_v.begin(); it < tmp_v.end(); it++) {
		sid = *it;
		tv.push_back(sid);
		++it;
		rid = *it;
		tv.push_back(rid);
		++it;
	}
	
	sort(tv.begin(), tv.end());
	int check = 0;
	for(auto it = tv.begin(); it < tv.end(); it++) {
		int x = *it;	
		int y = count(tv.begin(), tv.end(), x);
		if((check != x) &&(y >= 2)) {
			check = x;
			result_v.push_back(to_string(x));
		}

	}

	for(auto it = result_v.begin(); it < result_v.end(); it++) cout << *it << endl;
	return 0;
}
