#include<stdio.h>
int a[20],front,rear,n;
void push(int item)
{
	int i;
	if(front==0&&rear==n-1)
	{
		printf("full");
	}
	else if(rear==-1)
	{
		front=0;rear=0;a[front]=item;
	}
	else if(front>0)
	{
		front--;
		a[front]=item;
	}
	else
	{
		for(i=rear;i>=front;i--)
		{
			a[i+1]=a[i];
			a[front]=item;
			rear++;
		}
	}
}
void pop()
{
	if(front==-1)
	{
		printf("empty");
	}
	else if(front==rear)
	{		
printf("deleted item is %d",a[front]);
		front=-1;rear=-1;
	}
	else
	{
		printf("deleted item is %d",a[front]);
		front++;
	}
}
void reject()
{
	if(front==-1)
	{
		printf("empty");
	}
	else if(front==rear)
	{		
printf("deleted item is %d",a[rear]);
		front=-1;rear=-1;
}
	else
	{
		printf("deleted item is %d",a[rear]);
		rear--;
	}
}
void inject(int item)
{
	int i;
	if(front==0&&rear==n-1)
	{
		printf("full");
	}
	else if(rear==-1)
	{
		front=0;rear=0;a[rear]=item;
	}
	else if(rear<n-1)
	{
		rear++;
		a[rear]=item;
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			a[i-1]=a[i];
			a[rear]=item;
			front--;
		}
	}
}
int main()
{
	int opt,item,n;
	printf("eneter the limit");
	scanf("%d",&n);
	do
	{
		printf("Enter the option \n1.push\n2.pop\n3.inject\n4.reject\n5.exit");
		scanf("%d",&opt);
		switch(opt)
		{
		case 1:printf("enter the item");
		        scanf("%d",&item);
		        push(item);
		       break;
		case 2:pop();
		       break;
		case 3:printf("enter the item");
		        scanf("%d",&item);
		        inject(item);
		        break;
		case 4:reject();
		        break;
		case 5:printf("exiting");
		       break;
		   }
	   }while(opt!=5);
			}
		
