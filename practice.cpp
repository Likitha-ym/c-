#include<stdio.h>
int main()
{
	int *pa,*pb,a=10,b=22;
	pa=&a;
	pb=&b;
	printf("The value of sum of a and b is :%d",(pa+pb));
}
