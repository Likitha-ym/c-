#include<stdio.h>
#include<limits.h>
int main()
{
	int i,n,a[10],m1,m2,h1,h2;
	printf("enter a size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	h1=a[n-1];
	h2=a[n-1];
   	for(i=0;i<n;i++)
   	{
   		if(h1>a[i])
   		{
		    h2=h1;
    		h1=a[i];
		}
        else if(h2>a[i] && h1<a[i])
        {
   		    h2=a[i];
   		}
    }
    printf("\nthe first minimum element is %d\n",h1);
    printf("\nthe second minimum element is %d\n",h2);
}
    
