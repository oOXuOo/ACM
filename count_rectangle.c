#include <stdio.h>

int main()
{
	long long a, b;
	while(scanf("%lld%lld", &a, &b) != EOF)
	{
		getchar();
		printf("%lld\n", (a+1)*(b+1)*a*b/4);
	}
	return 0;
}