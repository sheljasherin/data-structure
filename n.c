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
	     s[0][1]=c;
	     for(i=0;i<r;i++)
	     {
			 for(j=0;j<c;j++)
			 {
				 if(a[i][j]!=0)
				 {
					 s[k][0]=r;
					 s[k][1]=c;
                     s[k][2]=a[i][j];
					 k++;
				 }
			 }
		 }
		 s[0][2]=k-1;
		 printf("the sparse matrix");
		c=s[0][2];
		for(i=0;i<k;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("%d\t",s[i][j]);
			printf("\n");
	 }
 }
	 printf("\n");
}


