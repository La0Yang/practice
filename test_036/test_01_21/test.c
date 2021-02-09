#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10*sizeof(int));//动态内存开辟
//	if(p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for(i = 0; i< 10; i++)
//		{
//			*(p+i) = i;
//		}
//		for(i = 0; i< 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	//开辟空间使用完使用free函数释放与归还
//  //free函数是用来释放动态函数开辟的空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if(p == NULL)
//	{
//		//打印错误原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//realloc - 调整动态开辟内存空间的大小
//int main()
//{
//	int* p = (int*)malloc(20);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//以上是在使用malloc开辟的20个字节
//	//假设现在20个字节不能满足使用
//	//希望拥有40个字节空间
//	//使用realloc来调整动态开辟的内存
//
//	//realloc使用的注意事项
//	//1.如果p指向的空间后面有足够的内存空间可以追加，则直接追加，返回p
//	//2.如果p指向的空间后面没有足够的内存空间追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新的地址
//	//3.必须用一个新的变量来接受realloc函数的返回值
//	int*ptr = (int*)realloc(p, 4000);
//	
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//	
//	int i = 0;
//	for(i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	//1.对空指针进行解引用操作
//	int *p = (int*)malloc(40);
//	//万一malloc失败，p就被赋值为NULL
//	*p = 0;//err
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//
//	//2.对动态开辟的内存的越界访问
//	int *p = (int*)malloc(5*sizeof(int));
//	if(p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i < 10; i++)//此处越界访问
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//
//	//3.对非动态开辟内存使用free释放
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}



