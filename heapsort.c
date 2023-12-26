#include<stdio.h>
void BuildMaxHeap(int a[],int n);
void heapify(int a[],int n,int i);
void heapsort(int a[],int n)
{    int i,temp;
	
	 BuildMaxHeap(a,n);
	 for(i=n-1;i>=0;i--)
	 {
		 temp=a[0];
		 a[0]=a[i];
		 a[i]=temp;
	 
 
 heapify(a,i,0);
}
}
void heapify(int a[],int n,int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&a[left]>a[largest])
	{
		largest=left;
	}
    if(right<n&&a[right]>a[largest])
	{
		largest=right;
	}
	
	
		if(largest!=i)
		{
		int temp=a[i];
		  a[i]=a[largest];
		  a[largest]=temp;
	  
	  heapify(a,n,largest);
  }
  }

void BuildMaxHeap(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(a,n,i);
	}
}
void printarray(int a[],int n)
{    int i;
	 for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
 
int main()
{   
	int n,a[40],i;
	printf("enter the no node");
	scanf("%d",&n);
	printf("enter the elmts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nbefor sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	heapsort(a,n);
    printf("\nafter sorting\n");
    printarray(a,n);
 }

 
	
