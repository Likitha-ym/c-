#include<stdio.h>
#include<stdlib.h>
void insert(int*,int);
void delete_element(int*,int);
void display(int*,int);
int front=0;
int rear=-1;
int count=0;
int main()
{
	int *q,n,ch;
	printf("Enter size:");
	scanf("%d",&n);
	q=(int*) malloc(n*sizeof(int));
	while(1)
	{
		printf("------MENU------");
		printf("\n1.Insert\n");
		printf("\n2.Delete\n");
		printf("\n3.Display\n");
		printf("\n4.Exit\n");
		printf("\nEnter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert(q,n);
			break;
			case 2: delete_element(q,n);
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
	rear=(rear+1)%n;
	printf("ele to insert:");
	scanf("%d",&q[rear]);
	count++;
}
void delete_element(int q[], int n)
{
	if(count==0)
	{
		printf("Empty");
	}
	printf("deleted ele is %d",q[front]);
	front=(front+1)%n;
	count--;
}
void display(int q[], int n)
{
	int i;
	if(count==0)
	{
		printf("Queue is empty");
		return;
	}
	printf("elements are:");
	for(i=1;i<=count;i++)
	{
		printf("%d",q[front]);
		front=(front+1)%n;
	}
}
