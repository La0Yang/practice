#include<stdio.h>
#include<stdlib.h>
#include<fstream>


//(*(void (*)())0)();
//1.��0ǿ������ת���ɣ�void(*)()����ָ������ - 0����һ�������ĵ�ַ
//2.����0��ַ���ĸú���

//void(*signal(int, void(*)(int)))(int);
//1.signal��һ������������signal�����Ĳ�����2������һ����int���ͣ��ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//2.signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//��
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
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//����ָ�������
//	
//	int i = 0;
//	for(i = 0; i<4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}




//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ�� pf�� �ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
////2.дһ������ָ������ pfArr�� �ܹ����4��my_strcpy�����ĵ�ַ
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
//int main()//����ָ�������Ż�����
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr - ��һ������ָ������ - һ�����ת�Ʊ�
//	int (*pfArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if(input >=1 && input <= 4)
//		{
//			printf("��������������:");
//		    scanf("%d%d", &x, &y);
//		    int ret = pfArr[input](x, y);
//		    printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch(input)
//		{
//		case 1:
//			printf("����������:");
//		    scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������:");
//		    scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������:");
//		    scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������:");
//		    scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while(input);
//}

//void Calc(int (*pf)(int, int))//�ص������Ż�����
//{
//	int x = 0;
//	int y = 0;
//	printf("����������:");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while(input);
//}




//ָ����ָ�������ָ��
//int main()
//{
//	int arr[10] = {0};
//	int(*p)[10] = &arr;
//
//	int(*pf)(int, int);
//	//����ָ��
//	int (*pfArr[4])(int, int);
//	//pfArr��һ������ָ�������
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ��ָ��[����ָ������]��ָ��
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ�أ�ÿ��Ԫ�ص�������һ������ָ��int(*)(int, int)
//	return 0;
//}



//�ص�����
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




//ð�ݺ���
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i <sz-1; i++)
//	{
//		//һ��ѭ��
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
//	//�Ƚ���������ֵ
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
//qsort(�������������Ԫ�ص�ַ�� �����������Ԫ�ظ����� �����������ÿ��Ԫ�صĴ�С-��λ���ֽڣ� ����ָ��(���Ƚϵ�����Ԫ�صĵ�ַ)-�Ƚ�����Ԫ�����ú����ĵ�ַ);


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
//	void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//    void* ���͵�ָ�� ���ܽ��н����ò���
//	void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
//	 
//	return 0��
//}

