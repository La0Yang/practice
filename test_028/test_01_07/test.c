#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1


//指针笔试题2
//int main()
//{
//	int a[4] = {1,2,3,4};
//	int* ptr1 = (int *)(&a+1);
//	int* ptr2 = (int *)((int)a+1);
//	printf("%x,%x",ptr1[-1], *ptr2);
//	return 0;
//}


//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};//逗号表达式，结果是逗号后面的数
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//p[0] = *(p+0)
//
//	return 0;
//}



//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	
//	int *ptr1 = (int*)(&aa+1);
//	int *ptr2 = (int*)(*(aa+1));
//	
//	printf("%d,%d", *(ptr1 -1), *(ptr2 - 1));//10,5
//	
//	return 0;
//}



//int main()
//{
//	char* a[] = {"work", "at", "alibaba"};
//	char**pa = a;
//
//	pa++;
//	printf("%s\n", *pa);//at
//	
//	return 0;
//}



//int main()
//{
//	char* c[]= {"ENTER","NEW","POINT","FIRST"};
//	char**cp[] = {c+3,c+2,c+1,c};
//	char***cpp = cp;
// 
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);//*cpp[-2]+3 == **(cpp+2)+3
//	printf("%s\n", cpp[-1][-1]+1);//*(cpp-1)[-1]+1 == *( *(cpp-1)-1 )+1
//
//	return 0;
//}



//作业讲解
//int main()
//{
//	unsigned long pulArray[] = {6,7,8,9,10};
//	unsigned long *pulPtr;
//
//	pulPtr = pluArray;
//	*(pulPtr+3) += 3;
//
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));//6, 12
//	return 0;
//}


//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char*left = str;
//	char*right = str + len -1;
//
//	while(left<right)
//	{
//		char tmp = *left;
//	    *left = *right;
//	    *right = tmp;
//	    left++;
//	    right--;
//	}
//}
//int main()
//{
//	char arr[256] = {0};
//	scanf("%s", arr);
//	//逆序函数
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &a);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for(i = 0; i<n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//水仙花数(自幂数)
 //int main()
 //{
	// int i =0;
	// for(i=0; i <=100000; i++)
	// {
	//	 //判断i是否为水仙花数
	//	 //1.计算i的位数   -  n位数
	//	 int n = 1;
	//	 int tmp = i;
	//	 int sum = 0;
	//	 while(tmp /= 10)
	//	 {
	//		 n++;
	//	 }
	//	 //2.计算i的每一位的n次方之和
	//	 tmp = i;
	//	 while(tmp)
	//	 {
	//		 sum += (int)pow(tmp % 10, n);
	//		 tmp /= 10;
	//	 }
	//	 //3.比较i == sum
	//	 if(i == sum)
	//	 {
	//		 printf("%d ", i);
	//	 }
	// }
	// return 0;
 //}



int main()
{
	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for(i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for(j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for(j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for(i = 0; i< line-1; i++)
	{
		int j = 0;
		//打印空格
		for(j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for(j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}