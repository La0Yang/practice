#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//0095FB58
//	printf("%p\n", pa+1);//0095FB5C
//	//int*�����ܹ�����4���ֽ�
//	
//	printf("%p\n", pc);//0095FB58
//	printf("%p\n", pc+1);//0095FB59
//	//char*�����ܹ�����1���ֽ�
//    
//	//ָ�����;�����ָ��һ���߶�Զ��ָ��Ĳ�����
//	//int* p; p+1 --> 4
//	//char* p; p+1 --> 1
//	//double*p; p+1 --> 8
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������arr - ������Ԫ�صĵ�ַ
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}



//int main()
//{
//	int a;//�ֲ����������г�ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ�����������ʼ��Ϊ���ֵ
//	//��ʱpΪҰָ��
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for(i = 0; i<12; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*p= i;
//      p++;
//	}
//	return 0;
//}



//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for(i = 0; i < sz; i++);
//	{
//		printf("%d\n ", *p);
//		p++;
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//ָ��������õ�����ָ��֮��Ԫ�صĸ���
//	return 0;
//}




//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//ָ�������
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = {0};
//
//	printf("%p\n", arr);//00EFF8E0
//	printf("%p\n", arr+1);//00EFF8E4   ���4
//
//	printf("%p\n", &arr[0]);//00EFF8E0
//	printf("%p\n", &arr[0]+1);//00EF8E4   ���4
//
//	printf("%p\n", &arr);//00EFF8E0
//	printf("%p\n", &arr+1);//00EFF908   ���40
//	//1.&arr - &������ - ������������Ԫ�ص�ַ����ʾ������������ - &arrȡ��������������ĵ�ַ
//	//2.sizeof(arr) - sizeof(������) - ������������Ԫ�ص�ַ����ʾ������������ - sizeof(������)���������������Ĵ�С
//	return 0;
//}



//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//	int** * pppa = &ppa;
//	printf("%d\n", **ppa);
//	return 0;
//}


//int main()//����ָ������
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	//int arr[10];
//	int* arr2[3] = {&a, &b, &c};//ָ������
//	int i = 0;
//	for(i = 0; i<3; i++)
//	{
//		printf("%d\n", *(arr2[i]));
//	}
//
//	return 0;
//}


//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[9]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);//�������ʼ��Ϊ0
//	Print(arr, sz);//��ӡ
//	return 0;
//}




//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while(left<right)
//	{
//		int tmp = arr[left];
//	    arr[left] = arr[right];
//	    arr[right] = tmp;
//	    left++;
//	    right--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//�������ʼ��Ϊ0
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}




//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	int tmp = 0;
//	int i =0;
//	int sz = sizeof(arr1) / sizeof(arr[0]);
//	for(i = 0; i<sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	short* p = (short*)arr;
//	int i =0;
//	for(i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for(i=0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}




//int i;//ȫ�ֱ�������ʼ���� Ĭ����0
//int main()
//{
//	i--;
//	if(i > sizeof(i));
//	{
//		printf(">\n");
//	}
//    else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++  + c;
//	printf("a=%d  b= %d c= %d\n", a, b, c);
//	return 0;
//}



//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for(i = 0; i < 32; i++)
//	{
//		if(((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	return 0;
//}




//int get_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	while(tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//
//	return 0;
//}



//void print(int m)
//{
//	int i = 0;
//	printf("����λ: ");
//	for(i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ: ");
//	for(i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d ", &m);
//	print(m);
//	return 0;
//}



//void print(int *p, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz;i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}