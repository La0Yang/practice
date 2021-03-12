#include<stdio.h>

//22、一个皮球从100米高度自由落下，每次落地后反弹回原高度的一半，再落下，再反弹。求当它第10次落地时，共经过了多少米，第10次反弹多高？
//int main()
//{
//	double hight = 100;
//	double sum = 100;
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		sum = sum + hight;
//		hight = hight / 2;
//	}
//	printf("sum=%lf hight=%lf\n", sum, hight);
//	return 0;
//}



//24、输入一个正整数，输出它的阶乘。
//int Mul(int n)
//{
//	if(n > 1)
//	{
//		return n*Mul(n-1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = Mul(n);
//	printf("%d! = %d", n, ret);
//
//	return 0;
//}


//int Fac(int n)
//{
//	int i = 0;
//	for(i = 1; i <= n; i++)
//	{
//		return n*Fac(n-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d! = %d\n", n, ret);
//	return 0;
//}




//43, 输出斐波那契数列的前40项
//int main()
//{
//	int i = 0;
//	int f1 = 1;
//	int f2 = 1;
//	for(i = 0; i <= 20; i++)
//	{
//		printf("%d %d\n", f1, f2);
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//	}
//	return 0;
//}
//1 1 2 3 5 8 13 21 34 55 



//47,编程计算1！+2！+3！+…+10!的值。
//int Fic(int n)
//{
//	if(n > 1)
//	{
//		return n*Fic(n-1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for(i = 1; i <= 10; i++)
//	{
//		sum = sum + Fic(i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//29、输入3个学生4门课的成绩{(60,70,65,75)，(75,80,75,90),(95,75,90,65)},计算每个学生的总分和平均成绩并输出，结果保留一位小数。
int main()
{
	float sum1 = 0;
	float sum2 = 0;
	float sum3 = 0;
	int i = 0;
	int j = 0;
	int Stu[3][4];
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%d", &Stu[i][j]);
		}
	}
	for(j = 0; j < 4; j++)
	{
		i = 0;
		sum1 += Stu[0][j];
	}
	for(j = 0; j < 4; j++)
	{
		i = 1;
		sum2 += Stu[1][j];
	}
	for(j = 0; j < 4; j++)
	{
		i = 2;
		sum3 += Stu[2][j];
	}
	printf("sum1=%.1lf\nsum2=%.1lf\nsum3=%.1lf\n", sum1, sum2, sum3);
	printf("aver1=%d\naver2=%d\naver3=%d\n", sum1 / 4, sum2 / 4, sum3 / 4);
	return 0;
}