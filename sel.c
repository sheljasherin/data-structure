#include<stdio.h>
void selectionsort(int a[90],int n);
int main()
{   
	int n,a[90],i;
	printf("enter the lint\n");
	scanf("%d",&n);
	printf("enter the elmts\n");
  for(i=0;i<n;i++)
  {
		 scanf("%d",&a[i]);
 }
 selectionsort(a,n); 
  printf("result\n");
  for(i=0;i<n;i++)
  {
	  printf("%d",a[i]);
  }
}
void selectionsort(int a[90],int n)
{
	  int min,i,j,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
			if(min!=i)
			{
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
		}
	
}
