#include<stdio.h>
void bestfit1(int bl[],int b,int n,int p[] )
{
    int allocation[10],i,j;
    for(i=0;i<n;i++)
    allocation[i]=-1;
    for(i=0;i<n;i++)
    {
        int bestfit=-1;
        for(j=0;j<b;j++)
        {
            if(bl[j]>=p[i])
            {
                if(bestfit==-1||bl[j]<bl[bestfit])
                {
                    bestfit=j;

                }
            }
        }
        if(bestfit!=-1)
        {
            allocation[i]=bestfit;
            bl[bestfit]-=p[i];
        }
    }
    printf("process no\t process size \t blocj");
    for(i=0;i<n;i++)
    {  
        printf("%d\t\t%d\t",i+1,p[i]);
        if(allocation[i]!=-1)
        {
            printf("%d\t",allocation[i]+1);
        }
        else
        {
            printf("not");
        }
    }
}
int main()
{   int n,b,p[10],bl[10],i,j,flag=0;
    printf("enter teh no of process");
    scanf("%d",&n);
    printf("enter teh no of blcks");
    scanf("%d",&b);
    printf("enter process");
    for(i=0;i<n;i++)
    {
       scanf("%d",&p[i]);
    }
    printf("enter block");
    for(j=0;j<b;j++)
    {
     scanf("%d",&bl[j]);
    }
    bestfit1(bl,b,n,p);
} 