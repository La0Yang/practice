#include<stdio.h>
#include<math.h>
 //int main()
 //{
	// //register int a = 10;//�����a����ɼĴ�������
	// int a = 10;
	// a = -2;
	// //int ����ı������з��ŵ�-signed int;
	// //unsigned int num = 1�� -�޷��ŵ�
	// //struct -�ṹ��ؼ���
	// //union -������/������
	// return 0;
 //}

//int main����
//{
//	//typedef  -  ���Ͷ��� - �����ض���
//	unsigned int num = 20;
//	typedef unsigned int u_int;//u_int = num = 20
//	return 0;
//
//}


//1.static ���ξֲ����� - �ֲ��������������ڱ䳤 ����������Ȼ��Ч
//2.static ����ȫ�ֱ��� - �ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//3.static ���κ����ı��˺�������������
//��ͨ���������ⲿ��������
//�����ⲿ����
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//

//int main()
//{
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n ", g_val);
//	return 0;
//}


//void test()
//{
//	int a = 1;//static int a = 1 -- a��һ����̬�ľֲ�����//������Ϊ23456
//	a++;
//	printf("a = %d\n", a);//�����22222
//}
//
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//#define �����ʶ������
//#define MAX 100
//
////������ʵ��
//int Max(int x, int y)
//{
//	if(x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
// #define MAX��X, Y�� (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p;//"*" - �����ò����� - ��p���н����ò����ҵ���ָ��Ķ���a
//	*p = 20;//��p�������ҵ��Ķ���a��ֵ���20
//	//p - ָ����� - ������ŵ�ַ - ������int*
//	return 0;
//}