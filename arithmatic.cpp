#include<iostream>
using namespace std;
class arithmatic
{
	private:float n;
	public:
		void get()
		{
			cin>>n;
		}
		arithmatic operator +(arithmatic a)
		{
			arithmatic t;
			t.n=n+a.n;
			return t;
		}
		arithmatic operator -(arithmatic a)
		{
			arithmatic t;
			t.n=n-a.n;
			return t;
		}
		arithmatic operator *(arithmatic a)
		{
			arithmatic t;
			t.n=n*a.n;
			return t;
		}
		arithmatic operator /(arithmatic a)
		{
			arithmatic t;
			t.n=n/a.n;
			return t;
		}
		void display()
		{
			cout<<n;
		}
};
int main()
{
	arithmatic a1,a2,a3;
	cout<<endl<<"enter the first number:";
	a1.get();
	cout<<endl<<"enter the second number:";
	a2.get();
	a3=a1+a2;
	cout<<endl<<"addition of two numbers:";
	a3.display();
	a3=a1-a2;
	cout<<endl<<"subtraction of two numbers:";
	a3.display();
	a3=a1*a2;
	cout<<endl<<"multiplication of two numbers:";
	a3.display();
	a3=a1/a2;
	cout<<endl<<"division of two numbers:";
	a3.display();
	return 0;
}
