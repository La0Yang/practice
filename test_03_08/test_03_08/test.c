#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

//数字三角形
//int main()
//{
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        int i = 0;
//        for(i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for(j = 1; j <= i; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//公务员面试
//int main()
//{
//    int s = 0;
//    int i = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    
//    for(i = 0; i < 7; i++)
//    {
//        scanf("%d", &s);
//        sum += s;
//        if(s > max)
//        {
//            max = s;
//        }
//        if(s < min)
//        {
//            min = s;
//        }
//    }
//        printf("%.2f\n",(sum-max-min)/5.0);
//    return 0;
//}



//有序序列插入一个数
//int main()
//{
//    int n = 0;
//    int arr[50] = {0};
//    int m = 0;//要插入的数字
//    
//    scanf("%d", &n);
//    int i = 0;
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    //插入
//    for(i = n-1; i >= 0; i--)
//    {
//        if(arr[i] > m)
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//    }
//    if(i == -1)
//    {
//        arr[0] = m;
//    }
//    //输出
//    for(i = 0; i < n+1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//筛选法求素数 - 方法一（筛选法）
//int main()
//{
//    int n = 0;
//    int arr[101] = {0};
//    
//    while(~scanf("%d", &n))
//    {
//        int i = 0;
//        for(i = 0; i <= n; i++)
//        {
//            arr[i] = i;
//        }
//        //筛选
//        for(i = 2; i <= n; i++)
//        {
//            int j = 0;
//            for(j = i+1; j <= n; j++)
//            {
//                if(arr[j]%i == 0)
//                {
//                    arr[j] = 0;
//                }
//            }
//        }
//        //统计
//            int count = 0;
//            for(i = 2; i <= n; i++)
//            {
//                if(arr[i] == 0)
//                    count++;
//                else
//                {
//                    printf("%d ", arr[i]);
//                }
//            }
//            printf("\n%d\n", count);
//    }
//    return 0;
//}



//筛选法求素数 - 方法二(试除法)
//素数是只能被1和他本身整除的数
//拿2 -> i-1 试除i
//如果整除了，i就不是素数
//如果2 -> i-1 之间的数都不能整除i，i就是素数

//int is_prime(int i)
//{
//	int j = 0;
//	for(j = 2; j <= sqrt(i); j++)
//	{
//		if(i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	//打印n内的所有素数
//	//i -> n 之间的数子是素数就打印
//	int i = 0;
//	for(i = 3; i <= n; i+=2)
//	{
//		//判断i是否为素数
//		if(is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//int main()
//{
//    int m = 0;
//    int n = 0;
//    int count = 0;
//    int i = 0;
//    int arr1[100][100] = {0};
//    int arr2[100][100] = {0};
//    scanf("%d %d", &m, &n);
//    //读取第一个矩阵的数据
//    for(i = 0; i < m; i++)
//    {
//        int j = 0;
//        for(j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //读取第二个矩阵的数据
//    for(i = 0; i < m; i++)
//    {
//        int j = 0;
//        for(j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //求相似度
//    for(i = 0; i < m; i++)
//    {
//        int j = 0;
//        for(j = 0; j < n; j++)
//        {
//            if(arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    printf("%.2lf\n", count*100.0/(m*n));
//    return 0;
//}



//登录验证
//int main()
//{
//    char name[20] = {0};
//    char password[20] = {0};
//    while(~scanf("%s %s", &name, &password))
//    {
//        if((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
//        {
//            printf("Login Success!\n");
//        }
//        else
//        {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}



//包含9的数字
//int main()
//{
//    int count = 0;
//    int i = 0;
//    for(i = 1; i <= 2019; i++)
//    {
//        //判断i是否包含9
//        int n = i;
//        while(n)
//        {
//            if(n%10 == 9)
//            {
//                count++;
//                break;
//            }
//            n /= 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}




//奇偶数的统计
//int main()
//{
//    int n = 0;
//    int Odd = 0;//奇数的个数
//    int even = 0;//偶数的个数
//    scanf("%d", &n);
//    int i = 0;
//    for(i = 1; i <= n; i++)
//    {
//        if(i%2 == 0)
//        {
//            even++;
//        }
//        else
//        {
//            Odd++;
//        }
//    }
//    printf("%d %d", Odd, even);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if(n%2 == 0)
//    {
//        printf("%d %d\n", n/2, n/2);
//    }
//    else
//    {
//        printf("%d %d\n", (n/2)+1, n/2);
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int i = 0;
//    int Odd = 0;//奇数的个数
//    int even = 0;//偶数的个数
//    scanf("%d", &n);
//    for(i = 1; i <= n; i++)
//    {
//        if(i%2 == 1)
//        {
//            Odd++;
//        }
//    }
//    printf("%d %d", Odd, n-Odd);
//    return 0;
//}




