#include <stdio.h>
#include <stdlib.h>

int change(int);
int cmp ( const void *a , const void *b );

int main(int argc, char const *argv[])
{
	int lines,num,count;
	scanf("%d",&lines);
	getchar();
	while(lines--){
		scanf("%d",&num);
		getchar();
		for(count=1;num!=6174;count++)
			num = change(num);
		printf("%d\n", count);
	}

	return 0;
}

int change(int m)
{
	int a[4],big,small;
	a[0]=m/1000;
	a[1]=(m%1000)/100;
	a[2]=(m%100)/10;
	a[3]= m%10;
	qsort(a,4,sizeof(int),cmp);
	small=a[0]*1000+a[1]*100+a[2]*10+a[3];
	big=a[3]*1000+a[2]*100+a[1]*10+a[0];
	return big-small;
}


int cmp ( const void *a , const void *b )
{
	return *(int *)a - *(int *)b;
}