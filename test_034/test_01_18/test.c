#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stddef.h>


//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = {'c', 100, 3.14, "hello world"};//�ṹ��ĳ�ʼ��
//	struct S s = {'c', {55.6, 30}, 100, 3.14, "hello world"};//�ṹ�������ýṹ��
//	
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//
//	return 0;
//}



//�ṹ���ڴ���� - �ÿռ�����ȡʱ�������
//struct S1 
//{
//	char c1;//1�ֽ�
//	int a;//4�ֽ�
//	char c2;
//};
//struct S2 
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3 
//{
//	double d;//8�ֽ�
//	char c;
//	int i;
//};
//struct S4 
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = {0};
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = {0};
//	printf("%d\n", sizeof(s2));//8
//	struct S3 s3 = {0};
//	printf("%d\n", sizeof(s3));//16
//	printf("%d\n", sizeof(s4));//32
//
//	return 0;
//}




//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}



//offsetof() - ��Ա����ڽṹ����ʼλ�õ�ƫ��ֵ
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, i));//4
//	printf("%d\n", offsetof(struct S, d));//8
//
//	return 0;
//}



//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);//�ṹ�崫����ѡ����ַ 
//
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;*/
//
//	return 0;
//}




//λ�� - �����ƶ� - λ�ε�Ŀ�ľ��ǽ�ʡ�ռ�
//struct S
//{
//	int a : 2;//2����λ
//	int b : 5;//5����λ
//	int c : 10;//10����λ
//	int d : 30;//30����λ
//};
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = {0};
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


//------------------------------


//ö��(����)

//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ö�ٳ���
//	MALE = 2,//�����ĳ�ʼ��
//	FEMALE,
//	SECRET = 8,
//};
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE,//2
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = RED;
//	enum Color c = 2;//int
//	MALE = 0;//err
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//}


//ö�ٴ�С�ļ���
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));//4
//
//	return 0;
//}


//���� - ������ - ������
//���壺����Ҳ��һ��������Զ������ͣ��������Ͷ���ı���Ҳ����һϵ�г�Ա
//      ��������Щ��Ա����ͬһ��ռ䣨��������Ҳ�й����壩

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}


//����1
//int check_sys()
//{
//	int a = 1;
//	//����1��ʾС��
//	//����0��ʾ���
//	return *(char*)&a;
//}
//����2
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1��ʾС��
//	//����0��ʾ���
//	return u.c;
//}
//int main()
//{
//	//int a = 0x11223344;
//	//�͵�ַ------------------------>�ߵ�ַ
//	//...[][][][][][][11][22][33][44][][][][][][][][]...  ����ֽ���洢ģʽ
//	//...[][][][][][][44][33][22][11][][][][][][][][]...  С���ֽ���洢ģʽ
//	//����һ�����ݣ�������ڴ��е�
//	int a = 1;
//	int ret = check_sys();
//
//	if(1 == ret)//*(char*)&a - ����1
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

