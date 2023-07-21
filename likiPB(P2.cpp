#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a=100;int b=200;
	cout<<"before swap, value of a:"<<a<<endl;
	cout<<"before swap, value of b:"<<b<<endl;
	swap(&a,&b);
	cout<<"after swap:"<<endl;
	cout<<"after swap,value of a:"<<a<<endl;
	cout<<"after swap, value of b:"<<b<<endl;
	return 0;
}
void swap(int*i,int*j)
{
	int temp;
	temp=*i;
	*i=*j;
	*j=temp;
	return;
}
