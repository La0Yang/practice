#include<stdio.h>
#include<stdlib.h>



//typedef struct Stu//struct - 结构体关键字；Stu - 结构体标签；struct Stu - 结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//封号不能丢！typedef为结构体重命名为Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1,s2,s3是三个全局变量
//int main()
//{
//	struct Stu s1 = {"张三", 20, "15420122453", "男"};//创建结构体变量 - s局部变量
//	Stu s2 = {"李四"， 30， "12399943059"， "女"};
//	return 0;
//}




//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//int main()
//{
//	char arr[] = "hello\n";
//	struct T t = {"hehe", {100, 'w', "hello world", 3.14}, arr};
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello
//
//	return 0;
//}



//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %s\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = {"李四", 40, "231214123", "男"};
//	//打印结构体数据- 优先选择print2函数
//
//	print1(s);//传结构体
//	print2(&s);//传地址
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//    int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for(i=0; i<100; i++)
//	{
//         printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i = 0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	for(i=0; i<100; i++)
//	{
//         printf("%d ", i);
//	}
//	for(i=0; i<100; i++)
//	{
//         printf("%d ", 10-i);
//	}
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}



//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for(i = 0; i<10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n =0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for(j = 1; j<=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i = 0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}




//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//拷贝‘\0’
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//优化1
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言
//	while(*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//优化2
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝至dest指向的空间，包含‘\0’字符
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//const讲解
//int main()
//{
//	const int num = 10;
//	
//	const int* p = &num;
//	*p = 20;//err  const 放在指针变量的*左边时，修饰的是*p,也就是说不能通过p来改变*p(num)的值
//	
//	int * const p = &num;//const 放在指针变量的*右边时，修饰的是指针变量p本事,也就是说p不能被改变
//	int n = 100;
//	p &n;
//
//	printf("%d\n", num);
//	
//	return 0;
//}
//const int * p = &num;
//*p = 0;//err
//p = &n;//√
//
//int * const p = &num;
//*p = 0;//√
//p = &n;//err



//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



int main()
{
	int a = 20;//4个字节- 32bit
	//00000000000000000000000000010100 - 原码
	//00000000000000000000000000010100 - 反码
	//00000000000000000000000000010100 - 补码
	//正数原反补相同
	int b = -10;
	//10000000000000000000000000001010 - 原码
	//11111111111111111111111111110101 - 反码
	//11111111111111111111111111110110 - 补码
	//负数最高位为符号位，原码除符号位其他位按位取反得到反码，反码+1得到补码


	//正数在内存中存放的是二进制补码
	return 0;
}
