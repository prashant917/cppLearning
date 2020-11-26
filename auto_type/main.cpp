#include <cstdio>
#include <vector>
#include <typeinfo>
using namespace std;

int main() {
	vector<int> vt = {1,2,3,4,5,6,7,8,9};
	for(vector<int>::iterator it = vt.begin(); it !=vt.end(); it++)
		printf("%d\n", *it);
		
	//using auto instead of the actual data type
	for(auto it = vt.begin(); it != vt.end(); it++)
		printf("%d\n", *it);
	
	int x = 7;
	printf("size of x is %ld\n", sizeof(x));
	printf("%s\n", typeid(x).name());
	return 0;

}
