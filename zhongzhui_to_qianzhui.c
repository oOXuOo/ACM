#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

char stack_get_top(struct stack* s)
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

int pivot(char op)
{
	switch(op)
	{
		case '+':return 1;break;
		case '-':return 1;break;
		case '*':return 11;break;
		case '/':return 11;break;
		case '(':return -1;break;
		default: return 0;
	}
}

int main(int argc, char **argv)
{
	int lines;
	char input[1000];
	char output[1000];
	scanf("%d",&lines); getchar();
	while(lines--)
		{
		gets(input);
		int i,j,length = strlen(input);
		struct stack* s = stack_create(length);
		for(i=j=0;i<length;i++)
			{
			// 遇到操作数 直接添加
			if(input[i]<='9'&&input[i]>='0')
				output[j++] = input[i];
			// 遇到左括号 直接入栈
			else if(input[i] == '(')
				stack_push(s,'(');
			// 遇到右括号 一直出栈直到匹配
			else if(input[i] == ')')
				{
				char op;
				while((op=stack_get_top(s)) != '(')
					{
					output[j++] = op;
					stack_pop(s);
					}
				stack_pop(s);
				}
			// 遇到其他运算符：加减乘除：
			// 弹出所有优先级大于或者等于该运算符的栈顶元素，然后将该运算符入栈
			else
				{
				char op;
				while(!stack_is_empty(s))
					{
					op=stack_get_top(s);
					if(pivot(op)>=pivot(input[i]))
						{
						output[j++] = op;
						stack_pop(s);
						}
					else
						break;
					}
				stack_push(s,input[i]);
				}
			}
		while(!stack_is_empty(s))
			{
			output[j++] = stack_get_top(s);
			stack_pop(s);
			}
		output[j] = '\0';
		puts(output);
		}
	return 0;
}
