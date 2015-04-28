#include <stdio.h>
int jiecheng(int num)
{
	if(num%2==0)
		num--;
	int count=1;
	while(num>0){
		count*=num;
		num-=2;
	}
	return count;
}
int main(int argc, char const *argv[])
{
	int lines;
	scanf("%d",&lines);
	getchar();
	while(lines--){
		int num,count=0;
		scanf("%d",&num);
		getchar();
		while(num)
			count+=jiecheng(num--);
		printf("%d\n",count);
	}
	return 0;
}