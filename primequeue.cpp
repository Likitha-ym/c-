#include<stdio.h>
#include<stdlib.h>
void insert(int*,int)
void delete(int*,int)
void display(int*,int)
int front=0;
int rear=-1;
int count=0;
int main()
{
	int q,n,ch;
	printf("Enter size:")
	scanf("%d",&n);
	while(1)
	{
		printf("------MENU------");
		printf("1.Insert");
		printf("2.Delete");
		printf("3.Display");
		printf("4.Exit");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(q,n);
			break;
			case 2: delete(q,n);
			break;
			case 3: display(q,n);
			break;
			case 4: exit(0);
			break;
			default: printf("Invalid choice");
		}
		
	}
}
void insert(int q[], int n)
{
	if(count==n)
	{
		printf("Queue is full");
		return;	
	}
	rear=[rear+1]%n;
	printf("ele to insert:");
	scanf("%d",&q(rear));
	count++;
}
void delete(int q[], int n)
{
	if(count==0)
	{
		printf("Empty")
		return;
	}
	int prime_num=(front+2)%n;
	int three=queue(prime_num);
	prime=true;
	if(three>1)
	{
		for(i=2;i<=three/2;i++)
		if(three%i==0)
		{
			prime=false;
		}
	}
}
if(prime)
{
	int result=queue[three];
	queue[three]=-1;
	front=[front+1]%n;
	count--;
}

