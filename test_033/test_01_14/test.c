#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>

//int main()
//{
//	//char ch = 'w';
//	//int ret = islower(ch);//�ж��Ƿ�ΪСд��ĸ�ĺ���
//	//printf("%d\n", ret);
//	//char ch = tolower('q');//
//	//char ch = toupper('q');//��Сдת������ 
//	//putchar(ch);
//
//	return 0;
//}



//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while(arr[i])
//	{
//		if(isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}



//�ڴ溯��
//memcpy - �ڴ濽��
//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[5] = {0};
//	struct S arr3[] = {{"����", 20},{"����", 30}};
//	struct S arr4[3] = {0};
//	my_memcpy(arr4, arr3, sizeof(arr3));//ģ��ʵ�ֿ�������
//	//memcpy(arr4, arr3, sizeof(arr3));//�ṹ�忽��
//	//memcpy(arr2, arr1, sizeof(arr1));//���鿽��
//
//	return 0;
//}
//c���Թ涨��memcpyֻ��Ҫ�����ص����ڴ濽���� memmove�����ص��ڴ�Ŀ���
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if(dest<src)
//	{
//		//��ǰ->����п���
//		while(num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ�->ǰ���п���
//		while(num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//
//	my_memmove(arr+2, arr, 20);
//	//memmove(arr+2, arr, 20);//�����ڴ��ص�ʱ��Ų������
//
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {1,2,5,4,3};
//
//	int ret = memcmp(arr1, arr2, 8);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//memset - �ڴ�����
//int main()
//{
//	char arr[10] = "";
//	memset(arr, '$', 10);
//	printf("%s ", arr);
//
//	return 0;
//}



//����һ���ṹ������
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//��Ų��ܶ���- Ҳ��ȫ�ֱ���
//struct Stu s3;//ȫ�ֽṹ�����
//
//int main()
//{
//
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}



//�ṹ���������
//struct Node
//{
//	int date;//4
//	struct Node* next;
//};
//int main()
//{
//
//	return 0;
//}