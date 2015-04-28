#include <stdio.h>
#include <stdlib.h>
int getDivisor(int a,int b)
{
	int big=(a>b?a:b),small=(a>b?b:a),yu=big%small;
	while(yu){
		big = small;
		small = yu;
		yu = big%small;
	}
	return small;
}
int main(int argc, char const *argv[])
{
	int a,b,c,d,fenzi,fenmu,tmp;
	while(scanf("%d/%d%d/%d",&a,&b,&c,&d)!=-1){
		getchar();
		a*=d;
		c*=b;
		fenmu=b*d;
		fenzi=a+c;
		if(fenzi){	
			tmp=getDivisor(abs(fenzi),fenmu);
			if(tmp==fenmu)
				printf("%d\n",fenzi/fenmu);
			else
				printf("%d/%d\n",fenzi/tmp,fenmu/tmp);
		}
		else
			printf("%d\n",0);
	}
	return 0;
}