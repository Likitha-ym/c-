#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char revstr[20];

#define STACK_SIZE 100

int F(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-': return 1;
		case '*':
		case '/': return 3;
		case '^':
		case '$': return 6;
		case ')': return 0;
		case '#': return -1;
		default: return 8;
	}
}
int G(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-': return 2;
		case '*':
		case '/': return 4;
		case '^':
		case '$': return 5;
		case '(': return 0;
		case ')': return 9;
		default: return 7;
	}
}
void infix_prefix(char infix[], char prefix[])
{
	int top,j,i;
	char s[30], symbol;
	top=-1;
	s[++top]='#';
	j=0;
	strrev(infix);
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		while(F(s[top])>G(symbol))
		{
			prefix[j]=s[top--];
			j++;
		}
		if(F(s[top])!=G(symbol))
		s[++top]=symbol;
		else
		top--;
	}
	while(s[top]!='#')
	{
		prefix[j++]=s[top--];
	}
	strrev(prefix);
	prefix[j]='\0';
}
int main()
 {
    char infix[20],prefix[20];

    printf("Enter infix expression: ");
    scanf("%s",&infix);

    infix_prefix(infix,prefix);

    printf("Prefix expression: %s\n",prefix);

    return 0;
}
