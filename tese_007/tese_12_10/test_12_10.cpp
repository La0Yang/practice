#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n ");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(i == j)
//			count++;
//			printf("%d ", i);
//	}
//printf("\ncount=%d\n ", count);
//return 0;
//
//}


//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(year%4==0)
//		{
//		if(year%100!=0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//		if(year%400==0)
//			count++;
//			printf("%d ", year);
//		}
//		
//	}
//	printf("\ncount = %d\n ", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n ", count);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]-为下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-函数调用操作符
//	return 0;
//}



//只要是整数，内存中存储的都是二进制的补码
//正数——原码，反码，补码全部相同
//负数：
//原码                     ---->                          反码           ---->        补码
//直接按照正负             原码的符号位（最高位）不变                   反码+1           
//写出的二进制序列         其他位按位取发
//例：-2
//10000000000000000000000000000010 - 原码
//11111111111111111111111111111101 - 反码
//11111111111111111111111111111110 - 补码