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
			cout<<endl<<"enter the item name:";
			cin>>itemname;
			cout<<endl<<"enter the rate:";
			cin>>rate;
			cout<<endl<<"enter the quantity:";
			cin>>qty;
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
	shoppinglist items[n];
	for(int i=0;i<n;i++)
	items[i].readitems();
	cout<<setw(30)<<"shoppinglist"<<endl;
	cout<<setw(15)<<"itemname"<<setw(10)<<"quantity"<<setw(5)<<"rate"<<setw(8)<<"amount"<<endl;
	for(int i=0;i<n;i++)
	items[i].printitems();
	return 0;
}
