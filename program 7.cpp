#include<iostream>
#include<string>
using namespace std;
class student
{
	int roll;
	string name;
	string address;
	string city;
	public:student()
	{
		cout<<endl<<"welcome to the student information system";
		cout<<endl<<"***************";
	}
	void getdata()
	{
		cout<<endl<<"enter student roll no:";
		cin>>roll;
		cout<<endl<<"enter student name:";
		cin>>name;
		cout<<endl<<"enter student address:";
		cin>>address;
		cout<<endl<<"enter student city:";
		cin>>city;
	}
	void putdata()
	{
		cout<<endl<<"the student roll no:"<<roll;
		cout<<endl<<"the student name:"<<name;
		cout<<endl<<"the student address:"<<address;
		cout<<endl<<"the student city:"<<city;
    }
};
	class marks:public student
	{
		int sub1;
		int sub2;
		int sub3;
		int per;
		public:
			void input()
			{
				getdata();
				cout<<endl<<"enter the marks1:";
				cin>>sub1;
				cout<<endl<<"enter the marks2:";
				cin>>sub2;
				cout<<endl<<"enter the marks3:";
				cin>>sub3;
			}
			void output()
			{
				cout<<endl<<"student details";
				cout<<endl<<"********";
				putdata();
				cout<<endl<<"marks1:"<<sub1;
				cout<<endl<<"marks2:"<<sub2;
				cout<<endl<<"marks3:"<<sub3;
			}
			void calculate()
			{
				per=(sub1+sub2+sub3)/3;
				cout<<endl<<"total percentage:"<<per;
				if(per>=85)
				cout<<endl<<"grade A+";
				else if(per>=60)
				cout<<endl<<"grade A";
				else if(per>=50)
				cout<<endl<<"grade B";
				else 
				cout<<endl<<"grade C";
			}
	};
	int main()
	{
		marks m1;
		m1.input();
		m1.output();
		m1.calculate();
		return 0;
	}

