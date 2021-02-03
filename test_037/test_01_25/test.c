#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//---------错误案例------------
//int main()
//{
//	//1.对NULL指针解引用操作
//	int *p = (int*)malloc(40);
//	//对p进行判断
//	*p = 10;//malloc开辟空间失败，对NULL指针解引用
//
//	//2.对动态开辟内存的越界访问
//	int *p = (int*)malloc(40);//10个int
//	if(p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for(i = 0; i <= 10; i++)//i = 10的时候发生越界访问
//	{
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//
//	//3.对非动态开辟内存使用free释放
//	int a = 10;
//	int *p = &a;
//	//对非动态开辟内存使用free释放
//	free(p);
//	p = NULL;
//
//	//4.使用free释放动态开辟内存的一部分
//	int* p = (int*)malloc(40);
//	if(p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//回收空间
//	free(p);
//	p = NULL;
//
//	//5.对同一块动态内存的多次释放
//	int* p = (int*)malloc(40);
//	if(p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	//p = NULL;//解决办法
//	//...
//	free(p);
//	
//	//6.动态开辟内存忘记释放（内存泄漏）
//	while(1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}



//---------经典笔试题----------

//题目一：
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//此处程序崩溃
//	printf(str);
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
////代码存在的问题
////str以传值的形式传递给p，p是GetMemory的形参，只能在函数内部有效
////等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏
//
//
////正确修改方式1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");//此处程序崩溃
//	printf(str);
//	
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
////正确修改方式2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");//此处程序崩溃
//	printf(str);
//	
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//题目二：

//char* GetMemory(void)
//{
//	char p[] = "hello world";//局部变量，出函数销毁
//	return p;//返回栈空间的地址 - 容易造成非法访问
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//-----------------------------------

//int* test()
//{
//	//static int a = 10;//静态区 - ok
//	int a = 10;//栈区 - err
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//题目三：

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//忘记释放动态开辟的内存
//	//导致内存泄漏
//	free(str);
//	str = NULL;//改进
//}
//int main()
//{
//	Test();
//	return 0;
//}



//题目四：

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放后，并不会把str置为NULL
//	//修改
//	str = NULL;
//	
//	if(str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}