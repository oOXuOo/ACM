#include <stdio.h>

int Fib(int);

int main(int argc, char const *argv[])
{
	int lines,i,index;
	scanf("%d",&lines);
	getchar();
	for (i=0;i<lines;i++){
		scanf("%d",&index);
		getchar();
		printf("%d\n",Fib(index));
	}
	return 0;
}


int Fib(int index)
{
	if (index<=2)
		return 1;
	else
		return Fib(index-1)+Fib(index-2);
}