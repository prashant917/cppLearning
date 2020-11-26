#include <iostream>
using namespace std;

class C {
	private:
		int value = 0;
	public:
		// passint const reference of a integer
		void set_value(const int& _value);
		//making get_value const safe so even constant object can call it.
		int get_value() const;
};


void C::set_value(const int& _value) { value = _value; }
int C::get_value() const { return value; }

int main() {
	const int val = 50;
	C oc;
	oc.set_value(val);
	cout << oc.get_value() << endl;
	// creating const object
	const C cc;
	// const object can only call constant member functions.
	cout << cc.get_value() << endl;

	return 0;
}
