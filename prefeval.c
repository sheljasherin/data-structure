#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char p[20];
char s1[20];
int top=-1;
void prefix_evaluation();
int main()
{
	printf("enter the postfix expression");
	fgets(p,20,stdin);
	 prefix_evaluation();
}
void prefix_evaluation()
{
	char str[90];
	int i,op2,op1,result;
	for(i=strlen(p)-1;i>=0;i--)
	{
		if(isdigit(p[i]))
		{
			str[0]=p[i];
			str[1]='\0';
			s1[++top]=atoi(str);
		}
		else
		{
			op2=s1[top--];
			op1=s1[top--];
			switch(p[i])
			{
				case '+':result=op1+op2;
				          break;
			  case '-':result=op1-op2;
				          break;
		       case '*':result=op1*op2;
				          break;
			   case '/':result=op1/op2;
				          break;
				 case '^':result=op1^op2;
				          break;
				 }
				 s1[++top]=result;
			 }
		 }
		 printf("pre eval=%d",s1[0]);
		 
	 }
				         


