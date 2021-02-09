#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stddef.h>


//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = {'c', 100, 3.14, "hello world"};//结构体的初始化
//	struct S s = {'c', {55.6, 30}, 100, 3.14, "hello world"};//结构体内引用结构体
//	
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//
//	return 0;
//}



//结构体内存对齐 - 拿空间来换取时间的做法
//struct S1 
//{
//	char c1;//1字节
//	int a;//4字节
//	char c2;
//};
//struct S2 
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3 
//{
//	double d;//8字节
//	char c;
//	int i;
//};
//struct S4 
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = {0};
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = {0};
//	printf("%d\n", sizeof(s2));//8
//	struct S3 s3 = {0};
//	printf("%d\n", sizeof(s3));//16
//	printf("%d\n", sizeof(s4));//32
//
//	return 0;
//}




//#pragma pack(4)//设置默认对齐数为4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//取消设置的默认对起数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}



//offsetof() - 成员相对于结构体起始位置的偏移值
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//
//	return 0;
//}



//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);//结构体传参首选传地址 
//
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;*/
//
//	return 0;
//}




//位段 - 二进制段 - 位段的目的就是节省空间
//struct S
//{
//	int a : 2;//2比特位
//	int b : 5;//5比特位
//	int c : 10;//10比特位
//	int d : 30;//30比特位
//};
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = {0};
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


//------------------------------


//枚举(类型)

//enum Sex
//{
//	//枚举的可能取值 - 枚举常量
//	MALE = 2,//常量的初始化
//	FEMALE,
//	SECRET = 8,
//};
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE,//2
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = RED;
//	enum Color c = 2;//int
//	MALE = 0;//err
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//}


//枚举大小的计算
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));//4
//
//	return 0;
//}


//联合 - 联合体 - 共用体
//定义：联合也是一种特殊的自定义类型，这种类型定义的变量也包含一系列成员
//      特征是这些成员公用同一块空间（所以联合也叫共用体）

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}


//方法1
//int check_sys()
//{
//	int a = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return *(char*)&a;
//}
//方法2
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return u.c;
//}
//int main()
//{
//	//int a = 0x11223344;
//	//低地址------------------------>高地址
//	//...[][][][][][][11][22][33][44][][][][][][][][]...  大端字节序存储模式
//	//...[][][][][][][44][33][22][11][][][][][][][][]...  小端字节序存储模式
//	//讨论一个数据，存放在内存中的
//	int a = 1;
//	int ret = check_sys();
//
//	if(1 == ret)//*(char*)&a - 方法1
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


