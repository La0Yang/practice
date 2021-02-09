#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1; a<=5; a++)
//	{
//		for(b=1; b<=5; b++)
//		{
//			for(c=1; c<=5; c++)
//			{
//				for(d=1; d<=5; d++)
//				{
//					for(e=1; e<=5; e++)
//					{
//						if (((b==2) + (a==3) == 1)&&
//							((b==2) + (e==4) == 1)&&
//							((c==1) + (d==2) == 1)&&
//							((c==5) + (d==3) == 1)&&
//							((e==4) + (a==1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	if(str1 == str2)
//		printf("str1 and str2 are same\n");//每个数组都是独立的空间存储，所以不相同
//	else
//		printf("str1 and str2 are not same\n");
//
//	if(str3 == str4)
//		printf("str3 and st4 are same\n");//常量字符串不能改变，不能改变所以首字符的地址相同，字符串存同一个空间
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}



//int* fun(int a, int b);函数声明
//int(*)fun(int a, int b);err
//int(*fun)(int a, int b);函数指针
//(int *)fun(int a, int b);函数声明


//声明一个指向含有10个元素的数组的指针，其中每个元素是一个函数指针，该函数
//的返回值是int，参数是int*，正确的是C
//A.(int *p[10])(int*); - err
//B.int[10]*p(int*); - err
//C.int(*(*p)[10])(int*);
//D.int((int*)[10])*p - err




//int main()
//{
//	int a[5] = {5,4,3,2,1};
//	int* ptr = (int*)(&a + 1);//数组地址+1，跳过整个数组
//	printf("%d,%d", *(a + 1), *(ptr - 1));//4,1
//	return 0;
//}




//int main()
//{
//	int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
//	int* ptr1 = (int*)(&aa+1);
//	int* ptr2 = (int*)(*(aa+1));//二维数组aa是首元素地址就是第一行的地址，aa+1等于第二行首元素的地址等于5的地址
//	printf("%d,%d", *(ptr1-1), *(ptr2-1));//1,6
//	return 0;
//}



//题目内容
//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//1.暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for(i = 0; i < k; i++)
//	{
//		//左旋一个字符
//		//1.取出最左边的元素
//		char tmp = *arr;
//		//2.把后面的元素往前挪一位
//		int j = 0;
//		for(j = 0; j < len-1; j++)
//		{
//			*(arr+j) = *(arr+j+1);
//		}
//		//3.把取出的元素放到最后
//		*(arr+len-1) = tmp;
//	}
//}

//2.三步翻转法
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right= tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k<=len);
//	reverse(arr, arr+k-1);//逆序左边
//	reverse(arr+k, arr+len-1);//逆序右边
//	reverse(arr, arr+len-1);//逆序整体
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}






//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k<=len);
//	reverse(arr, arr+k-1);//逆序左边
//	reverse(arr+k, arr+len-1);//逆序右边
//	reverse(arr, arr+len-1);//逆序整体
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for(i=0;i<len;i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if(ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if(ret == 1)
//		printf("Yes\n");
//	else
//	    printf("No\n");
//
//	return 0;
//}