#include<stdio.h>
#include<string.h>


//int main()
//{
//	//����������Ԫ�صĵ�ַ
//	//���������
//	//1.sizeof���������� - ��������ʾ��������
//	//2.&������ - ��������ʾ��������
//	//һά����
//	int a[] = {1, 2, 3, 4};//4*4=16
//	printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�-16
//	printf("%d\n", sizeof(a + 0));//4 - ��������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ - ��ַ�Ĵ�С����4����8���ֽ�
//	printf("%d\n", sizeof(*a));//4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ��
//	printf("%d\n", sizeof(a + 1));//4 - ��������ʾ��Ԫ�صĵ�ַ��a+1�ǵڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4����8
//	printf("%d\n", sizeof(a[1]));//4 - �ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));//4 - &aȡ����������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����5����8���ֽ�
//	printf("%d\n", sizeof(*&a));//16 - &a������ĵ�ַ������ĵ�ַ�����÷��ʵ����������飬sizeof����ľ�������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a + 1));//4 - &a������ĵ�ַ��&a+1�����������鵫���ǵ�ַ�����Դ�С��4����8���ֽ�
//	printf("%d\n", sizeof(&a[0]));//4 - ��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4 &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//	
//	//�ַ�����
//	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%d\n", sizeof(arr));//6 - sizeof�����������Ĵ�С��6*1=6�ֽ� 
//	printf("%d\n", sizeof(arr + 0));//4 - arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ�Ĵ�С����4����8���ֽ�
//	printf("%d\n", sizeof(*arr));//1 - arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ�����С��1���ֽ�
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4 - &arr��Ȼ������ĵ�ַ�������ǵ�ַ����ַ�Ĵ�С����4����8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4 - &arr+1���������������ĵ�ַ����ַ��С����4����8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//4 - �ڶ���Ԫ�صĵ�ַ����ַ��С����4����8���ֽ�
//	
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr+0));//���ֵ
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr+1));//���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//���ֵ
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7 - sizeof(arr)�����������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr+0));//4 - arr+0����Ԫ�ص�ַ��sizeof������ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(*arr));//1 - *arr����Ԫ�أ�sizeof���������Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[1]));//1 - arr[1]�ǵڶ���Ԫ��
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr+1));//4
//	printf("%d\n", sizeof(&arr[0]+1));//4
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	printf("%d\n", strlen(*arr));//err - *arr��һ���ַ� 'a'
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//5
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4- ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p+1));//4 - p+1 �õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//1 - *p�����ַ����ĵ�һ���ַ� 'a'
//	printf("%d\n", sizeof(p[0]));//1 - p[0]==*(p+0)=='a'
//	printf("%d\n", sizeof(&p));//4 - &p�����p�ĵ�ַ����ַ��С����4����8
//	printf("%d\n", sizeof(&p+1));//4
//	printf("%d\n", sizeof(&p[0]+1));//4 - &p[0]��a�ĵ�ַ��&p[0]+1�������b�ĵ�ַ
//
//	printf("%d\n", strlen(p));//6 - p����a�ĵ�ַ������a�ĳ���
//	printf("%d\n", strlen(p+1));//5 - ����b�ĳ���
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p+1));//���ֵ
//	printf("%d\n", strlen(&p[0]+1));//5
//
//	//��ά����
//	int a[3][4] = {0};
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 - a[0]�൱�ڵ�һ����Ϊһλ�������������sizeof(arr[0])����������������sizeof()�ڣ������һ�еĴ�С
//	printf("%d\n", sizeof(a[0]+1));//4 - a[0]��ʾ��һ�е�һ��Ԫ�صĵ�ַ������a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ����ַ��С����4����8���ֽ�
//	printf("%d\n", sizeof(*(a[0]+1)));//4 - *(a[0]+1)�ǵ�һ�еڶ���Ԫ�أ���С���ĸ��ֽ�
//	printf("%d\n", sizeof(a+1));//4 - a����Ԫ�ص�ַ������ά��ַ��Ԫ���ǵ�һ�У��Ѷ�ά���鿴��һά���飩��a���ǵ�һ�еĵ�ַ��a+1���ǵڶ��е�ַ
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(&a[0]+1));//4 - ����ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0]+1)));//16 - ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}



//ָ�������
//int main()
//{
//	int a[5] = {1, 2, 3, 4, 5};
//	int* ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ��Ƕ��٣�
////��֪�ṹ��Test���͵Ĵ�С��20���ֽ�
//
//int main()
//{
//	p = (struct Test*)0x100000; 
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	return 0;
//}