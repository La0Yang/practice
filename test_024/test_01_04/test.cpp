#include "test.h"
#include<stdio.h>
#include<math.h>



//void test(int arr[])
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n, sz);
//}
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}



//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	char* pc=arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ�������ַ���
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef
//
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	if(p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
	//if(arr1 == arr2)
	//{
	//	printf("hehe\n");
	//}
	//else
	//{
	//	printf("haha\n");
	//}

	//return 0;
//}



//ָ������ - ������,�������ָ��
//int main()
//{
//	int arr[10] = {0};//��������
//	char ch[5] = {0};//�ַ�����
//	int* parr[4];//�������ָ������� - ���ָ������
//	char* pch[5];//����ַ�ָ������� -   ������
//	return 0;
//}


//int main()//�ͼ��÷�
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a, &b, &c, &d};
//	int i = 0;
//	for(i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//
//	int* parr[] = {arr1, arr2, arr3};
//	int i = 0;
//	for(i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for(j = 0; j<5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����ָ�� - ��ָ�� 
//int main()
//{
//	int *p = NULL;//p����ָ�� - ָ�����ε�ָ�� - ������εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ����ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//
//	//int arr[10] = {0};
//	//arr - ��Ԫ�صĵ�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}




//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	int i = 0;
//	for(i = 0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	//int (*pa)[10] = %arr;
//	//int i = 0;
//	//for(i=0;i<10;i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//	return 0;
//}


//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0; 
//	for(i = 0; i < x; i++)
//	{
//		for(j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for(i = 0; i < x; i++)
//	{
//		int j = 0;
//		for(j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i)+j));
//			printf("%d ", (*(p + i)[j]));
//			printf("%d ", p[i][j]);

//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}



//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//		printf("%d ", *(arr+i));
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//һ��ָ�봫��
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//
//	return 0;
//}
////����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}



//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = {0};
//	int (*p)[10] = &arr;
//	//printf("%d\n", Add(a, b));
//
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	int (*pa)(int, int) = Add;//����ָ��
//	printf("%d\n", (*pa)(2, 3));//5
//	return 0;
//}



//void Print(char*str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello world");
//
//	return 0;
//}