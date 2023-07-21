#include<stdio.h>
#include<stdlib.h>
void push(int*,int);
void pop(int*,int);
void display(int*,int);
int top=-1;
int main()
{
	int *s,n,ch;
	printf("enter the size of stack:");
	scanf("%d",&n);
	s=(int*) malloc(n*sizeof(int));
	while(1)
	{
		printf("*********MENU**********");
		printf("\n1.PUSH\n");
		printf("\n2.POP\n");
		printf("\n3.DISPLAY\n");
		printf("\n4.EXIT\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(s,n);
			break;
			case 2:pop(s,n);
			break;
			case 3:display(s,n);
			break;
			case 4:exit(0);
			break;
			default:printf("invalid");
		}
	}
}
void push(int s[],int n)
{
	if(top==(n-1))
	{
		printf("stack overflow");
		return;
	}
	printf("enter the value to stack:");
	scanf("%d",&s[++top]);
	return;
}
void pop(int s[],int n)
{
	if(top==-1)
	{
		printf("stack empty");
		return;
	}
	printf("element deleted from stack is:%d",s[top--]);
	return;
}
void display(int s[],int n)
{
	int i;
	if(top==-1)
	{
		printf("stack empty");
		return;
	}
	printf("stack elements are:");
	for(i=top;i>-1;i--)
	printf("%d",s[i]);
	return;
}
