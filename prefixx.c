#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
char a[20],s[20],p[20];
int top=-1;
void infix_to_prefix();
int main()
{
   printf("enter infix exp");
   fgets(a,20,stdin);
   infix_to_prefix();
   }
   int precedence(char c)
   {
     switch(c)
     {
       case '+':return 1;
              case '-':return 1;

       case '*':return 2;
       case '/':return 2;
       case '^':return 3;
       }
       return(0);
    }
   
       void infix_to_prefix()
       {
		   int i=0,j=0;
		   
		  char* strrev(char*a);
		   while(a[i]!='\0')
		   {
			   if(isdigit(a[i])||isalpha(a[i]))
			   {
				   p[++j]=a[i];
			   }
			   else if(a[i]==')')
			   {  
				   s[++top]=a[i];
			   }
			   else if(a[i]=='(')
			    {
					while(s[top]!=')')
					{
						p[++j]=s[top--];
					}
					top--;
				}
			    else
			    {  char x=a[i];
				   char	y=s[top];
					if(top==-1||y==')'||precedence(y)<=precedence(x))
					{
						s[++top]=s[i];
					}
				else
				{
					while(top!=-1&&y!=')'&&precedence(x)<precedence(y))
					{
						p[++j]=s[top--];
						y=s[top];
					}
					s[++top]=x;
				}
			}
				i++;
			}
			while(top!=-1)
			{
				p[j++]=s[top--];
				p[j]='\0';
			}
			printf("prefix is %s=",strrev(p));
		}
				
			   
				   
       
