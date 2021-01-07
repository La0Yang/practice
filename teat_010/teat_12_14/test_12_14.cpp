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


//结构体
//创建一个结构体类型
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//
//int main()
//{
//	//利用结构体类型 - 创建一个该类型的结构体变量
//	struct Book b1 = {"C语言程序设计", 55};
//	struct Book* pb = &b1;
//	//利用pb（指针）打印书名和价格
//	// '.' - 结构体变量.成员
//	// '->’ -  结构体指针->成员
// 	printf("书名:%s\n", pb->name);
//	printf("价格:%d元\n", pb->price);
//	/*printf("书名:%s\n", b1.name);
//	printf("价格:%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格:%d元\n", b1.price);*/
//	return 0;
//}

//int main()
//{
//	int age = 100;
//	if(age<18)
//		printf("未成年\n");
//	else if(age>=18 && age<28)
//		printf("青年\n");
//	else if(age>=28 && age<50)
//		printf("壮年\n");
//	else if(age>=50 && age<90)
//		printf("老年\n");
//	else
//		printf("寿星\n");
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
//	printf("\n个数=%d\n", count);
//	return 0;
//}