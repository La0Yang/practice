#include "test.h"
#include<stdio.h>
#include<math.h>




//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if(*p == 1)
//	{
//		printf("小端\n");
//	}
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int check_sys()//优化
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，大端
//	//返回0，小端
//	int ret = check_sys();
//	if(ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d, b=%d, c=%d", a, b, c);//-1,-1,255
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000 - 原码
//	//11111111111111111111111101111111 - 反码
//	//11111111111111111111111110000000 - 补码
//	//10000000 - a 
//	
//	printf("%u\n", a);
//
//	//%d - 打印十进制有符号数字
//	//%u - 打印十进制无符号数字
//	
//	return 0;
//}



//int main()
//{
//	unsigned int i;
//	for(i=9; i>=0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}


//unsigned char i =0;//0-255
//int main()
//{
//	for(i=0; i<=255; i++)
//	{
//		printf("hello\n");//255+1=0
//	}
//	return 0;
//}




