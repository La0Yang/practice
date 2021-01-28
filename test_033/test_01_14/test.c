#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>

//int main()
//{
//	//char ch = 'w';
//	//int ret = islower(ch);//判断是否为小写字母的函数
//	//printf("%d\n", ret);
//	//char ch = tolower('q');//
//	//char ch = toupper('q');//大小写转换函数 
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



//内存函数
//memcpy - 内存拷贝
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
//	struct S arr3[] = {{"张三", 20},{"李四", 30}};
//	struct S arr4[3] = {0};
//	my_memcpy(arr4, arr3, sizeof(arr3));//模拟实现拷贝函数
//	//memcpy(arr4, arr3, sizeof(arr3));//结构体拷贝
//	//memcpy(arr2, arr1, sizeof(arr1));//数组拷贝
//
//	return 0;
//}
//c语言规定：memcpy只需要处理不重叠的内存拷贝， memmove处理重叠内存的拷贝
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if(dest<src)
//	{
//		//从前->后进行拷贝
//		while(num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后->前进行拷贝
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
//	//memmove(arr+2, arr, 20);//数据内存重叠时的挪动函数
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


//memset - 内存设置
//int main()
//{
//	char arr[10] = "";
//	memset(arr, '$', 10);
//	printf("%s ", arr);
//
//	return 0;
//}



//声明一个结构体类型
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//封号不能丢！- 也是全局变量
//struct Stu s3;//全局结构体变量
//
//int main()
//{
//
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}



//结构体的自引用
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