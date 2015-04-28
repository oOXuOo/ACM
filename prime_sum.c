#include <stdio.h>
#include <math.h>

int Isprime(int);

int main(int argc, char const *argv[])
{
	int gp,i,count;
	scanf("%d",&gp);
	getchar();
	for(i=0;i<gp;i++){
		int num,total=0;
		scanf("%d",&count);
		getchar();
		while(count--){
			scanf("%d",&num);
			getchar();
			if(Isprime(num))
				total+=num;
		}
		printf("%d\n",total);
	}
	return 0;
}

int Isprime(int x){
	if(x<2)
		return 0;
	int i,k=sqrt(x+1);
	for(i=2;i<=k;i++)
		if(x%i==0)
			return 0;
	return 1;
}