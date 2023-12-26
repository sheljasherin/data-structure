#include<stdio.h>
void sparse(int a[100][100],int m,int n);
void sparse(int a[100][100],int m,int n)
{
int i,j,k=1,s[100][100];
s[0][0]=m;
s[0][1]=n;
for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
	   if(a[i][j]!=0)
	   {
		   s[k][0]=i;
		   s[k][1]=j;
		   s[k][2]=a[i][j];
		   k++;
	   }
   }
}
s[0][2]=k-1;
printf("tuple form is\n");
for(i=0;i<s[0][2];i++)
{
	for(j=0;j<3;j++)
	{
		
		printf("%d\t",s[i][j]);
		if(j==2)
		{
			printf("\n");
		}
	}
}
int t[36][56];
t[0][0]=s[0][1];
t[0][1]=s[0][0];
t[0][2]=s[0][2];
k=1;
m=s[0][1];
n=s[0][2];
for(i=0;i<=m;i++)
{
	if(s[j][1]==i)
	{
		t[k][0]=s[j][1];
		t[k][1]=s[j][0];
		t[k][2]=s[j][2];
		k++;
	}
}
printf("transpose\n");
for(i=0;i<=t[0][2];i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",t[i][j]);
		if(j==2)
		{
			printf("\n");
		}
	}
}
}
int main()
{
	int i,j,m,n,a[100][100];
	printf("enter the no of  rows");
	scanf("%d",&m);
	printf("enter the no of  cloums");
	scanf("%d",&n);
	printf("enter the elments");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	sparse(a,m,n);
	return 0;
}
