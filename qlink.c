#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*front,*rear;
void display()
{   
	struct node*ptr;
	if(front==NULL)
	{
		printf("empty");
	}
	else
	{
		ptr=front;
		printf("elmts of queu");
		while(ptr!=NULL)
		{
			printf("data is %d",ptr->data);
			ptr=ptr->link;
		}
	}
}
void enque(int item)
{  
	struct node*new;
	new=(struct node*)malloc(sizeof(struct node));
		new->data=item;
		new->link=NULL;
	
	if(front==NULL)
	{
		
		front=rear=new;
	}
	else
	{
		rear->link=new;
		rear=new;
	}
	display();
}
	
	void deque()
	{   struct node*temp;
		if(front==NULL)
		{
			printf("empty");
		}
		else if(front==rear)
		{
			temp=front;
			front=rear=NULL;
			free(temp);
			display();
		}
		else
		{
			temp=front;
			front=front->link;
			free(temp);
		     display();
	}
	}
	
int main()
{   
	int opt,item;
	
	do
	{
		printf("enter the choice\n1.enqueu\n2.dequeue\n3.display\n4.exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:printf("enter the data");
			scanf("%d",&item);
			enque(item);
			break;
		    
			case 2:
			      deque();
			        break;
			        case 3:display();
			               break;
			               case 4:printf("invalid");
			                 break;
		 }
	}while(opt!=4);
		}
		    
			
