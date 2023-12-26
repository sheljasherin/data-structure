#include<stdio.h>
#include<string.h>
int main()
{   
	int i,n,flag=0;
	char a[20],x;
	printf("enter the no of pen");
	scanf("%d",&n);
	printf("enter the string to search");
	scanf("%s",&x);
	
	 printf("coolors");
	 for( i=0;i<n;i++)
	 {
		  scanf("%s",&a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
		 
		 if(a[i]==x)
		 {
			
			 flag=1;
			 break;
		 }
	 }
	 if(flag==1)
	 {
		 printf(" found %d",i+1);
	 }
	 else
	 {
		 printf("not founf");
	 }
 }
		
	 

