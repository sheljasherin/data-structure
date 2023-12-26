#include<stdio.h>
int source,v,e, visited[10],g[20][20],a[20],front=-1,rear=-1;
  void enqueue(int item)
	  {
		  if(front==-1&&rear==-1)
		  {
			  front=0;
			  rear=0;
			  a[rear]=item;
		  }
	  }
	  void dequeue(int item)
	  {
		  if(front==-1&&rear==-1)
		  {
			  printf("empty");
			  else
			  {
				  return a[front];
				  front++;
			  }
		  }
	  
			  
					  
	 

int main()
{     
	int a,i,j;
	printf("enter the no vertices");
	scanf("%d",&v);
	for(i=0;i<=v;i++)
	{
		for(j=0;j<=v;j++)
		{
			g[i][j]=0;
		}
	}
	printf("enter the edges");
	scanf("%d",&e);
	for(i=0;i<=e;i++)
	{
	printf("enter the edges in the formT (v1,vv)");
	scanf("%d%d",&v1,&v2);
	 g[v1][v2]=1;
	 g[v2][v1]=1;
	 printf("\nenter the adjacency matrix");
	 for(i=0;i<=v;i++)
	 {
		 for(j=0;j<=v;j++)
		 {
			 printf("%d\t",g[i][j]);
		 }
		 printf("\n");
	 }
	   for(i=o;i<=v;i++)
	   {
		   visited[i][j]=0;
	   }
	   printf("enter the source");
	   scanf("%d",&source);
	   printf("\nDFS");
	   DFS(source);
	   for(i=0;i<=v;i++)
	   {
		   visited[i]=0;
	   }
	    printf("\nbFS");
	   for(i=0;i<=v;i++)
	   {
		   visited[i]=0;
	   }
	    BFS(source);
	}
}
	  void DFS(int i)
	  {
		  visited[i]=1;
		  printf("%d",i);
		  for(int k=0;k<=v;k++)
		  {
			  if(g[i][k]==1&&visited[k]=0)
			  {
				  DFS(k);
			  }
			  
	      }
	  }
	  void BFS(int s)
	  {   
		  int j;
		  visited[s]=0;
		  printf("%d",s);
		  enqueue(s);
		  if(front!=-1)
		  {
			  s=dequeue(s);
			  for(int i=0;i<=v;i++)
			  {
				  if(g[s][j]==1&&visited[s]=0)
				  {  
					  printf("%d",i);
					  visited[i]=1;
					  dequeue(s);
				  }
			  }
		  }
	  }
	
