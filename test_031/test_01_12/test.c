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
//	//1.��str1�ַ�������׷��һ��str1�ַ���
//	strncat(str1, str1, 6);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr - ���Ӵ��ĺ���
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




//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O��N����
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
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//�Ľ���
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
//	//�����Ͳ���
//	int ret = FindNum(arr, k, &x, &y);
//	if(ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���:%d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//1.�������������ַ�������
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


//�ַ����Ŀ���
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//char arr2[] = {'b', 'i', 't'} // - �����ʾ��
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}




//�ַ�����׷��
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
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
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
//	//int ret = strcmp(p1, p2);//�����Ƚ�ÿ����ĸ�İ�˹����ֵ����ȱȽ���һ��
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


//ʵ��һ�������ж����������Ƿ����
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//�Ƚ�
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
		{
			return 0;//���
		}
		str1++;
		str2++;
	}
	if(*str1 > *str2)
		return 1;//����
	else
		return -1;//С��

}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abqwe";
	int ret = my_strcmp(p1, p2);
	printf("ret = %d\n", ret);

	return 0;
}