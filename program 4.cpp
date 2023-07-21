#include<iostream>
using namespace std;
const int pi=3.14159;
inline float circum(float x)
{
	return(2*pi*x);
}
inline float area(float x)
{
	return(pi*x*x);
}
int main()
{
	float r;
	cout<<"enter the radius of circle:";
	cin>>r;
	cout<<endl<<"circumference:"<<circum(r);
	cout<<endl<<"area:"<<area(r);
	return 0;
}
