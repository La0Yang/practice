#include<stdio.h>


//1、求100之内自然数中最大的能被17整除的数。
//int main()
//{
//
//	int n = 0;
//	int max = 0;
//	int i = 0;
//	for(i = 0; i <= 100; i++)
//	{
//		if(0 == i%17)
//		{
//			max = i;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//2、已知a，b，c都是1位整数，求当三位整数abc、cba的和为1333时a、b、c的值。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for(a = 1; a <= 9; a++)
//	{
//		for(b = 1; b <= 9; b++)
//		{
//			for(c = 1; c <= 9; c++)
//			{
//				if((a*100 + b*10 + c) + (c*100 + b*10 + a) == 1333)
//				{
//					printf("a=%d b=%d c=%d\n", a, b, c);
//				}
//			}
//		}
//	}
//	return 0;
//}



//3、计算并输出200-400之间不能被3整除的整数的和。
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	for(i = 200; i <= 400; i++)
//	{
//		if(i%3 != 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//4、从键盘输入10个数，统计非负数的个数，并计算非负数的和
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int count = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		scanf("%d", &n);
//		if(n >= 0)
//		{
//			sum += n;
//			count++;
//		}
//	}
//	printf("个数=%d\n 和=%d\n", count, sum);
//	return 0;
//}




//5、求125之内自然数中偶数之和。
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 0; i <= 125; i++)
//	{
//		if(0 == i%2)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//6、输入5个数，求和并输出。要求编写求和的函数。

//7、编程计算1*2*3+3*4*5+5*6*7+...+99*100*101的值。
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for(i = 1; i <= 99; i+=2)
//	{
//		sum += i*(i+1)*(i+2);
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



//8、编写程序，将用户输入的字符串中所有的字符a用*代替，然后输出。

//9、编写程序，将一个一维数组的元素逆序存放并输出。例如，原顺序为1，2，3，4，5，逆序后为5，4，3，2，1。

//10、求3行3列矩阵a[3][3]={1,2,3,4,5,6,7,8,9}非对角线上元素之和。
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int a[3][3] = {1,2,3,4,5,6,7,8,9};
//	for(i = 0; i < 3; i++)
//	{
//		for(j = 0; j < 3; j++)
//		{
//			if(i != j)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	sum = sum - a[2][0] - a[0][2];
//	printf("sum=%d\n", sum);
//	return 0;
//}




//11、编程判断输入的整数的正负性和奇偶性。如果为正数，输出z；如果为负数，输出f；如果为偶数，输出o；如果为奇数，输出j
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if(n > 0)
//	{
//		printf("z\n");
//	}
//	if(n < 0)
//	{
//		printf("f\n");
//	}
//	if(0 == n%2)
//	{
//		printf("o\n");
//	}
//	else
//	{
//		printf("j\n");
//	}
//	return 0;
//}



//12、计算并输出1-200之间不能被5整除的整数的和。
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 1; i <= 200; i++)
//	{
//		if(0 != i%5)
//		{
//			sum += i;
//		}
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



//13、从键盘输入n和a的值，计算a+aa+aaa+...+aa...a(n个a)的值。
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int tmp = 0;
//	scanf("%d %d", &n, &a);
//	for(i = 1; i <= n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}



//14、输入5个数，求它们中最大值和平均值并输出。
//int main()
//{
//	int sum = 0;
//	int n = 0;
//	int max = 0;
//	int aver = 0;
//	int i = 0;
//	for(i = 0; i< 5; i++)
//	{
//		scanf("%d", &n);
//		sum += n;
//		if(n > max)
//		{
//			max = n;
//		}
//	}
//	printf("max = %d aver = %d", max, sum/5);
//	return 0;
//}



//15、输出所有200-400之间能被3整除且个位数字为6的整数。
//int main()
//{
//	int i = 0;
//	for(i = 200; i <= 400; i++)
//	{
//		if((0 == i%3) && (6 == i%10))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}