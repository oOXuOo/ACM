#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[5],big,small;
	scanf("%d %d %d %d %d",a+0,a+1,a+2,a+3,a+4);
	getchar();
	big = small = a[0];
	for(int i=1;i<5;i++){
		big = big>a[i]?big:a[i];
		small = small<a[i]?small:a[i];
	}
	printf("%d %d\n",small,big);
	return 0;
}