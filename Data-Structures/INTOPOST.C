# include <stdio.h>
# include <conio.h>
# include <ctype.h>
# include<string.h>
char expr[50], oexpr[50], opstack[20];
int top=-1;

void push(char ch)
{
	top++;
	opstack[top] = ch;
}

char pop()
{
	char c = opstack[top];
	top--;
	return c;
}

int priority(char ch)
{
	if(ch == '(')
		return 0;
	else if (ch == '+' || ch == '-')
		return 1;
	else if(ch == '*' || ch == '/')
		return 2;
	else if(ch == '^')
		return 3;
	else if (ch == ')')
		return 4;
}

void convert(char s[])
{
	char c, opr;
	int i, pos = 0, l = strlen(s), cur_prio, prev_prio;
	for(i = 0; i < l;i++)
	{
		c = s[i];
		if(isalpha(c) || isdigit(c))
			oexpr[pos++] = c;
		else if(c == '(')
			push(c);
		else
		{
			if(top == -1)
				push(c);
			else if(c != ')')
			{
				opr = pop();
				cur_prio = priority(c);
				prev_prio = priority(opr);
				if(cur_prio > prev_prio)
				{
					push(opr);
					push(c);
				}
				else
				{
					while(cur_prio <= prev_prio)
					{
						oexpr[pos++] = opr;
						opr = pop();
						prev_prio = priority(opr);
					}
					push(opr);
					push(c);
				}
			}
			else if(c == ')')
			{
				opr = pop();
				while(opr != '(')
				{
					oexpr[pos++] = opr;
					opr = pop();
				}
			}
		}
	}
	while(top > -1)
		oexpr[pos++] = pop();
	printf("\n The expression is : %s",oexpr);
}


void main()
{
	clrscr();
	printf("\n Enter the expression :");
	gets(expr);
	convert(expr);
	getch();
}





