#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num;
	cout<<"input 1 or 2:";
	cin>>num;
	try{
		if(num==1){
			throw 5;
		}
		if(num==2){
			throw 5.5f;
		}
		if(num!=1||num!=2){
			throw"wrong number entered";
		}
	}
	catch(int a){
		cout<<"an exception occured!"<<endl;
		cout<<"exception number is:"<<a<<endl;
	}catch(float b){
		cout<<"an exception occured!"<<endl;
		cout<<"exception number is:"<<b<<endl;
	}catch(const char*msg){
		cout<<"an exception occured!"<<endl;
		cout<<"message:"<<msg<<endl;
	}
	return 0;
}
