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
	int i;
	for(i=1;i<=num;i++){
		if(i%2==1){
			printf("%d ",i);
		}
	}
	printf("\n");
	for(i=1;i<=num;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	printf("\n\n");
}


