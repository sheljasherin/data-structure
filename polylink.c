#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coeff;
	int expo;
	struct node*link;
};
struct node*phead,*rhead,*qhead;
struct node *readpoly()
{  
	int n,i;
	struct node*ptr,*new,*head=NULL;
	printf("enter the terms");
	scanf("%d",&n);
	printf("enter the coeff and expo");
	for(i=1;i<n;i++)
	{
		printf("coeff %dandexpo %d=",i,i);
	new=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&new->coeff);
	scanf("%d",&new->expo);
	new->link=NULL;
	if(head==NULL)
	{
		head=new;
		ptr=head;
	}
	else
	{
	    ptr->link=new;
	    ptr=head;
	}
}return(head);
}void display(struct node*head)
{
    struct node*ptr;
    if(head==NULL)
    {
		printf("emptty");
	}
	else
	{
		ptr=head;
		while(ptr->link!=NULL)
		{   
			printf("%dx^%d+",ptr->coeff,ptr->expo);
			ptr=ptr->link;
         }
       printf("%dx^%d",ptr->coeff,ptr->expo);
	}
}
	
struct node*addpoly()
	{
		struct node *p,*q,*r,*new,*head=NULL;
	    while(p!=NULL&&q!=NULL)
	    {
			if(p->expo==q->expo)
			{
				new=(struct node*)malloc(sizeof(struct node));
				new->coeff=p->coeff+q->coeff;
				new->expo=p->expo;
				new->link=NULL;
				p=p->link;
			}
			else if(p->expo > q->expo)
			{
				new=(struct node*)malloc(sizeof(struct node));
				new->coeff=p->coeff;
				new->expo=p->expo;
				new->link=NULL;
				p=p->link;
			}
		    else
		    {
				new=(struct node*)malloc(sizeof(struct node));
				new->coeff=q->coeff;
				new->expo=q->expo;
				new->link=NULL;
				q=q->link;
			}
			if(head==NULL)
			{
				head=new;
				r=head;
			}
			else
			{
				r->link=new;
				r=new;
			}
			
		}
		while(p!=NULL)
		{
			
				new=(struct node*)malloc(sizeof(struct node));
				new->coeff=p->coeff;
				new->expo=p->expo;
				new->link=NULL;
			
			
	       if(head==NULL)
			{
				head=new;
				r=head;
			}
			else
			{
				r->link=new;
				r=new;
			}
			p=p->link;
		}
			while(q!=NULL)
			{
				
	
				new=(struct node*)malloc(sizeof(struct node));
				new->coeff= q->coeff;
				new->expo=q->expo;
				new->link=NULL;
	       if(head==NULL)
			{
				head=new;
				r=head;
			}
			else
			{
				r->link=new;
				r=new;
			}
			q=q->link;
		}
	return(head);
}
	
	

int main()
{
	printf("enter the first poly\n");
	phead=readpoly();
	printf("enter the sec poly\n");
	qhead=readpoly();
	printf(" first poly");
	display(phead);
	printf(" sec poly");
	display(qhead);
	rhead=addpoly();
	printf("resultant poly");
	display(rhead);
}

	
	

	
