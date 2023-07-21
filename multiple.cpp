#include<iostream>
using namespace std;
class A
{
	public:
		void functionA()
		{
			cout<<"base class 1 functionA() is called"<<endl;
		}
};
class Bfg
{
	public:
		void functionB()
		{
			cout<<"base class 2 functionB() is called"<<endl;
		}
};
class C:public A,public B
{
	public:
		void functionC()
		{
			cout<<"derived class functionC() is called"<<endl;
		}
};
int main()
{
	C objC;
	objC.functionA();
	objC.functionB();
	objC.functionC();
	return 0;
}
