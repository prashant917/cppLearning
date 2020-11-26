#include <iostream>
using namespace std;

class Base {
	public:
	Base() { cout << "Base Constructor.\n"; }
	//To tell compiler to call for derived destructor
	virtual ~Base() { cout << "Base Destructor.\n"; }
};

class Derived : public Base {
	public:
	Derived() { cout << "Derived Constructor.\n"; }
	~Derived() { cout << "Derived Destructor.\n"; }
};



int main() {
	Base* bp = new Base();
	delete bp;
	cout << "--------------------------\n";
	Derived *dp = new Derived();
	delete dp;
	cout << "--------------------------\n";
	Base* poly = new Derived();
	delete poly;
	return 0;
}
