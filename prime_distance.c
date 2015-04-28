#include <stdio.h>
#include <math.h>

int fdnrPrime(int,int);
int IsPrime(int);

int main(int argc, char const *argv[])
{
	int lines,i,num,prime;
	scanf("%d",&lines);
	getchar();
	for(i=0;i<lines;i++){
		scanf("%d",&num);
		getchar();
		prime = fdnrPrime(num,0);
		printf("%d %d\n",prime,(prime-num>0?prime-num:num-prime));
	}
	return 0;
}

int fdnrPrime(int num,int gap)
{
	while(gap<=num){
		if(IsPrime(num-gap))
			return num-gap;
		else if(IsPrime(num+gap))
			return num+gap;
		else
			gap++;
	}
}


int IsPrime(int x)
{
	if(x<2)
		return 0;
	if(x==2)
		return 1;
	int i,k=sqrt(x+1);
	for(i=2;i<=k;i++)
		if(x%i==0)
			return 0;
	return 1;
}