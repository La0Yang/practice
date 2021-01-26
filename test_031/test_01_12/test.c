#include<stdio.h>
#include<string.h>
#include<assert.h>




//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if(len1 != len2)
//		return 0;
//
//	//1.在str1字符串后面追加一个str1字符串
//	strncat(str1, str1, 6);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr - 找子串的函数
//	char* ret = strstr(str1, str2);
//	if(ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if(ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}




//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于O（N）；
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col-1;
//
//	while(x <= row-1 && y >= 0)
//	{
//		if(arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = {{1,2,3 },{4,5,6},{7,8,9}};
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if(ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//改进版
//int FindNum(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *py-1;
//
//	while(x <= *px-1 && y >= 0)
//	{
//		if(arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = {{1,2,3 },{4,5,6},{7,8,9}};
//	int k = 7;
//	int x = 3;
//	int y = 3;
//
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if(ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是:%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//1.计数器方法求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	assert(str != NULL);
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
//	int len = my_strlen("abcdef");
//	
//	printf("%d\n", len);
//
//	return 0;
//}


//字符串的拷贝
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含‘\0’
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//char arr2[] = {'b', 'i', 't'} // - 错误的示范
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}




//字符串的追加
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//
//	strcat(arr1, arr2);
//	
//	printf("%s\n", arr1);
//
//	return 0;
//}


//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//
//	//1.找到目的字符串的'\0'
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//
//	my_strcat(arr1, arr2);
//	
//	printf("%s\n", arr1);
//
//	return 0;
//}





//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//
//	//int ret = strcmp(p1, p2);//挨个比较每个字母的阿斯科码值，相等比较下一对
//	if(strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if(strcmp(p1, p2) == 0)
//	{
//		printf("p1 == p2\n");
//	}
//	else if(strcmp(p1, p2) < 1)
//	{
//		printf("p1<p2\n");
//	}
//	//printf("%d\n", ret);
//
//	return 0;
//}


//实现一个函数判断两个函数是否相等
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//比较
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
		{
			return 0;//相等
		}
		str1++;
		str2++;
	}
	if(*str1 > *str2)
		return 1;//大于
	else
		return -1;//小于

}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abqwe";
	int ret = my_strcmp(p1, p2);
	printf("ret = %d\n", ret);

	return 0;
}