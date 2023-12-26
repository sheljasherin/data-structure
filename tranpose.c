#include<stdio.h>
void sparse(int a[10][10],int r,int c,int s[100][3]);
void transpose(int s[100][3]);
int main()
{
  int a[10][10],r,c,i,j,s[100][3];
  printf("enter the row\n");
  scanf("%d",&r);
   printf("enter the col\n");
  scanf("%d",&c);
   printf("enter the elmts");
   for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
    scanf("%d\t",&a[i][j]);
    
    }
    printf("\n");
    }
    sparse(a,r,c,s);
    }
    void sparse(int a[10][10],int r,int c,int s[100][3])
    {   
    s[0][0]=r;
    s[0][1]=c;
    int k=1,j,i;
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
             printf("tuple\n");
             for(i=0;i<k;i++)
             {
             for(j=0;j<3;j++)
             {
               printf("%d  ",s[i][j]);
               if(j==2)
               {
               printf("\n");
               }
               }
               }
               transpose(s);
    }
   void transpose(int s[100][3])
   {
      int t[20][3],r,c,k=1,i,j;
      t[0][0]=s[0][1];
      t[0][1]=s[0][0];
      t[0][2]=s[0][2];
      r=s[0][0];
      c=s[0][1];
      for(i=0;i<r;i++)
      {
      for(j=0;j<c;j++)
      {    
          if(s[j][1]==i)
          {
         t[k][0]=s[j][1];
         t[k][1]=s[j][0];
         t[k][2]=s[j][2];
         k++;
         }
         }
         }
          printf("transpose\n");
             for(i=0;i<k;i++)
             {
             for(j=0;j<3;j++)
             {
               printf("%d\t",t[i][j]);
               if(j==2)
               {
               printf("\n");
               }
               }
               }
               }
         
         
        
        
  
