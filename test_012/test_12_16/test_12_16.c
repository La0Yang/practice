#include<stdio.h>
#include<math.h>
#include<string.h>
//int main()
//{
//	int ch = 0;
//	//EOF - end of file 文件结束标志
//	//ctrl + z 结束循环
//	while((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);
//	while((ch=getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//
//int main ()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);//输出结果：1234678910
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);//输出结果：1234 死循环....
//		i++;
//	}
//	return 0;
//}

//
//int main()
//{
//	for(//初始化;//判断;//调整)//for循环的初始化、判断、调整过程都可以省略(但不要随便省略)
//		//但是：for循环的判断部分如果被省略，那判断条件就恒为真
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for(x = 0, y = 0; x<2 && y<5; ++x, y++)
//	{
//		printf("hehe\n");//打印2次hehe
//	}
//	return 0;
//}


//以下循环要循环多少次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i =0,k=0; k=0; i++,k++)//判断部分k=0为赋值，不是判断语句，0为假-循环不进入
//		k++;
//	return 0;//所以循环0次
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if(i == 5)
//			continue;
//	    printf("%d ", i);
//	    i++;
//	}
//	while(i<=10);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++);
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1; n<=10; n++)
//	{
//	    ret = ret * n;
//	    sum = sum + ret;
//	}
//
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int k = 7;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	int mid = k;
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid );
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("登陆失败\n");
//		}
//	}
//	if(i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//	    a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for(i=1; i<100; i++)
//	{
//		if(i%3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while(r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = m;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1000; i<=2000; i++)
//	{
//		if(i%4 == 0 && i%100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if(i%400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n ", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j == i)
//			count++;
//			printf("%d ", i);
//	}
//	printf("\ncount = %d ", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=1; i<sz; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		int j = 1;
//		for(j=1; i<=i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


