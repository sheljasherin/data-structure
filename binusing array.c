#include <stdio.h>
 void buildtree(int a[],int i,int item);
int main()
{
   int a[70],i,n,item;
   printf("ent the no of  node");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     a[i]=-1;
     }
    printf("entre the root");
    scanf("%d",&item);
    buildtree(a,1,item);
    printf("enter the result\n");
    for(i=0;i<=16;i++)
    {
      if(a[i]==-1)
      printf("-");
      else
      {
        printf("%d",a[i]);
        }
        }
        }
   void buildtree(int a[],int i,int item)
     {   
		 int ch,leftu;
        a[i]=item;
       printf("do yo want left chile of %d(1/0)",item);
       scanf("%d",&ch);
       if(ch==1)
       {
       printf("enter the left child");
       scanf("%d",&leftu);
       buildtree(a,2*i,leftu);
       }
        printf("do yo want right chile of %d(1/0)",item);
       scanf("%d",&ch);
       if(ch==1)
       {
       printf("enter the right child");
       scanf("%d",&leftu);
       buildtree(a,2*i+1,leftu);
       }
   }
       
        
     
