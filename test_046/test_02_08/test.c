#include<stdio.h>



//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = (char*)&a;
//	*pc = 0;
//	/*printf("%p\n", pa);
//	printf("%p\n", pc);*/
//
//	return 0;
//}
//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С
//int*p; *p���Է���4���ֽ�
//char*p; *p���Է���1���ֽ�
//double*p; *p���Է���8���ֽ�



//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}
//ָ�����;�����ָ����ǰ�������һ���ж�����


//--------------Ұָ�����---------------
//1.ָ��Խ�����
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<12; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*p++ = i;
//	}
//	return 0;
//}


//2.ָ��δ��ʼ��
//int main()
//{
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//
//	return 0;
//}


//3.ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//ָ��ָ��Ŀռ䱻�ͷ�
//
//	return 0;
//}



//---------ָ�������------------
//1.ָ�����
//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;
//	for(i = 0; i<sz; i++)
//	{
//		printf("%d ", *p);
//		p = p+1;
//	}
//	return 0;
//}



//2.ָ�����
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	//ָ������õ������м�Ԫ�صĸ���
//	return 0;
//}


//ָ�����ʵ�����ַ������ȵĺ���
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//arr����Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}
//1.&arr - &������ - ȡ��������������ĵ�ַ
//2.sizeof(arr) - sizeof(������) - ��������ʾ�������飬sizeof(������)������������Ĵ�С


//int main()
//{
//	int arr[10] = {0};
//	int * p = arr;
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}for(i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for(i = 0; i < 10; i++)
//	{
//		printf("%p  =======  %p\n", p+i, &arr[i]);
//	}*/
//	return 0;
//}