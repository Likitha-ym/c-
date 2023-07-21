#include<stdio.h>
int main()
{
	int c;
	int a=10, b=9;
	int *p, *q;
	p=&a;
	q=&b;
	c=*q;
	*p=20;
	printf("the value of a is %d\n",a);
	printf("a=%d\n",*p);
	printf("address of a = %x\n",&a);
	printf("address of a= %x\n",p);
	printf("address of p= %x\n",&p);
	printf("c=%d\n",c);
	printf("a=%d\n",a);
	printf("%x\n",a);
}

