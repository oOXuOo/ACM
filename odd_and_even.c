#include <stdio.h>
#include <stdlib.h>

void seprate(int);

int main(void)
{
	int i,lines,*targets,*p;
	scanf("%d",&lines);
	getchar();
	p=targets=(int*) malloc((lines+1)*sizeof (int));

	for(i=0;i<lines;i++){
		scanf("%d",p++);
		getchar();
	}
	*p=0;
	p=targets;

	while(*p){
		seprate(*p);
		p++;
	}

	free(targets);
	return 0;
}


void seprate(int num)
{
	int i,*odds,*evens,*po,*pe;
	po=odds = (int*)malloc((num/2+1)*sizeof(int));
	pe=evens = (int*)malloc((num/2+1)*sizeof(int));
	for(i=1;i<=num;i++){
		if(i%2==0)
			*(pe++)=i;
		else
			*(po++)=i;
	}
	*pe=*po=0;
	pe=evens;po=odds;
	while(*po){
		printf("%d ",*po );
		po++;
	}
	putchar('\n');
	while(*pe){
		printf("%d ",*pe);
		pe++;
	}

	putchar('\n');
	putchar('\n');

	free(odds);
	free(evens);
}


