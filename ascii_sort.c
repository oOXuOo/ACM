#include <stdio.h>
#include <stdlib.h>

void dropBigger(char*,char*);

int main(void)
{
	int i,lines;
	char a,b,c,*p,*start;
	scanf("%d",&lines);
	getchar();
	p=start=(char*) malloc(lines*3+1);

	for(i=0;i<lines;i++){
		scanf("%c%c%c",&a,&b,&c);
		getchar();
		dropBigger(&a,&b);
		dropBigger(&b,&c);
		dropBigger(&a,&b);
		*(p++) = a;
		*(p++) = b;
		*(p++) = c;
	}
	*p = '\0';
	p = start;
	// printf("%s",start);
	for(i=0;i<lines;i++){
		printf("%c %c %c\n",*p,*(p+1),*(p+2) );
		p+=3;
	}
	free(start);
	return 0;
}


void dropBigger(char* a , char*b)
{
	char tmp;
	if (*a>=*b){
		tmp =*a ;
		*a=*b;
		*b=tmp;
	}
}