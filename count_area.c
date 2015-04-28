#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=1,area,job,sum[101]={0};
	int index[100]={0},*p=index;
	do{
		scanf("%d %d",&area,&job);
		getchar();
		if(!sum[area])
			*(p++)=area;
		sum[area]+=job;
	}while(area);
	p=index;
	while(*p){
		printf("%d %d\n",*p,sum[*p]);
		p++;
	}
	return 0;
}