#include<iostream>
using namespace std;
class matrix
{
	int a[10][10],m,n;
	public:
		void inputmatrices();
		void outputmatrices();
		matrix operator*(matrix x);
};
void matrix::inputmatrices()
{
	int i,j;
	cout<<"enter order of matrix:";
	cin>>m>>n;
	cout<<"enter matrix elements:";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
}
void matrix::outputmatrices()
{
	int i,j;
	for(i=0;i<m;i++)
	{
	  for(j=0;j<n;j++)
	   cout<<a[i][j]<<"\t";
	   cout<<endl;
	}
}
matrix matrix::operator*(matrix x)
{
	matrix c;
	int i,j,k;
	if(n==x.m)
	{
		c.m=m;
		c.n=x.n;
		for(i=0;i<m;i++)
		for(j=0;j<m;j++)
		{
			c.a[i][j]=0;
			for(k=0;k<m;k++)
			c.a[i][j]+=a[i][k]*x.a[k][j];		
		}
		return c;
	}
	else
	cout<<"multiplication is not possible";
}
int main()
{
	matrix a,b,c;
	cout<<"enter matrix a order and elements"<<endl;
	a.inputmatrices();
	cout<<"enter matrix b order and elements"<<endl;
	b.inputmatrices();
	c=a*b;
	cout<<"resulting matrix is:"<<endl;
	c.outputmatrices();
	return 0;
}
