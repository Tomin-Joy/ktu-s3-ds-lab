#include <stdio.h>
#include <ctype.h>           

char Q[20];
int top=-1;       
 
void push(char e)
{                       
    Q[++top]=e;
}
 
char pop()
{                     
    return Q[top--];
}
 
int pFinder(char symbol)
{                
    if(symbol == '^')
		return 3 ;
	else if(symbol == '*' || symbol == '/')
		return 2;
	else if(symbol == '+' || symbol == '-')          
		return 1;
	else
        return 0;
}
 
int main()
{                        
    char infix[50],postfix[50],ch,e;
    int i=0,k=0;
    printf("Enter Infix Expression : ");
    scanf("%s",infix);
    push('(');
    ch = infix[i++];
    while( ch != '\0')
    {
        if( ch == '(') {
        	push(ch);
        }
        else if(isalnum(ch)) {
            postfix[k++]=ch;
        }
        else if( ch == ')')
        {
            while( Q[top] != '('){
                postfix[k++]=pop();
            }
            e=pop(); 
        }
        else
        {       
            while( pFinder(Q[top]) >= pFinder(ch) ){
                postfix[k++]=pop();
            }
            push(ch);
        }
        ch = infix[i++];
    }
    while( Q[top] != '(') {    
        postfix[k++]=pop();
    }
    postfix[k]='\0';          
    printf("\nPostfix Expression =  %s\n",postfix);
    return 0;
}
