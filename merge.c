#include<stdio.h>
void mergesort(int a[80],int first,int last);
void merge(int a[80],int first,int mid,int last);
# define MAX 100
int main()
{   
	int n,i,a[80];
	printf("enter the lmts");
	scanf("%d",&n);
	printf("enter the elmts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("enter the elmt after\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void mergesort(int a[80],int first,int last)
{   
	if(first<last)
	{
	int mid=(first+last)/2;
	mergesort(a,first,mid);
	mergesort(a,mid+1,last);
	merge(a,first,mid,last);
}
}
void merge(int a[80],int first,int mid,int last)
{      
	int i,j,k,temp[MAX];
	i=first;j=mid+1;k=first;
	while((i<=mid)&&(j<=last))
	{
	  if(a[i]<=a[j])
		{
			temp[k++]=a[i++];
		
		}
		else
		{
			temp[k++]=a[j++];
		
		}
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
		
	}
	while(j<=last)
	{
		temp[k++]=a[j++];
	}
	for(i=first;i<=last;i++)
	{
		a[i]=temp[i];
	}
}
	
		
