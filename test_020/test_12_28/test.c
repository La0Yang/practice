#include<math.h>
#include<stdio.h>

//int main()//按（二进制）位与 - &
//{
//	//相异则为0，同1才为1
//	int a = 3;
//	int b =5;
//	int c = a&b;
//	//00000000000000000000000000000011 - a
//	//00000000000000000000000000000101 - b
//	//00000000000000000000000000000001 - c
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()//按（二进制）位或 - |
//{
//	//有1则为1 ，同0才为0
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	//00000000000000000000000000000011 - a
//	//00000000000000000000000000000101 - b
//	//00000000000000000000000000000001 - c
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()//按（二进制）位异或
//{
//	//相同则为0，相异为1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}


//
//int main()//不使用第三个变量交换两个数字
//{
//	//加减法 - 缺点可能会溢出
//	int a = 3;//a = 011
//	int b = 5;//b = 101
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//异或法
//	a = a^b;// a^b=6=a - 110
//	b = a^b;//a^b=3=b - 011
//	a = a^b;//a^b=5=a - 101
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", num);
//	//统计num的补码中有几个1
//	//while(num)
//	//{
//	//	if(num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//	int i = 0;
//	for(i = 0; i < 32; i++)
//	{
//		if(1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int mian()
//{
//	//赋值操作符
//	int a = 10;
//	a = a + 2;
//	a += 2;//复合赋值符
//
//	a = a >> 1;
//	a >>= 1;
//
//	a = a&1;
//	a &= 1;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a// & - 取地址操作符
//	*p = 20;// * - 解引用操作符
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	char b = 'r';
//	char* p = &c;
//	int arr[10] = {0};
//	//sizeof - 计算变量所占内存空间的大小，单位是字节
//	printf("%d\n", sizeof((a)));//4
//	printf("%d\n", sizeof(int));//4
//
//
//	printf("%d\n", sizeof((b)));//1
//	printf("%d\n", sizeof(char));//1
//
//
//	printf("%d\n", sizeof((p)));//4
//	printf("%d\n", sizeof(char*));//4
//
//
//	printf("%d\n", sizeof((arr)));//40
//	printf("%d\n", sizeof(int [10]));//40
//
//
//	return 0;
//}



//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);//0
//	return 0;
//}



//int main()
//{
//	//~ - 按（2进制）位取反
//	int a = 0;
//	printf("%d\n", ~a);//-1
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	//接收的形参arr[]是指针才能接收传参
//	printf("%d\n", sizeof(arr));//4字节  此时arr是指针的大小
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4字节
//}
//int main()
//{
//	//数组传参时传过去的是数组首元素的地址
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40字节
//	printf("%d\n", sizeof(ch));//10字节
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//a = 1, b = 2, c = 3, d = 4  &&左边为假，右边不运算
//
//	//i = a++ || ++b || d++;a = 2, b = 2, c = 3, d = 4   ||左边为真，右边不运算
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//
//	if(a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//
//	if(a > 5)
//		b = 3;
//	else
//		b = -3
//
//	b = (a > 5 ? 3 : -3);//三目操作符
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//创建数组
//	arr[9] = 10;//下标引用操作符
//	return 0;
//}




//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}



//struct Stu//创建一个结构体类型
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = {"张三", 20, "20190123"};//使用struct Stu类型创建了一个学生对象s1，并初始化
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->age);
//	//结构体指针->成员名
//	//printf("%s\n", (*ps).name);
//	//printf("%s\n", (*ps).age);
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量+‘.’+成员名
//	return 0;
//}



//int main()
//{
//    char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}



//int main()
//{
//  指正类型决定了指针进行解引用操作时，能够访问空间的大小
//  int*p;  *p能够访问4个字节
//  char*p;  *p能够访问1个字节
//  double*p;  *p能够访问8个字节
//	int a = 10;
//	int* p = &a;//p就是指针变量 - 存放地址的变量
//	return 0;
//}



