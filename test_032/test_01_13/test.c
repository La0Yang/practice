#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);//拷贝到‘\0’才会停止
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 6);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);//追加个数>字符串个数，只追加字符串个数，在最后一定补一个'\0'
//
//	printf("%s\n", arr1);
//
//	return 0;
//}



//int main()
//{
//	//strncmp - 字符串比较
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完
//	printf("%d\n", ret);
//
//	return 0;
//
//}



//strstr - 查找字符串
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if(ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//自己实现查找函数
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	
//	if(*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while(*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while(*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		if(*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if(ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}




//int main()
//{
//	char arr[] = "wwwyy@lllmmm.com";
//	char* p = "@.";
//
//	char buf[1024] = {0};
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//
//	for(ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}




//int main()
//{
//	//错误码   错误信息
//	//  0      No error
//	//  1      Operation not permitted
//	//  2      No such file or directory
//	//...
//	//errno是一个全局的错误码的变量
//	//当c语言的库函数在执行过程中发生了错误，就会把对应的错误码复制到errno中
//	char* str = strerror(errno);
//
//	printf("%s\n", str);
//
//	return 0;
//}



