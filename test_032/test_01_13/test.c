#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);//��������\0���Ż�ֹͣ
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
//	strncat(arr1, arr2, 3);//׷�Ӹ���>�ַ���������ֻ׷���ַ��������������һ����һ��'\0'
//
//	printf("%s\n", arr1);
//
//	return 0;
//}



//int main()
//{
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);//�Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ�ȫ���Ƚ���
//	printf("%d\n", ret);
//
//	return 0;
//
//}



//strstr - �����ַ���
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if(ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//�Լ�ʵ�ֲ��Һ���
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
//			return cur;//�ҵ��Ӵ�
//		}
//		if(*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if(ret == NULL)
//	{
//		printf("�Ӵ�������\n");
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
//	//������   ������Ϣ
//	//  0      No error
//	//  1      Operation not permitted
//	//  2      No such file or directory
//	//...
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��c���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븴�Ƶ�errno��
//	char* str = strerror(errno);
//
//	printf("%s\n", str);
//
//	return 0;
//}



