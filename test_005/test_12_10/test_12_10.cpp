#include<stdio.h>
int main()
{
	int a, b, c, sum;
	scanf("%d %d %d", &a, &b, &c);
	sum=a>b?a:b;
	sum=c>sum?c:sum;
	printf("%d\n ",sum);
	return 0;
}
