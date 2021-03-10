#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

//9、编写程序，将一个一维数组的元素逆序存放并输出。例如，原顺序为1，2，3，4，5，逆序后为5，4，3，2，1。
//int main()
//{
//	int arr[100] = {0};
//	int i = 0;
//	int n = 0;
//	int left = 0;
//	int right = n-1;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while(left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for(i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//17、计算并输出200-400之间不能被7整除的整数的和。
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 200; i <= 400; i++)
//	{
//		if(i%7 != 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//18.计算并输出200-400之间不能被5整除的整数的和。
//int main ()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 200; i <= 400; i++)
//	{
//		if(i%5 != 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//19、从键盘输入10个数，统计非正数的个数，并计算非正数的和。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int count = 0;
//	if(n < 0)
//	{
//		sum += n;
//		count++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//21、打印所有的水仙花数。所谓水仙花数是指一个三位数，其各位数字的立方和等于该数。例如，153就是一个水仙花数，因为153=1*1*1+5*5*5+3*3*3。
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	for(n = 100; n <= 999; n++)
//	{
//		i = n%10;//个位数
//		j = n/10%10;//十位数
//		k = n/100;//百位数
//		if(n == k*k*k+j*j*j+i*i*i)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}



//23、输出所有0-200之间能被3整除且个位数字为6的整数。
//int main()
//{
//	int i = 0;
//	for(i = 0; i <= 200; i++)
//	{
//		if((0 == i%3) && (6 == i%10))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//26、编写程序，使用循环结构输出下列图形：
//* * * *
//
//* * * *
//
//* * * *
//
//* * * *
//
//* * * *

//int main()
//{
//	int i = 0;
//	for(i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for(j = 0; j < 4; j++)
//		{
//			//打印*
//			printf("* ");
//		}
//		for(j = 0; j < 5; j++)
//		{
//			//打印空格
//			printf(" ");
//		}
//		printf("\n");
//		printf("       \n");
//	}
//	return 0;
//}


//30、求两个正整数的最大公约数。
//int main()
//{
//	int min = 0;
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d%d", &m, &n);
//	if(m < n)
//	{
//		min = m;
//	}
//	else
//	{
//		min = n;
//	}
//	for(i = min; i >= 0; i--)
//	{
//		if(0 == m%i && 0 == n%i)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	return 0;
//}


//31、求100之内自然数中奇数之和。
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for(i = 0; i <= 100; i++)
//	{
//		if(i%2 != 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//32、输出所有200-400之间能被3整除且个位数字为7的整数。
//int main()
//{
//	int i = 0;
//	for(i = 200; i <= 400; i++)
//	{
//		if((0 == i%3) && (7 == i%10))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//33、编程计算1*2*3+4*5*6+...+97*98*99的值
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 1; i <= 97; i+=3)
//	{
//		sum += i*(i+1)*(i+2);
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//34、输入n的值，计算并输出1*1+2*2+3*3+4*4+5*5+...+n*n的值。要求编写函数f求平方。
//int f(int x)
//{
//	return x*x;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++)
//	{
//		sum += f(i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//35、计算并输出1-200之间不能被3整除的整数的和。
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 1; i <= 200; i++)
//	{
//		if(0 != i%3)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//37、输入一个华氏温度，输出摄氏温度，计算公式为c=5*(F-32)/9。要求结果保留两位小数。
//int main()
//{
//	int F = 0;//华氏温度
//	double c = 0;//摄氏温度
//	scanf("%d", &F);
//	c = 5*(F-32)/9;
//	printf("c=%.2lf", c);
//	return 0;
//}



//38、输入任意三个数，按从大到小的顺序输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//		{
//		int t = a;
//			a = b;
//			b = t;
//		}
//		if (a < c)
//		{
//		int t = a;
//			a = c;
//			c = t;
//		}
//		if (b < c)
//		{
//		int t = b;
//			b = c;
//			c = t;
//		}
//		printf("%d %d %d", a, b, c);
//	return 0;
//}



//40、从键盘输入圆的半径，计算并输出圆面积与周长，要求结果保留两位小数。
//int main()
//{
//	int r = 0;//圆的半径
//	double S = 0;//圆的面积
//	double C = 0;//圆的周长
//	double pai = 3.14;
//	scanf("%d", &r);
//	S = pai * (r*r);
//	C = 2.0*pai*r;
//	printf("S=%.2lf\nC=%.2lf", S, C);
//	return 0;
//}



//44，判断某一年是否是闰年
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if((0 == year%4) && (0 != year%100))
//	{
//		printf("%d是闰年", year);
//	}
//	if(0 == year%400)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}



//46，判断某个数是否为素数.
//int main()
//{
//	int i = 0;
//	int n = 0;//输入一个数
//	scanf("%d", &n);
//	for(i = 2; i < n-1; i++)
//	{
//		//判断
//		if(0 != n%i)
//		{
//			printf("%d是素数\n", n);
//			break;
//		}
//		else
//		{
//			printf("%d不是素数\n", n);
//			break;
//		}
//	}
//	return 0;
//}



//48，求以下数列前十五项的和：2/1，3/2，5/3，8/5，13/8，21/13…。
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	double m = 1.0;
//	double n = 2.0;
//	for(i = 1; i <= 20; i++)
//	{
//		sum += n/m;
//		n = n + m;
//		m = n - m;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//49，从键盘输入圆柱体高与底面半径，计算并输出圆柱体表面积与体积，要求结果保留两位小数。
//int main()
//{
//	int h = 0;//圆柱体的高
//	int r = 0;//底面半径
//	double S = 0;//圆柱体的表面积
//	double V = 0;//圆柱体的体积
//	double pai = 3.14;
//	scanf("%d%d", &h, &r);
//	S = 2 * pai * (r*r) + 2 * pai * r * h;
//	V = pai * (r*r) * h;
//	printf("S=%.2lf\nV=%.2lf", S, V);
//	return 0;
//}



