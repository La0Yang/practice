#include<stdio.h>
#include<string.h>


//int main()
//{
//	//数组名是首元素的地址
//	//例外情况：
//	//1.sizeof（数组名） - 数组名表示整个数组
//	//2.&数组名 - 数组名表示整个数组
//	//一维数组
//	int a[] = {1, 2, 3, 4};//4*4=16
//	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节-16
//	printf("%d\n", sizeof(a + 0));//4 - 数组名表示首元素地址，a+0还是首元素地址 - 地址的大小就是4或者8个字节
//	printf("%d\n", sizeof(*a));//4 - 数组名表示首元素地址，*a就是首元素
//	printf("%d\n", sizeof(a + 1));//4 - 数组名表示首元素的地址，a+1是第二个元素的地址，地址的大小就是4或者8
//	printf("%d\n", sizeof(a[1]));//4 - 第二个元素的大小
//	printf("%d\n", sizeof(&a));//4 - &a取出的是数组的地址，数组的地址也是地址，地址的大小就是5或者8个字节
//	printf("%d\n", sizeof(*&a));//16 - &a是数组的地址，数组的地址解引用访问的是整个数组，sizeof计算的就是数组的大小，单位是字节
//	printf("%d\n", sizeof(&a + 1));//4 - &a是数组的地址，&a+1跳过整个数组但还是地址，所以大小是4或者8个字节
//	printf("%d\n", sizeof(&a[0]));//4 - 第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4 &a[0]+1 是第二个元素的地址
//	
//	//字符数组
//	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%d\n", sizeof(arr));//6 - sizeof计算的是数组的大小，6*1=6字节 
//	printf("%d\n", sizeof(arr + 0));//4 - arr是首元素的地址，arr+0还是首元素的地址，地址的大小就是4或者8个字节
//	printf("%d\n", sizeof(*arr));//1 - arr是首元素的地址，*arr就是首元素，首元素是字符，大小是1个字节
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4 - &arr虽然是数组的地址，但还是地址，地址的大小就是4或者8个字节
//	printf("%d\n", sizeof(&arr + 1));//4 - &arr+1是跳过整个数组后的地址，地址大小就是4或者8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//4 - 第二个元素的地址，地址大小就是4或者8个字节
//	
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr+0));//随机值
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr+1));//随机值
//	printf("%d\n", strlen(&arr[0]+1));//随机值
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7 - sizeof(arr)计算的是数组的大小，单位是字节
//	printf("%d\n", sizeof(arr+0));//4 - arr+0是首元素地址，sizeof计算的是地址的大小
//	printf("%d\n", sizeof(*arr));//1 - *arr是首元素，sizeof计算的是首元素的大小
//	printf("%d\n", sizeof(arr[1]));//1 - arr[1]是第二个元素
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr+1));//4
//	printf("%d\n", sizeof(&arr[0]+1));//4
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	printf("%d\n", strlen(*arr));//err - *arr是一个字符 'a'
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//随机值
//	printf("%d\n", strlen(&arr[0]+1));//5
//
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4- 计算指针变量p的大小
//	printf("%d\n", sizeof(p+1));//4 - p+1 得到的是字符b的地址
//	printf("%d\n", sizeof(*p));//1 - *p就是字符串的第一个字符 'a'
//	printf("%d\n", sizeof(p[0]));//1 - p[0]==*(p+0)=='a'
//	printf("%d\n", sizeof(&p));//4 - &p计算的p的地址，地址大小就是4或者8
//	printf("%d\n", sizeof(&p+1));//4
//	printf("%d\n", sizeof(&p[0]+1));//4 - &p[0]是a的地址，&p[0]+1计算的是b的地址
//
//	printf("%d\n", strlen(p));//6 - p里存的a的地址，计算a的长度
//	printf("%d\n", strlen(p+1));//5 - 计算b的长度
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p+1));//随机值
//	printf("%d\n", strlen(&p[0]+1));//5
//
//	//二维数组
//	int a[3][4] = {0};
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 - a[0]相当于第一行作为一位数组的数组名，sizeof(arr[0])把数组名单独放在sizeof()内，计算第一行的大小
//	printf("%d\n", sizeof(a[0]+1));//4 - a[0]表示第一行第一个元素的地址，所以a[0]+1就是第一行第二个元素的地址，地址大小就是4或者8个字节
//	printf("%d\n", sizeof(*(a[0]+1)));//4 - *(a[0]+1)是第一行第二个元素，大小是四个字节
//	printf("%d\n", sizeof(a+1));//4 - a是首元素地址，而二维地址首元素是第一行（把二维数组看成一维数组），a就是第一行的地址，a+1就是第二行地址
//	printf("%d\n", sizeof(*(a+1)));//16
//	printf("%d\n", sizeof(&a[0]+1));//4 - 计算第二行的地址
//	printf("%d\n", sizeof(*(&a[0]+1)));//16 - 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//
//	return 0;
//}



//指针笔试题
//int main()
//{
//	int a[5] = {1, 2, 3, 4, 5};
//	int* ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
////假设p的值为0x100000，如下表达式的值分别是多少？
////已知结构体Test类型的大小是20个字节
//
//int main()
//{
//	p = (struct Test*)0x100000; 
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	return 0;
//}