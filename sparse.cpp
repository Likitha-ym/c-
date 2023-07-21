#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j;
	printf("Enter number of rows and columns of matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter a sparse matrix:\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
	printf("The triplet representation of sparse matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				printf("%d %d %d",i,j,a[i][j]);
				printf("\n");
			}
		}
	}
	printf("The transpose of triplet sparse matrix is:\n");
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
		    if(a[i][j]!=0)	
		   {
			 printf("%d %d %d",j,i,a[i][j]);
		     printf("\n");
	    	}
	    }
	}
}
