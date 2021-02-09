#include<stdio.h>


//#define DEBUG
//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//	int i = 0;
//
//	for(i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG//如果定义了DEBUG，则参与编译
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//	int i = 0;
//
//	for(i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1// 1 - 参与编译， 0 - 不参与编译
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}



//多分支条件编译
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("hihi\n");
//#endif
//
//	return 0;
//}



//判断是否被定义
//#define DEBUG 0
//int main()
//{
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//	return 0;
//}



