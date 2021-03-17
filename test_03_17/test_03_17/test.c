#include<stdio.h>

//int main()
//{
//    unsigned int n = 0;
//    scanf("%d", &n);
//    while(n)
//    {
//		if(n%100 == 0)
//		{
//			printf("%d", n%100);
//			break;
//		}
//        if(n > 9)
//        {
//            if(n%10 != 0)
//            {
//                printf("%d", n%10);
//                n = n / 10;
//            }
//            else
//            {
//				printf("%d", n%10);
//				n = n / 10;	
//            }
//        }
//        else
//        {
//            printf("%d", n);
//			break;
//        }
//    }
//    return 0;
//}

//int main()
//{
//    unsigned int n = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    scanf("%d", &n);
//    i = n % 10;//个位
//    j = n / 10 % 10;//十位
//    k = n / 100;//百位
//    printf("%d", i*100 + j*10 + k);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if(n > 60)
//    {
//        printf("Speed: %d - Speeding", n);
//    }
//    else
//    {
//        printf("Speed: %d - OK", n);
//    }
//    return 0;
//}



//int main()
//{
//    int m = 0;
//    int n = 0;
//    char c = 0;
//    scanf("%d %c %d", &m, &c, &n);
//    if(c == '+')
//    {
//        printf("%d", m+n);
//    }
//    else if(c == '-')
//    {
//        printf("%d", m-n);
//    }
//    else if(c == '*')
//    {
//        printf("%d", m*n);
//    }
//    else if(c == '/')
//    {
//        printf("%d", m/n);
//    }
//    else if(c == '%')
//    {
//        printf("%d", m%n);
//    }
//    else
//    {
//        printf("ERROR");
//    }
//    return 0;
//}



//int main()
//{
//    int i = 0;
//    int j = 0;
//    int N = 0;
//    int ret = 0;
//    scanf("%d", &N);
//    for(i = 1; i <= N; i++)
//    {
//        for(j = 1; j <= i; j++)
//        {
//            ret = i*j;
//            printf("%d*%d=%-4d", j, i, ret);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//int main()
//{
//    int year = 0;
//    int hour = 0;
//    float money = 0.0;
//    scanf("%d %d", &year, &hour);
//    if(year >= 5)
//    {
//        if(hour < 40)
//        {
//            money = 50.0*hour;
//        }
//        else
//        {
//            money = (50*1.5)*(hour-40);
//        }
//    }
//    else
//    {
//        if(hour < 40)
//        {
//            money = 30.0*hour;
//        }
//        else
//        {
//            money = (30*1.5)*(hour-40);
//        }
//    }
//    printf("%.2f", money);
//    return 0;
//}


//int main()
//{
//    int x = 0;
//    int y = 0;
//    float money = 0.0;
//    scanf("%d", &x);
//    if(x <= 15)
//    {
//        money = (4*x) / 3;
//    }
//    else
//    {
//        money = 2.5*x - 17.5;
//    }
//    printf("%.2f", money);
//    return 0;
//}


//int main()
//{
//    double x = 0.0;
//    double y = 0.0;
//    scanf("%lf", &x);
//    if(x <= 15)
//    {
//        y = (4*x) / 3;
//    }
//    else
//    {
//        y = 2.5*x - 17.5;
//    }
//    printf("%.2lf\n", y);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int i = 0;
//    int m = 0;//要插入的数字
//    int arr[50] = {0};
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //插入
//    scanf("%d", &m);
//    for(i = n-1; i >= 0; i--)
//    {
//        if(arr[i] > m)
//        {
//            arr[i+1] = arr[i];
//        }
//        else
//        {
//            arr[i+1] = m;
//            break;
//        }
//    }
//	if(-1 == i)
//	{
//		arr[0] = m;
//	}
//    //打印
//    for(i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}