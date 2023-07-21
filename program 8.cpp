#include<iostream>
using namespace std;
const double PI=3.142;
class measures
{
	public:
		void shape(double r)
		{
			cout<<endl<<"area of circle="<<PI*r*r;
			cout<<endl<<"volume of a sphere="<<(4/3)*PI*r*r*r;
		}
		void shape(int l,int b,int h)
		{
			cout<<endl<<"area of rectangle="<<l*b;
			cout<<endl<<"volume of a rectangle="<<l*b*h;
		}
		void shape(int s)
		{
			cout<<endl<<"area of square="<<s*s;
			cout<<endl<<"volume of cube="<<s*s*s;
		}
};
int main()
{
	measures m;
	int side,breadth,height,length;
	double radius;
	cout<<endl<<"enter radius of circle:";
	cin>>radius;
	m.shape(radius);
	cout<<endl<<"enter length,breadth and height of rectangle:";
	cin>>length>>breadth>>height;
	m.shape(length,breadth,height);
	cout<<endl<<"enter a side of a square:";
	cin>>side;
	m.shape(side);
	return 0;
}
