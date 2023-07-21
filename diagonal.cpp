#include<stdio.h>
int main()
{
	int i,j,a[10][10],m,n,sum;
	printf("Enter the size of a square matrix");
	scanf("%d %d",&m,&n);
	printf("Enter the elements to the matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=0;
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				{
					sum=sum+a[i][j];
				}
			}
		}
	}
	printf("The sum of diagonal elements is %d",sum);
}
