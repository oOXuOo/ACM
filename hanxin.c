#include <stdio.h>

int main(int argc, char const *argv[])
{
	int tail[3];
	scanf("%d %d %d",tail+0,tail+1,tail+2);
	getchar();
	for(int i=10;i<100;i++){
		if(i%3==tail[0]&&i%5==tail[1]&&i%7==tail[2]){
			printf("%d\n",i );
			return 0;
		}
	}
	printf("No answer\n");
	return 0;
}