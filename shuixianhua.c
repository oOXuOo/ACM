#include <stdio.h>

int isshuixh(int num)
{
	if( num == (num/100)*(num/100)*(num/100)+\
	(num%100/10)*(num%100/10)*(num%100/10)+\
	(num%100%10)*(num%100%10)*(num%100%10))
		return 1;
	else
		return 0;
}

int main(int argc, char const *argv[])
{
	int num;
	scanf("%d",&num);
	getchar();
	while(num){
		if(isshuixh(num))
			printf("Yes\n");
		else
			printf("No\n");
		scanf("%d",&num);
		getchar();
	}
	return 0;
}