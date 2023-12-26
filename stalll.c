#include<stdio.h>
struct node
{
	int data;
	struct node*link;
}
struct node*top
void display(0
{
	if(top==NULL)
	{
		printf("empty");
	}
	else
	{    ptr=top;
		printf("elmts are");
		while(ptr!=NULL)
		{
	     
	       printf("data is",ptr->data);
	     ptr=ptr->link;
	 }
 }
}
void push(int item){
	struct node*new;
	new=(struct node*)malloc(sizeof(struct node);
	new->data=item;
	new->link=top;
	top=new;
	display();
}
void pop()
{
	struct node*temp;
	if(top==NULL)
	{
		printf("empty");
	}
	else
	{
		temp=top;
		top=top->link;
		free(temp);
		display();
	}
}
int main()
{
	printf("enter the elnts"):
	scanf("%d",&n);
	do
	{
		printf("entre the option\n1.push\n2.pop\3.display");
		scanf("%d",&ch);
		{
			switch(ch)
			{
				case 1:printf("enter the item");
				scanf("%d",&item);
				push(item);
				break;
				case 2:pop();
				break;
				case 3:display();
				break;
				case 4:break;
			}
		}
	}
}
				
	
	
	

