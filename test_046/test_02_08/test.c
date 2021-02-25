#include<stdio.h>



//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = (char*)&a;
//	*pc = 0;
//	/*printf("%p\n", pa);
//	printf("%p\n", pc);*/
//
//	return 0;
//}
//指针类型决定了指针进行解引用操作时，能够访问空间的大小
//int*p; *p可以访问4个字节
//char*p; *p可以访问1个字节
//double*p; *p可以访问8个字节



//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}
//指针类型决定了指针向前或向后走一步有多大距离


//--------------野指针成因---------------
//1.指针越界访问
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<12; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*p++ = i;
//	}
//	return 0;
//}


//2.指针未初始化
//int main()
//{
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//
//	return 0;
//}


//3.指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//指针指向的空间被释放
//
//	return 0;
//}



//---------指针的运算------------
//1.指针相加
//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;
//	for(i = 0; i<sz; i++)
//	{
//		printf("%d ", *p);
//		p = p+1;
//	}
//	return 0;
//}



//2.指针相减
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	//指针相减得到的是中间元素的个数
//	return 0;
//}


//指针相减实现求字符串长度的函数
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//arr是首元素地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}
//1.&arr - &数组名 - 取出的是整个数组的地址
//2.sizeof(arr) - sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算整个数组的大小


//int main()
//{
//	int arr[10] = {0};
//	int * p = arr;
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}for(i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for(i = 0; i < 10; i++)
//	{
//		printf("%p  =======  %p\n", p+i, &arr[i]);
//	}*/
//	return 0;
//}