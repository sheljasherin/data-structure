#include<stdio.h>
int main()
{   
	int a[10],i,j;
	printf("book");
	for(i=0;i<10;i++)
	{
		printf("BOX %d\t",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[j]>a[j+1])
			  {
				  int temp=a[j];
				  a[j]=a[j+1];
				  a[j+1]=temp;
			  }
		  }
	  }
	  printf("no after sorting");
	  for(i=0;i<10;i++)
	  {
		  printf("%d\n",a[i]);
	  }
  }
		
	

