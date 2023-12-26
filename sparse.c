#include<stdio.h>
void sparse(int a[20][20],int r,int c,int s[20][3]);
int main()
{   
	int r,c,i,j,s[20][3];
	int a[20][20];
	printf("enter the row and col");
	scanf("%d%d",&r,&c);
	printf("enter the elmts");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
     }
     printf("elmts are");
     	for(i=0;i<r;i++)
	    {
	   for(j=0;j<c;j++)
	    {
		printf("%d",a[i][j]);
	     }
        }
        sparse(a,r,c,s);
        return 0;
       }
	 void sparse( int a[20][20],int r,int c,int s[20][3])
      {
	    int i,j,k=1;
	     s[0][0]=r;
	     s[0][1]=c;int count=0;
	     for(i=0;i<r;i++)
	     {
			 for(j=0;j<c;j++)
			 {
				 if(a[i][j]!=0)
				 {
					 s[k][0]=i;
					 s[k][1]=j;
                     s[k][2]=a[i][j];
					 k++;
					count++;
				 }
			 }
		 }
		 s[0][2]=k-1;
		 printf("the sparse matrix");
		c=s[0][2];
		for(i=0;i<=c;i++)
		{
			printf("%d\t%d\t%d\t\n",s[i][0],s[i][1],s[i][2]);
	 }
	 if(j==2)
	 {
		 printf("/n");
	 }
	int mid=(r*c)/2;
	 //int count=0;
	// for(i=0;i<r;i++)
	// {
		// for(j=0;j<c;j++)
		// {
	 
	 //if(a[i][j]!=0)
	// {
		// count++;
	 //}
// }
//}

	 if(count>mid)
	 {
		 printf(" notsparse");
	 }
	 else
	 {
		 printf("sparse");
	 }
	 

}

