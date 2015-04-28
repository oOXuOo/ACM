#include <stdio.h>

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
	int lines,a,b;
	scanf("%d",&lines);
	getchar();
	for(int i=0;i<lines;i++){
		scanf("%d %d",&a,&b);
		getchar();
		printf("%d %d\n",getDivisor(a,b),a*b/getDivisor(a,b));
	}
	return 0;
}

