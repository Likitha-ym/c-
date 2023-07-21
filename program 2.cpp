#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class bank
{
	private:
		int accno;
		string accname;
		char acctype;
		float balanceamt;
		public:
			void getaccountdetails()
			{
				cout<<"please enter account details:"<<endl;
				cout<<"accountnumber:";
				cin>>accno;
				cout<<"accountholdername:";
				cin>>accname;
				cout<<"aqccounttype(c-current,s-savings):";
				cin>>acctype;
				cout<<"balance amount:";
				cin>>balanceamt;
			}
			void printaccountdetails()
			{
				cout<<"accountholder details.."<<endl;
				cout<<"-------------------"<<endl;
				cout<<"accountnumber:"<<accno<<endl;
				cout<<"name:"<<accname<<endl;
				cout<<"account type:"<<acctype<<endl;
				cout<<"balance amount:"<<balanceamt<<endl;
				cout<<"----------------"<<endl;		
			}
			void dotransaction()
			{
				char type;
				float tamt;
				cout<<"transaction process"<<endl;
				cout<<"---------"<<endl;
				cout<<"get transaction amount:";
				cin>>tamt;
				cout<<"get transaction type(w-withdrawl,d-deposit):";
				cin>>type;
				if(type=='w'||type=='w')
				{
					if(balanceamt-tamt>0)
					{
						balanceamt=balanceamt-tamt;
						cout<<"transaction complete"<<endl;
						cout<<"your current balance is"<<balanceamt<<endl;
					}
					else
					{
						cout<<"sorry!insufficient funds in your account"<<endl;
					}
				}
				else if(type=='d'||type=='d')
				{
					balanceamt=balanceamt+tamt;
					cout<<"your current balance is"<<balanceamt<<endl;
				}
			}
};
int main()
{
	bank b;
	b.getaccountdetails();
	cout<<"-------------"<<endl;
	cout<<"accountdetails before transaction"<<endl;
	b.printaccountdetails();
	b.dotransaction();
	cout<<"--------------"<<endl;
	cout<<"accountdetails after transaction"<<endl;
	b.printaccountdetails();
	return 0;
}
