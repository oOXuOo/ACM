#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stack
{
	char* base;
	char* top;
};

struct stack* stack_create(int length)
{
	struct stack* tmp = (struct stack*)malloc(sizeof(struct stack));
	tmp->base =  tmp->top = (char*)malloc(length);
	return tmp;
}

void stack_delete(struct stack* s)
{
	free(s->base);
	free(s);
}

char stack_get_pop(struct stack* s)
{
	return *s->top;
}

void stack_pop(struct stack* s)
{
	s->top--;
}

void stack_push(struct stack* s,char e)
{
	s->top++;
	*s->top = e;
}

int stack_is_empty(struct stack* s)
{
	return s->top == s->base;
}

int main(int argc, char **argv)
{
	int lines;
	char input[10000];
	scanf("%d",&lines);
	getchar();
	
	while(lines--)
		{
		gets(input);
		int i,length = strlen(input);
		struct stack* s = stack_create(length);
		for(i=0;i<length;i++)
			{
			if(input[i]=='['||input[i]=='(')
				stack_push(s,input[i]);
			else if(input[i]==']')	
				{
				if( (!stack_is_empty(s)) && (stack_get_pop(s) == '[') )
					stack_pop(s);
				else {printf("No\n");break;}
				}
			else if(input[i]==')')	
				{
				if( (!stack_is_empty(s)) && (stack_get_pop(s) == '(') )
					stack_pop(s);
				else {printf("No\n");break;}
				}
			else;
			}
		if(stack_is_empty(s)&&i==length)
			printf("Yes\n");
		stack_delete(s);
		}
		
	return 0;
}
