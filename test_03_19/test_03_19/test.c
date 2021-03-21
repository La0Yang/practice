#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//
//int main()
//{
//	int sum = 0;
//	int score = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);//输入班级人数
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int sum = 0;
//	int score = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);//输入班级人数
//	while(i < n)
//	{
//		scanf("%d", &score);
//		sum += score;
//		i++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//	int flag = 1;
//	double sum = 0.0;
//	while(1.0/i >= 1e-7)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//		i += 2;
//	}
//	printf("Pi的近似值是%.6lf\n", sum*4);
//}
//
//
//int main()
//{
//	int i = 0;
//	double n = 0;
//	double x = 0;
//	double z = 1.0;
//	double y = 1.0;
//	double sum = 1;
//	scanf("%lf%lf", &n, &x);
//	for(i = 1; i < n; i++)
//	{
//		y = y*i;//分母
//		z = z*x;//分子
//		//z = pow(x,i);//分子
//		sum += z/y;
//	}
//	printf("%.4lf\n%.4lf\n", sum, exp(x));
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(i = 1; i <= 9; i++)
//	{
//		for(j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	short int a = 32767;
//	a = a + 1;//-32768
//	a = a - 1;//32767
//	printf("%hd\n", a);
//	return 0;
//}
//
//int main()
//{
//	unsigned short int a = 65534;
//	a = a + 8;//6
//	printf("%hu\n", a);//最大+1变最小，最小-1变最大
//	return 0;
//}
//
//int main()
//{
//	char ch = -3;
//	char a = 97;
//	printf("%d", a);
//	printf("%c", a);
//	printf("%d\n", ch);
//	return 0;
//}
//
//
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        //打印上半部分
//		for(i = 0; i < n; i++)
//		{
//			//打印*加空格
//			for(j = 0; j < n+1-i; j++)
//			{
//			   printf("* ");
//			}
//			//打印空格
//			for(j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		//打印下半部分
//		for(i = 0; i < n+1; i++)
//		{
//			//打印*加空格
//			for(j = 0; j < i+1; j++)
//			{
//				printf("* ");
//			}
//			//打印空格
//			for(j = 0; j < n; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//    }
//    return 0;
//}
//
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < n; j++)
//            {
//                if((i == j) || (i+j == n-1))
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < n; j++)
//            {
//                if(i == j)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < n; j++)
//            {
//                if((i+j) == (n-1))
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for(j = 0; j < n-i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//假设数列已经有序
//		for(j = 0; j < sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//本趟数据不完全有序
//			}
//		}
//		if(flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = 0;
//	sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}