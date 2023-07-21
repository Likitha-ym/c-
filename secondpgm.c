#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	int i,n,a[10],m1,m2,l1,l2;
	printf("enter a size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	m1=a[0];
	m2=a[0];
	l1=a[0];
	l2=a[0];
	for(i=1;i<n;i++)
	{
    	if(m1<a[i])
    		m1=a[i];
        if(m2<a[i] && m1>a[i])
   		    m2=a[i];
   		if(l1>a[i])
    		l1=a[i];
        if(l2>a[i] && l1<a[i])
   		    l2=a[i];
    }
    printf("the first maximum element is",m1);
    printf("the second maximum element is",m2);
    
}
