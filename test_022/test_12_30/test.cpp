#include<stdio.h>
#include<stdlib.h>



//typedef struct Stu//struct - �ṹ��ؼ��֣�Stu - �ṹ���ǩ��struct Stu - �ṹ������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//��Ų��ܶ���typedefΪ�ṹ��������ΪStu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1,s2,s3������ȫ�ֱ���
//int main()
//{
//	struct Stu s1 = {"����", 20, "15420122453", "��"};//�����ṹ����� - s�ֲ�����
//	Stu s2 = {"����"�� 30�� "12399943059"�� "Ů"};
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
//	//��Ա����
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
//	Stu s = {"����", 40, "231214123", "��"};
//	//��ӡ�ṹ������- ����ѡ��print2����
//
//	print1(s);//���ṹ��
//	print2(&s);//����ַ
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
//	*dest = *src;//������\0��
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//�Ż�1
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//����
//	while(*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//�Ż�2
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//const����
//int main()
//{
//	const int num = 10;
//	
//	const int* p = &num;
//	*p = 20;//err  const ����ָ�������*���ʱ�����ε���*p,Ҳ����˵����ͨ��p���ı�*p(num)��ֵ
//	
//	int * const p = &num;//const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����,Ҳ����˵p���ܱ��ı�
//	int n = 100;
//	p &n;
//
//	printf("%d\n", num);
//	
//	return 0;
//}
//const int * p = &num;
//*p = 0;//err
//p = &n;//��
//
//int * const p = &num;
//*p = 0;//��
//p = &n;//err



//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
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
	int a = 20;//4���ֽ�- 32bit
	//00000000000000000000000000010100 - ԭ��
	//00000000000000000000000000010100 - ����
	//00000000000000000000000000010100 - ����
	//����ԭ������ͬ
	int b = -10;
	//10000000000000000000000000001010 - ԭ��
	//11111111111111111111111111110101 - ����
	//11111111111111111111111111110110 - ����
	//�������λΪ����λ��ԭ�������λ����λ��λȡ���õ����룬����+1�õ�����


	//�������ڴ��д�ŵ��Ƕ����Ʋ���
	return 0;
}
