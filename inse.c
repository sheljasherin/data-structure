#include<stdio.h> 
void insertionsort(int a[20],int n);
int main()
{ 
	 int i,n,a[20];
	printf("enter the limit");
	scanf("%d",&n);
	printf("entre the elmts of array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
insertionsort(a,n);
for(i=n-1;i>=0;i--)
{
	printf("%d",a[i]);
}
}
void insertionsort(int a[90],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{    
		j=i-1;
		
			temp=a[i];
			while(j>=0&&a[j]>temp)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
	
	}
}
