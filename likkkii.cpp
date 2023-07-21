#include<iostream>
using namespace std;
class base
{
	public:
		virtual void show()=0;
		int displaybase()
		{
			cout<<"base class method"<<endl;
		}
};
class derived:public base
{
	public:
		void show()
		{
			cout<<"show() is called"<<endl;
		}
		int displayderived()
		{
			cout<<"derived class method"<<endl;
		}
};
int main()
{
	derived d;
	d.show();
	d.displaybase();
	d.displayderived();
	return 0;
}
