#include <stdio.h>
#include <stdlib.h>

void dropBigger(int*,int*);

int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	getchar();
	dropBigger(&a,&b);
	dropBigger(&b,&c);
	dropBigger(&a,&b);
	printf("%d %d %d\n",a,b,c);
	return 0;
}


void dropBigger(int* a , int*b)
{
	int tmp;
	if (*a>=*b){
		tmp =*a ;
		*a=*b;
		*b=tmp;
	}
}