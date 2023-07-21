#include<stdio.h>
int main()
{
	int i,j,m,n,a[10][10],sumu,suml;
	printf("Enter the size of a square matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter the elements to the matrix:");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	sumu=0;
	suml=0;
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i<j)
				{
					sumu=sumu+a[i][j];
				}
				if(i>j)
				{
					suml=suml+a[i][j];
				}
			}
		}
	}
	printf("The sum of uppercase elements is %d",sumu);
	printf("The sum of lowercase elements is %d",suml);
}
