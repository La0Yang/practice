#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//
//int main()
//{
//	char input[20] = {0};
//	//shutdown -s -60
//	//system() - 执行系统命令
//	system("shutdown -s -6 60");
//again:
//	printf("请输入:sb\n");
//	scanf("%s", input);
//	if(strcmp(input, "sb") == 0)  //比较两个字符串是否相等
//	{
//		system("shuedown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//
//int main()
//{
//	char input[20] = {0};
//	//shutdown -s -60
//	//system() - 执行系统命令
//	system("shutdown -s -6 60");
//	while(1)
//	{
//	    printf("请输入:sb\n");
//	    scanf("%s", input);
//	    if(strcmp(input, "sb") == 0)  //比较两个字符串是否相等
//	    {
//		    system("shuedown -a");
//			break;
//	    }
//	}
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x+y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//定义函数:get_max
//int get_max(int x, int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//  Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for(j=2; j<n; j++)
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for(i=100; i<=100; i++)
//	{
//		if(is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if((y%4 == 0 && y%100 !=0) || (y%400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1000; i<=2000; i++)
//	{
//		//判断是否为闰年
//		if(1 == is_leap_year(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}
