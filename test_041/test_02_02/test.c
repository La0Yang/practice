#include<stdio.h>



//Ԥ�������
//int main()
//{
//	/*printf("%s\n", __FILE__);
//	printf("%s\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);*/
//
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = {0};
//	FILE* pf = fopen("log.txt", "w");
//	for(i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file: %s line:%d date:%s time:%s i=%d",
//			__FILE__, __LINE__, __DATE__, __TIME__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//#define MAX 100//����󲻼�'��'
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//
//	return 0;
//}



//#define SQUARE(X) X*X
//int main()
//{
//	/*int ret = SQUARE(5);
//	printf("%d\n", ret);//25*/
//
//	int ret = SQUARE(5 + 1);
//	printf("%d\n", ret);//11
//
//	return 0;
//}
//#define SQUARE(X) (X)*(X)
//int main()
//{
//	int ret = SQUARE(5 + 1);//���������Ĳ����Ǳ��ʽ��Ϊ�˽����ȷ����������������
//	printf("%d\n", ret);//25
//
//	return 0;
//}




//#define DOUBLE(X) X+X
//#define DOUBLE(X) ((X)+(X))//���ڶ���ֵ���ʽ������ְ�ĺ궨�嶼Ӧ�ü�������
//                           //������ʹ�ú�ʱ���ڲ���ֵ�����������ȼ���ͬ���µĽ������
//int main()
//{
//	int a = 5;
//	int ret = 10*DOUBLE(a);
//	//int ret = 10* a+a;
//	//int ret = 10* ((a)+(a))
//
//	return 0;
//}




//void print(int a)
//{
//	printf("the vaule of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);
//
//	return 0;
//}

//#define PRINT(X) printf("the vaule of "#X" is %d\n", X)// #X == "a"
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	PRINT(a);
//	//printf("the vaule of ""a"" is %d\n", a);
//	PRINT(b);
//	//printf("the vaule of ""b"" is %d\n", b);
//	return 0;
//}


//#define CAT(X, Y) X##Y
//int main()
//{
//	int Class99 = 2021;
//	printf("%d\n", CAT(Class, 99));
//	//1.peintf("%d\n", Class##99);
//	//2.peintf("%d\n", Class99);
//
//	return 0;
//}


//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}



//���� - 1
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
////�� - 2
//#define MAX(X, Y) ((X > Y) ? (X) : (Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//
//	//�����ڵ��õ�ʱ����к������úͷ��صĿ���
//	float max = Max2(c,d);
//	printf("max = %d\n", max);
//	
//	//Ԥ����׶ξ�����滻��û�к����ĵ��úͷ��صĿ���
//	max = Max(c, d);
//	//max = ((c) > (d) ? (c) : (d));
//	printf("max = %d\n", max);
//
//	return 0;
//}



//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n", ret);//4
//
//	return 0;
//}


//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));
//
//	int*p = MALLOC(10, int);
//	int*p = (int*)malloc(10*sizeof(int));
//	return 0;
//}	


//#define MAX 100
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX
//	printf("MAX = %d\n", MAX);
//
//	return 0;
//}