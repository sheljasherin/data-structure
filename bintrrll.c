#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*lc,*rc;
}; 
void buildtree(struct node*ptr)
{      int ch;
	struct node *lcptr,*rcptr;
	if(ptr!=NULL)
	{
	
	printf("entter the cdata");
	scanf("%d",&ptr->data);
	ptr->lc=NULL;
	ptr->rc=NULL;
	printf("do u want create a left chile for %d(1/0)",ptr->data);
	scanf("%d",&ch);
	if(ch==1)
     {
	    lcptr=(struct node*)malloc(sizeof(struct node));
	     ptr->lc=lcptr;
	     buildtree(lcptr);
	 }
	 printf("do u want create a chile right for %d(1/0)",ptr->data);
	scanf("%d",&ch);
	if(ch==1)
     {
	     rcptr=(struct node*)malloc(sizeof(struct node));
	     ptr->rc=rcptr;
	     buildtree(rcptr);
	 }
 }
}  
 void inorder(struct node*ptr)
{
	inorder(ptr->lc);
	printf("%d",ptr->data);
	inorder(ptr->rc);
}

int main()
{
	struct node*root;
	root=(struct node*)malloc (sizeof(struct node));
	buildtree(root);
	printf("trree");
	inorder(root);
	getchar();
}
