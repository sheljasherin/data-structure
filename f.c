#include <stdio.h>
struct poly
{
    int coeff;
    int expo;
}
p1[10],p2[10],p3[10];
int readpoly(struct poly p[10] );
int addpoly(struct poly p1[10],int t1,int t2,struct poly p2[10],struct poly p3[10]);
void display(struct poly p[10],int t);
int main() {
    int t1,t2,t3;
    t1=readpoly(p1);
    printf("first poly\n");
    display(p1,t1);
    t2=readpoly(p2);
    printf("sec poly\n");
    display(p2,t2);
    printf("resultant poly");
    t3=readpoly(p3);
    display(p3,t3);
}
int readpoly(struct poly  p[10])
{    
    int t;
    printf("enter the no of terms\n");
    scanf("%d",&t);
    printf("enter the coeff ");
    for(int i=0;i<t-1;i++)
    {   
        scanf("%d",&p[i].coeff);
       }

      printf("enter the expo ");
         for(int i=0;i<t-1;i++)
         {
        scanf("%d",&p[i].expo);
      
    }
    return t;
}
void display( struct poly p[10],int t)
{   int k;
    for(k=0;k<t;k++)
    {
        printf("%d x^%d+",p[k].coeff,p[k].expo);
    }
    printf("%d x^%d",p[k].coeff,p[k].expo);
}
int addpoly(struct poly p1[10],int t1,int t2,struct poly  p2[10],struct poly p3[10])
  {   
      int i=0,j=0,k=0;
      while(i<t1&&j<t2)
      {
          if(p1[i].expo==p2[j].expo)
          {
              p3[k].coeff=p1[i].coeff;
              p3[k].expo=p1[i].expo;
              i++;
              k++;
              j++;
              
          }
          else if(p1[i].expo>p2[j].expo)
          {
              p3[k].coeff=p1[i].coeff;
               p3[k].expo=p1[i].expo;
              i++;
              k++;
              j++;
          }
          else
          {
              p3[k].coeff=p2[i].coeff;
               p3[k].expo=p2[i].expo;
              i++;
              k++;
          }
          }
          while(i<t1)
          {
               p3[k].coeff=p1[i].coeff;
              p3[k].expo=p1[i].expo;
              i++;
              k++;
            
          }
           while(j<t2)
          {
               p3[k].coeff=p2[j].coeff;
              p3[k].expo=p2[j].expo;
              j++;
              k++;
            
          }
          return k;
          
      }
  
  

        

    
