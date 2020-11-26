#include <iostream>
using namespace std;

class A {
	public:
	A() { cout << "A constructor\n"; }
	~A() { cout << "A destructor\n"; }
};

class B : public A {
	public:
	B() { cout << "B constructor\n"; }
	~B() { cout << "B distructor\n"; }
};

class C {
        public:
	C() { cout << "C constructor\n"; }
	virtual ~C() { cout << "C destructor\n"; }
};

class D : public C {
        public:
        D() { cout << "D constructor\n"; }
        ~D() { cout << "D distructor\n"; }
};


int main() {
	A* pa = new A();
	delete pa;
	cout << "--------------------\n";
	B* pb = new B();
	delete pb;
	cout << "--------------------\n";
	A* pc = new B();
	delete pc;
	cout << "--------------------\n";
	C* pd = new C();
	delete pd;
	cout << "--------------------\n";
	D* pe = new D();
	delete pe;
	cout << "--------------------\n";
	C* pf = new D();
	delete pf;

	return 0;
}
