#include<math.h>
#include<stdio.h>

//int main()//���������ƣ�λ�� - &
//{
//	//������Ϊ0��ͬ1��Ϊ1
//	int a = 3;
//	int b =5;
//	int c = a&b;
//	//00000000000000000000000000000011 - a
//	//00000000000000000000000000000101 - b
//	//00000000000000000000000000000001 - c
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()//���������ƣ�λ�� - |
//{
//	//��1��Ϊ1 ��ͬ0��Ϊ0
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	//00000000000000000000000000000011 - a
//	//00000000000000000000000000000101 - b
//	//00000000000000000000000000000001 - c
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()//���������ƣ�λ���
//{
//	//��ͬ��Ϊ0������Ϊ1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}


//
//int main()//��ʹ�õ���������������������
//{
//	//�Ӽ��� - ȱ����ܻ����
//	int a = 3;//a = 011
//	int b = 5;//b = 101
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//���
//	a = a^b;// a^b=6=a - 110
//	b = a^b;//a^b=3=b - 011
//	a = a^b;//a^b=5=a - 101
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", num);
//	//ͳ��num�Ĳ������м���1
//	//while(num)
//	//{
//	//	if(num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//	int i = 0;
//	for(i = 0; i < 32; i++)
//	{
//		if(1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int mian()
//{
//	//��ֵ������
//	int a = 10;
//	a = a + 2;
//	a += 2;//���ϸ�ֵ��
//
//	a = a >> 1;
//	a >>= 1;
//
//	a = a&1;
//	a &= 1;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a// & - ȡ��ַ������
//	*p = 20;// * - �����ò�����
//
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	char b = 'r';
//	char* p = &c;
//	int arr[10] = {0};
//	//sizeof - ���������ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof((a)));//4
//	printf("%d\n", sizeof(int));//4
//
//
//	printf("%d\n", sizeof((b)));//1
//	printf("%d\n", sizeof(char));//1
//
//
//	printf("%d\n", sizeof((p)));//4
//	printf("%d\n", sizeof(char*));//4
//
//
//	printf("%d\n", sizeof((arr)));//40
//	printf("%d\n", sizeof(int [10]));//40
//
//
//	return 0;
//}



//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);//0
//	return 0;
//}



//int main()
//{
//	//~ - ����2���ƣ�λȡ��
//	int a = 0;
//	printf("%d\n", ~a);//-1
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	//���յ��β�arr[]��ָ����ܽ��մ���
//	printf("%d\n", sizeof(arr));//4�ֽ�  ��ʱarr��ָ��Ĵ�С
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4�ֽ�
//}
//int main()
//{
//	//���鴫��ʱ����ȥ����������Ԫ�صĵ�ַ
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40�ֽ�
//	printf("%d\n", sizeof(ch));//10�ֽ�
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//a = 1, b = 2, c = 3, d = 4  &&���Ϊ�٣��ұ߲�����
//
//	//i = a++ || ++b || d++;a = 2, b = 2, c = 3, d = 4   ||���Ϊ�棬�ұ߲�����
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//
//	if(a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//
//	if(a > 5)
//		b = 3;
//	else
//		b = -3
//
//	b = (a > 5 ? 3 : -3);//��Ŀ������
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };//��������
//	arr[9] = 10;//�±����ò�����
//	return 0;
//}




//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú�����ʱ��()���Ǻ������ò�����
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}



//struct Stu//����һ���ṹ������
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = {"����", 20, "20190123"};//ʹ��struct Stu���ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->age);
//	//�ṹ��ָ��->��Ա��
//	//printf("%s\n", (*ps).name);
//	//printf("%s\n", (*ps).age);
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ�����+��.��+��Ա��
//	return 0;
//}



//int main()
//{
//    char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}



//int main()
//{
//  ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С
//  int*p;  *p�ܹ�����4���ֽ�
//  char*p;  *p�ܹ�����1���ֽ�
//  double*p;  *p�ܹ�����8���ֽ�
//	int a = 10;
//	int* p = &a;//p����ָ����� - ��ŵ�ַ�ı���
//	return 0;
//}



