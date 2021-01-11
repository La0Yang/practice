#include<stdio.h>
#include<math.h>
 //int main()
 //{
	// //register int a = 10;//建议把a定义成寄存器变量
	// int a = 10;
	// a = -2;
	// //int 定义的变量是有符号的-signed int;
	// //unsigned int num = 1； -无符号的
	// //struct -结构体关键字
	// //union -联合体/共用体
	// return 0;
 //}

//int main（）
//{
//	//typedef  -  类型定义 - 类型重定义
//	unsigned int num = 20;
//	typedef unsigned int u_int;//u_int = num = 20
//	return 0;
//
//}


//1.static 修饰局部变量 - 局部变量的生命周期变长 出作用域依然有效
//2.static 修饰全局变量 - 改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//3.static 修饰函数改变了函数的链接属性
//普通函数具有外部链接属性
//声明外部函数
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
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n ", g_val);
//	return 0;
//}


//void test()
//{
//	int a = 1;//static int a = 1 -- a是一个静态的局部变量//输出结果为23456
//	a++;
//	printf("a = %d\n", a);//输出：22222
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

//#define 定义标识符常亮
//#define MAX 100
//
////函数的实现
//int Max(int x, int y)
//{
//	if(x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
// #define MAX（X, Y） (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p;//"*" - 解引用操作符 - 对p进行解引用操作找到所指向的对象a
//	*p = 20;//将p解引用找到的对象a的值变成20
//	//p - 指针变量 - 用来存放地址 - 类型是int*
//	return 0;
//}