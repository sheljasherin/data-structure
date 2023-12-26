#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
char a[20],s[20],p[20];
int top=-1;
void infix_to_postfix();
int precedence(char c);
int main()
{
	printf("entr th eexpression");
	fgets(a,20,stdin);
    infix_to_postfix();
    return 0;
}
  int precedence(char c)
  {
	  switch(c)
	  {
		 case'+':return 1;
	   case'-':return 1;
	    case'*':return 2;
	     case'/':return 2;
	      case'^':return 3;
	      default :return -1;
	  }
  }

 void infix_to_postfix()
  {
	  int a[20],x,y,i=0,j=0;
	  strcpy(s,"");
	  while(a[i]!='\0')
	  {
		  if(isdigit(a[i]))
		  {    
			  p[j++]=a[i];
			  j++;
			  i++;
			 }
			 else if(isalpha(a[i]))
			 {p[j]=a[i];
				 j++;
				 i++;
			 }
			 else if(a[i]=='(')
			 {
				 s[++top]=a[i];
			 }
			 else if(a[i]==')')
			 {
				 while(s[top]!='(')
				 {
					 p[j++]=s[top--];
		
				 }
				 top--;
			 }
			 else{
				 x=precedence(a[i]);
				 y=precedence(s[top]);
		         if(top==-1||y=='('|| precedence(x)>precedence(y))
		          {
			        s[++top]=a[i];

	                  }
                 
	   else
	   {
		   while(top!=-1&&y!='('&& precedence(x)<precedence(y))
		   {
			   p[j++]=s[top--];
			   y=precedence(s[top]);
		   }
		   s[++top]=a[i];
	   }
   }
   i++;
}

while(top!=-1)
{
	p[j++]=s[top--];
}
p[j]='\0';
printf("postfix expressio is %s\n",p);   
}

		  
			  
