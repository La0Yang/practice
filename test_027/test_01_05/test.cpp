#include<stdio.h>
#include<stdlib.h>
#include<fstream>


//(*(void (*)())0)();
//1.把0强制类型转换成：void(*)()函数指针类型 - 0就是一个函数的地址
//2.调用0地址处的该函数

//void(*signal(int, void(*)(int)))(int);
//1.signal是一个函数声明，signal函数的参数有2个，第一个是int类型，第二个是函数指针，该函数指针指向的函数参数是int，返回类型是void
//2.signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//简化
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
//	
//	int i = 0;
//	for(i = 0; i<4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}




//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针 pf， 能够指向my_strcpy
//char* (*pf)(char*, const char*);
////2.写一个函数指针数组 pfArr， 能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);




//void menu()
//{
//	printf("*******************************\n");
//	printf("***   1. Add       2. Sub   ***\n");
//	printf("***   3. Mul       4. Div   ***\n");
//	printf("***         0. exit         ***\n");
//	printf("*******************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()//函数指针数组优化代码
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr - 是一个函数指针数组 - 一般称作转移表
//	int (*pfArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if(input >=1 && input <= 4)
//		{
//			printf("请输入两个数字:");
//		    scanf("%d%d", &x, &y);
//		    int ret = pfArr[input](x, y);
//		    printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	
//	}while(input);
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch(input)
//		{
//		case 1:
//			printf("请输入数字:");
//		    scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入数字:");
//		    scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入数字:");
//		    scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入数字:");
//		    scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//}

//void Calc(int (*pf)(int, int))//回调函数优化代码
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入数字:");
//    scanf("%d%d", &x, &y);
//    printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//}




//指向函数指针数组的指针
//int main()
//{
//	int arr[10] = {0};
//	int(*p)[10] = &arr;
//
//	int(*pf)(int, int);
//	//函数指针
//	int (*pfArr[4])(int, int);
//	//pfArr是一个函数指针的数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个指向[函数指针数组]的指针
//	//ppfArr 是一个数组指针，指针指向的数组有4个元素，每个元素的类型是一个函数指针int(*)(int, int)
//	return 0;
//}



//回调函数
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("hello\n");
//}
//int main()
//{
//	test(print);
//	return 0;
//}




//冒泡函数
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i <sz-1; i++)
//	{
//		//一趟循环
//		int j = 0;
//		for(j = 0; j < sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}



//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));



//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void*e1, const void*e2)
//{
//	if(*(float*)e1 == *(float*)e2)
//		return 0;
//	else if(*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//void test2()
//{
//	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,};
//	int sz = sizeof(f)/sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for(j = 0;j<sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test3()
//{
//	struct Stu s[3] = {{"zhangsan", 30}, {"lisi", 20}, {"wangwu", 10}};
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	
//	test1();
//	test2();
//  test3();
//	//bubble_sort(arr, sz);
//	
//}
//qsort(待排序数组的首元素地址， 待排序数组的元素个数， 待排序数组的每个元素的大小-单位是字节， 函数指针(待比较的两个元素的地址)-比较两个元素所用函数的地址);


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//
//	char ch = 'w';
//	void* p = &a;
//	*p = 0;//err
//
//	void* 类型的指针 可以接受任意类型的地址
//    void* 类型的指针 不能进行解引用操作
//	void* 类型的指针 不能进行+-整数的操作
//	 
//	return 0；
//}

