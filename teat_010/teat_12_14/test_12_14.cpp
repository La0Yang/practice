#include<stdio.h>
#include<math.h>
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0 ;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	return 0;
//}


//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	return 0;
//}


//�ṹ��
//����һ���ṹ������
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};
//
//int main()
//{
//	//���ýṹ������ - ����һ�������͵Ľṹ�����
//	struct Book b1 = {"C���Գ������", 55};
//	struct Book* pb = &b1;
//	//����pb��ָ�룩��ӡ�����ͼ۸�
//	// '.' - �ṹ�����.��Ա
//	// '->�� -  �ṹ��ָ��->��Ա
// 	printf("����:%s\n", pb->name);
//	printf("�۸�:%dԪ\n", pb->price);
//	/*printf("����:%s\n", b1.name);
//	printf("�۸�:%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);*/
//	return 0;
//}

//int main()
//{
//	int age = 100;
//	if(age<18)
//		printf("δ����\n");
//	else if(age>=18 && age<28)
//		printf("����\n");
//	else if(age>=28 && age<50)
//		printf("׳��\n");
//	else if(age>=50 && age<90)
//		printf("����\n");
//	else
//		printf("����\n");
//		return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	return 0;
//}
//
//int main()
//{
//	int num = 1;
//	if(5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int count = 0;
//	while(i<=100)
//	{
//		if(i%2 != 0)
//			printf("%d ", i);
//		i++;
//	}
//	count++;
//	printf("\n����=%d\n", count);
//	return 0;
//}