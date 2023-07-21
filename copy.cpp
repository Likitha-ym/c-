#include<iostream>
using namespace std;
class student
{
	private:
		int roll,marks,age;
	public:
		student()
		{
			roll=marks=age=0;
		}
		student(int r,int m,int a)
		{
			roll=r;
			marks=m;
			age=a;
		}
		student(student&std)
		{
			roll=std.roll;
			marks=std.marks;
			age=std.age;
		}
		void display()
		{
			cout<<"roll number:"<<roll<<endl;
			cout<<"total marks:"<<marks<<endl;
			cout<<"age:"<<age<<endl;
		}
};
int main()
{
	student s1;
	student s2(101,79,18);
	student s3(s2);
	cout<<"student 1 data:"<<endl;
	s1.display();
	cout<<"student 2 data:"<<endl;
	s2.display();
	cout<<"student 3 data:"<<endl;
	s3.display();
	return 0;
}
