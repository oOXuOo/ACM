#include <stdio.h>
int main(int argc, char const *argv[])
{
	int lines,n,m,count;
	scanf("%d",&lines);
	getchar();
	while(lines--){
		scanf("%d %d",&n,&m);
		getchar();
		count=0;
		while(n){
			int n2=n;
			while(!(n2%m)){
				count++;
				n2/=m;
			}
			n--;
		}
		printf("%d\n",count);
	}
	return 0;
}
