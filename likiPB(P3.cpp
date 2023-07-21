#include<iostream>
using namespace std;
int vol(int=1,int=2,int=3);
int main()
{
	int length, width, height, volume;
	cout<<"\n enter the value of length=";
	cin>>length;
	cout<<"\n enter the value of width=";
	cin>>width;
	cout<<"\n enter the value of height=";
	cin>>height;
	cout<<"------------------------------";
	volume=vol();
	cout<<"\n volume with no argument passed ="<<volume<<endl;
	volume=vol(length);
	cout<<"\n volume with one argument passed ="<<volume<<endl;
	volume=vol(length,width);
	cout<<"volume with two arguments passed ="<<volume<<endl;
	volume=vol(length,width,height);
	cout<<"volume with three arguments passed ="<<volume<<endl;
	return 0;
}
int vol(int l,int h,int w)
{
	return l*h*w;
}
