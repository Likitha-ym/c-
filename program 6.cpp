#include<iostream>
using namespace std;
const int SIZE=5;
class queue
{
	public:
		int q[SIZE],front,rear,x,result;
		void insert();
		void del();
		void display();
		queue()
		{
			front=0;
			rear=0;
		}
};
void queue::insert()
{
	cout<<rear<<endl;
	if(rear>=SIZE)
	cout<<"\n queue overflow!!\n";
	else
	{
		cout<<"\n enter the number to be inserted:";
		cin>>x;
		rear++;
		q[rear]=x;
		cout<<"\n number pushed in the queue:"<<q[rear];
	}
}
void queue::del()
{
	if(rear==0)
	cout<<"\n queue underflow!!\n";
	else
	{
		if(front==rear)
		{
			front=0;
			rear=0;
		}
		else
		front++;
	}
	cout<<"\n deleted element is:";
	result=q[front];
	cout<<result;
}
void queue::display()
{
	if(rear==0)
	cout<<"\n queue underflow!!\n";
	else
	cout<<"\n contents of queue is:";
	for(int i=front+1;i<=rear;i++)
	cout<<q[i]<<"\t";
}
int main()
{
	int c;
	queue qu;
	do
	{
		cout<<"\n 1.insertion\n 2.deletion\n 3.display\n";
		cout<<"\n enter your choice:";
		cin>>c;
		switch(c)
		{
			case 1:
				qu.insert();
				break;
			case 2:
				qu.del();
				break;
			case 3:
				qu.display();
				break;
			default:
				cout<<endl<<"invalid choice!!"<<endl;
		}
	}while(c<4);
	return 0;
}
