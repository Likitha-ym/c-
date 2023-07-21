#include<iostream>
#include<iomanip>
using namespace std;
class shoppinglist
{
	private:
		string itemname;
		int qty;
		float rate;
	public:
		void readitems()
		{
			cout<<endl<<"enter the itemname:";
			cin>>itemname;
			cout<<endl<<"enter the qty:";
			cin>>qty;
			cout<<endl<<"enter the rate:";
			cin>>rate;
		}
		void printitems()
		{
			cout<<setw(15)<<itemname;
			cout<<setw(10)<<qty;
			cout<<setw(5)<<rate;
			cout<<setw(8)<<rate*qty<<endl;
		}
};
int main()
{
	int n;
	cout<<endl<<"enter the number of items:";
	cin>>n;
	shoppinglist item(n);
	for(i=0;i<n;i++)
	items readitems(i);
	cout<<setw(30)<<"shoppinglist";
	cout<<setw(15)<<"itemname"<<setw(10)<<"qty"<<setw(5)<<"rate"<<setw(8)<<"amount"<<endl;
	for(i=0;i<n;i++)
	items printitems(i);
	return 0;
}
