#include<stdio.h>
int size,front=-1,rear=-1;
struct node
{
	int item,pri;
}a[20];
void enqueue(int item,int pri)
{     int i,loc,front,rear,size;
	if(front==-1)
	{
		a[rear].item=item;
		a[rear].pri=pri;
		front=-1,rear=-1;
	}
	else if(front==0&&rear==size-1)
	{
		printf("queue is full");
	}
	else
	{
		if(rear==size-1)
		{
			for(i=front;i<=rear;i++)
		
				a[i-1]=a[i];
				front--;
				rear--;
		}
			for(i=rear;i>=front;i--)
			{
				if(a[i].pri<pri)
				{
					break;
				}
			}
			loc=i+1;
			for(i=rear;i>=loc;i--)
			{
				a[i+1]=a[i];
			}
			a[loc].item=item;
			a[loc].pri=pri;
			rear++;
		}
	}
	void dequeue(int item)
	{   int i=0;
		if(front==-1)
		{
			printf("que is empty");
		}
		else if(front ==rear)
		{
		printf("deleted elmt is %d",a[i].item);
		front--;rear--;
		}
		else
		{
			printf("delted elmt is %d",a[i].item);
			front++;
		}
	}
	void display()
	{       
		 int i;
		if(front==-1)
		{
			printf("enter empty");
		}
		else
	     {
		for(i=front;i<=rear;i++)
		{
			printf("elnts are%d",a[i].item);
		}
	}
}
		
int main()
{
	int item,pri,choice;
	front=-1,rear=-1;
	printf("enter the size\n");
	scanf("%d",&size);
	printf("enter the choice\n");
	scanf("%d",&choice);
	do
	{
		switch(choice)
		{
			case 1:printf("enter the item");
	               scanf("%d",&item);
	            printf("enter teh prio");
	              scanf("%d",&pri);
	              enqueue(item,pri);
	              display();
	       case 2:printf("enter the item");
	            scanf("%d",&item);
	             dequeue(item);
	              display();
	        case 3:display();
	          case 4:break;
		  }
		 } while(choice!=4);
	} 
	 
		 
	               
	               
	              
	
	
