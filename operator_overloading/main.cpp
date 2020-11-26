#include <cstdio>
using namespace std;

class Sample {
	private:
	int data = 0;
	public:
	Sample();
	~Sample();
	Sample(int _data);
	Sample(const Sample& samp);
	Sample operator+(const Sample& samp);
	Sample operator*(const Sample& samp);
	void setdata(int _data);
	int getdata();
};

void Sample::setdata(int _data) {
	puts("function setdata(int _data)");
	data = _data;
}

int Sample::getdata() {
	puts("function getdata()");
	return data;
}

Sample::Sample() { puts("default constructor Sample()"); }

Sample::~Sample() { puts("destructor ~Sample()");  }

Sample::Sample(int _data) : data(_data) { puts("constructor Sample(int _data)"); }

Sample::Sample(const Sample& samp) {
	data = samp.data;
	puts("copy constructor Sample(const Sample& samp)");
}

Sample Sample::operator+(const Sample& samp) {
	Sample s;
	s.data = this->data + samp.data;
	puts("function operator+(const Sample& samp)");
	return s;
}

Sample Sample::operator*(const Sample& samp) {
	Sample s;
	s.data = this->data * samp.data;
	puts("function operator*(const Sample& samp)");
	return s;
}

int main() {
	Sample s1;
	s1.setdata(50);
	printf("data = %d\n", s1.getdata());
	Sample s2(60);
	printf("data = %d\n", s2.getdata());
	Sample s3 = s2;
	printf("data = %d\n", s3.getdata());
	Sample s4 = s2 + s3;
	printf("data = %d\n", s4.getdata());
	Sample s5 = s1 * s3;
	printf("data = %d\n", s5.getdata());

	return 0;
}
