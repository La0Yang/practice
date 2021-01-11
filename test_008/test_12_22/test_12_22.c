#include<stdio.h>
#include<math.h>

//
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	int left = 0;
//	int right = sz-1;
//
//    while(left<=right)
//    {
//	    int mid = (left+right)/2;//中间元素的下标
//	    if(arr[mid] < k)
//	    {
//		    left = mid+1;
//	    }
//	    else if(arr[mid] > k)
//	    {
//		    right = mid-1;
//	    }
//	    else
//	    {
//		    return mid;
//	    }
//    }
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到的返回-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, int sz);
//	if(ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}




//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//int main()
//{
//	int len = 0;
//	//1.
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2.链式调用
//	printf("%d\n", strlen("abc"));
//	return 0;
//}



//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf43的返回值是2，先打印43，再打印43的返回值：2，再打印2的返回值：1
//	//打印结果是：4321
//	return 0;
//}




//函数声明
//int Add(int x, int y);
//int mian()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}