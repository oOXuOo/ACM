#include <stdio.h>
#include <math.h>
#include <string.h>

int isprime(int);
int max_sub_min(char*);

int main(int argc, char const *argv[])
{
	char s[100];
	int lines,d_value;
	scanf("%d",&lines);
	getchar();
	while(lines--){
		gets(s);
		d_value = max_sub_min(s);
		if(isprime(d_value)){
			printf("%s\n","Lucky Word");
			printf("%d\n",d_value );
		}
		else{
			printf("%s\n","No Answer");
			printf("%d\n",0);			
		}
	}
	return 0;
}

int isprime(int x)
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

int max_sub_min(char* pstr)
{
	int i,count=0;
	int maxn=0,minn=100;
	char *sstart=pstr;
	while(*pstr){
		for(i=0;i<strlen(sstart);i++){
			if(sstart[i]==*pstr)
				count++;
		}
		maxn=maxn>count?maxn:count;
		minn=minn<count?minn:count;
		count=0;
		pstr++;
	}
	return maxn-minn;
}