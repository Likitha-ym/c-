#include<iostream>
using namespace std;
class myclass
{
	int data1;
	int data2;
	public:
		myclass(int data1,int data2)
		{
			this->data1=data1;
			this->data2=data2;
		}
		myclass & assign()
		{
			this->data1=300;
			this->data2=400;
			return * this;
		}
		void print()
		{
			cout<<"data1="<<data1<<endl;
			cout<<"data2="<<data2<<endl;
		}
};
int main()
{
	myclass obj1(100,200);
	cout<<"object 1 data"<<endl;
	obj1.print();
	myclass obj2=obj1.assign();
	cout<<"object 2 data"<<endl;
	obj2.print();
	return 0;
}
