#include<stdio.h>

int main()
{
	int a = 5;
	int b = 0;
	b = a++;//a = 6; b = 5;
	b = ++a;//a = 6; b = 6;
	printf("%d %d", a, b);
	return 0;
}