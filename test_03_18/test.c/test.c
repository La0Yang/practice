#include<stdio.h>


//序列中整数去重
//输入：5
//输入：10 12 93 12 75
//输出：10 12 93 75
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[5000] = {0};
//	int n = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//去重
//	for(i = 0; i < n; i++)
//	{
//		for(j = i + 1; j < n; j++)
//		{
//			if(arr[i] == arr[j])
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	//输出
//	for(i = 0; i < n; i++)
//	{
//		if(arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int arr[50] = {0};
//    int i = 0;
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for(i = n-1; i >= 0; i--)
//    {
//        if(arr[i] > n)
//        {
//            arr[i+1] = arr[i];
//        }
//        if(arr[i] < n)
//        {
//            arr[i+1] = n;
//			break;
//        }
//    }
//    if(i == -1)
//    {
//        arr[0] = n;
//    }
//	for(i = 0; i < n+1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//    return 0;
//}


//int main()
//{
//	int n = 0;//饮料个数
//	int count = 0;
//	int e = 0;//空瓶子个数
//	scanf("%d", &n);
//	e = n%3 + n/3;
//	while(e>2)
//	{
//		count = count + e;
//		e = e%3 + e/3;
//	}
//	if(e == 2)
//	{
//		count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}



//某商店规定：三个空汽水瓶可以换一瓶汽水。小张手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”
//答案是5瓶，方法如下：先用9个空瓶子换3瓶汽水，喝掉3瓶满的，喝完以后4个空瓶子，用3个再换一瓶，喝掉这瓶满的，这时候剩2个空瓶子。
//然后你让老板先借给你一瓶汽水，喝掉这瓶满的，喝完以后用3个空瓶子换一瓶满的还给老板。如果小张手上有n个空汽水瓶，最多可以换多少瓶汽水喝？
//int main()
//{
//	int n = 0;//空瓶子的个数
//	int count = 0;//能喝多少瓶
//	scanf("%d", &n);
//	while(n>2)
//	{
//		count = count + n/3;
//		n = n%3+n/3;
//	}
//	if(n == 2)
//	{
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}



//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for(i = 1; i <= n; i++)
//    {
//        for(j = 1; j <= i; j++)
//        {
//            printf("* ");
//        }
//        for(j = 1; j <= i; j++)
//        {
//            printf(" ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        for(i = 1; i <= n; i++)
//        {
//            for(j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while(~scanf("%d", &n))
//    {
//        //打印上半部分
//        for(i = 0; i < n+1; i++)
//        {
//            for(j = 0; j < n-i; j++)
//            {
//                printf(" ");
//            }
//            for(j = 0; j < i+1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //打印下半部分
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < i+1; j++)
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



//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while(~scanf("%d", &n))
//    {
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < n+1-i; j++)
//            {
//                printf("* ");
//            }
//            for(j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        for(i = 0; i < n+1; i++)
//        {
//            for(j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            for(j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



