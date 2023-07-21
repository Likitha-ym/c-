#include<iostream>
using namespace std;
class swapnumbers
{
	private:
		int x,y;
		public:
			void getdata()
			{
				cin>>x>>y;
			}
			void showdata()
			{
				cout<<"x="<<x<<"y="<<y;
			}
			friend void swap(swapnumbers&s);
};
void swap(swapnumbers&s)
{
	int temp;
	temp=s.x;
	s.x=s.y;
	s.y=temp;
}
int main()
{
	swapnumbers s;
	cout<<"input 2 numbers to swap:";
	s.getdata();
	cout<<endl<<"before swapping"<<endl;
	s.showdata();
	swap(s);
	cout<<endl<<"after swapping"<<endl;
	s.showdata();
	return 0;
}
