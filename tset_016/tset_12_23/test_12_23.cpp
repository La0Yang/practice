#include<stdio.h>
#include<math.h>
#include<string.h>


////输入1234  输出1 2 3 4
//void print(int n)
//{
//	if(n>9)
//	{	
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//用递归实现
//	print(num);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	//计算字符串的长度
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d", len);
//	
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，传参传过去的不是整个数组，而是首元素的地址
//	printf("len = %d\n", len);
//	
//	return 0;
//}


//int Fac1(int n)//循环的方式
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)//递归
//{
//	if(n<=1)
//	    return 1;
//	else
//		return n*Fac2(n-1);
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//循环的方式
//	printf("%d\n", ret);
//
//	return 0;
//}


//求第n个斐波那契数
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}




//int main()
//{
//	//创建一个数组 - 存放整形10个
//	int arr[10] = {1,2,3};//不完全初始化，剩下的元素默认为0
//    char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof - 计算 arr4所占空间的大小
//	//7个元素 - char 7*1 = 7
//
//	printf("%d\n", strlen(arr4));
//	//strlen 求字符串的长度 - '\0'之前的字符个数
//	//[a b c d e f \0]
//	
//
//	return 0;
//}



