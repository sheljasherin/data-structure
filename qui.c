#include<stdio.h>

    void quicksort(int a[20],int first,int last)
    {    
		int i,pivot,j,temp;
    if(first<last)
    {
    
       pivot=first;
       i=first;
       j=last;
       while(i<j)
       {
       while(a[i]<=a[pivot])
       {
          i++;
          }
          while(a[j]>=a[pivot])
          {
            j--;
            }
            if(i<j)
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
            }
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;
            
            quicksort(a,first,j-1);
            quicksort(a,j+1,last);
            }
         }  
            
   int main()
{  
	int n,i,a[20];
	
printf("enter teh no array");
scanf("%d",&n);
printf("enter the elmts of array");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
 quicksort(a,0,n-1);
 printf("after sorting");
 for(i=0;i<n;i++)
 {
    printf("%d",a[i]);
    }
    }
