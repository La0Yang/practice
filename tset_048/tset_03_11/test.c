#include<stdio.h>
#include<string.h>
#include<ctype.h>
//6、输入5个数，求和并输出。要求编写求和的函数。
//int Add()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for(i = 1; i <= 5; i++)
//	{
//		scanf("%d", &n);
//		sum += n;
//	}
//	printf("5个数的和为%d\n", sum);
//	return sum;
//}
//int main()
//{
//	Add();
//	return 0;
//}


//8、编写程序，将用户输入的字符串中所有的字符a用*代替，然后输出。
//int main()
//{
//	int i = 0;
//	char a[50] = {0};//创建数组存放用户输入的字符串
//	gets(a);//用户输入字符串
//	for(i = 0; i < 50; i++)//从0下标开始循环判断字符串的每一位字符
//	{
//		if(a[i] == 'a')//用下标判断是否包含'a'
//		{
//			a[i] = '*';//包含就用'*'替换
//		}
//		printf("%c", a[i]);//
//	}
//	printf("\n");
//	return 0;
//}



//25、编写程序，判断从键盘输入的字符中数字字符的个数、大写字母的个数、小写字母的个数及其它字符的个数，以*作为字符输入结束标志。
//int main()
//{
//	int len = 0;
//	int count1 = 0;//数字字符的个数
//	int count2 = 0;//大写字母的个数
//	int count3 = 0;//小写字母的个数
//	int count4 = 0;//其他字符的个数
//	int i = 0;
//	char a[1000] = {0};//存放字符串
//	gets(a);
//	len = strlen(a);//计算字符串长度
//	for(i = 0; i < len; i++)//从0开始循环，以字符串长度为终点
//	{
//		if(a[i] == '*')
//		{
//			break;
//		}
//		else if(a[i] >= 'a' && a[i] <= 'z')
//		{
//			count3++;
//		}
//		else if(a[i] >= 'A' && a[i] <= 'Z')
//		{
//			count2++;
//		}
//		else if(a[i] >= '1' && a[i] <= '9')
//		{
//			count1++;
//		}
//		else
//		{
//			count4++;
//		}
//	}
//	printf("数字字符的个数=%d\n大写字母的个数=%d\n小写字母的个数=%d\n其他字符的个数=%d\n", count1, count2, count3, count4);
//	return 0;
//}



//20、输入一串字符，将其中的大写字母变成对应的小写字母并输出。
//int main()
//{
//	int len = 0;
//	int i = 0;
//	char a[1000] = {0};//存放输入字符串的数组
//	gets(a);//输入字符串
//	len = strlen(a);
//	for(i = 0; i < len; i++)
//	{
//		if(a[i] >= 'A' && a[i] <= 'Z')//判断下标为i的字符是否为大写字母
//		{
//			a[i] += 32;//大写转换小写ascii码值+32
//		}
//	}
//	for(i = 0; i < len; i++)
//	{
//		printf("%c", a[i]);//打印
//	}
//	return 0;
//}



//27、输入一串字符，逆序输出。要求使用数组实现。
//int main()
//{
//	int left = 0;//字符串第一个元素的下标
//	int right = 0;//字符串最后一个元素的下标
//	int i = 0;
//	int len = 0;//字符串长度
//	char a[1000] = {0};
//	gets(a);//输入字符串
//	len = strlen(a);//计算字符串长度
//	left = 0;//左边下标赋值为0
//	right = len-1;//右边下标赋值为字符串长度
//	while(left < right)//当左边下标>=右边时，循环结束
//	{
//		int tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//	for(i = 0; i < len; i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}



//28、求1-1/2+1/3-1/4+...+1/99-1/100的值。
//int main()
//{
//	int i = 0;//定义循环变量
//	double sum = 0.0;//定义和
//	int flag = 1;//定义分数前的正负号
//	for(i = 1; i<= 100; i++)
//	{
//		sum = sum + flag*1.0/i;//i为分母，flag为正负号
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}




//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序。
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int flag1 = 0;//是否为降序，降序flag1则为1
//    int flag2 = 0;//是否为升序，升序flag2则为1
//    int arr[50] = {0};
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //判断是否有序
//    for(i = 0; i < n-1; i++)//n个元素判断n-1次
//    {
//        //判断是否为降序
//        if(arr[i] >= arr[i+1])//大于为降序，arr[i]=arr[i+1]相等时，当成升序或降序都可以
//        {
//            flag1 = 1;
//        }
//        //判断是否为升序
//        if(arr[i] < arr[i+1])
//        {
//            flag2 = 1;
//        }
//    }
//    if(flag1 + flag2 == 1)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//    return 0;
//}



//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序
//int main()
//{
//    int n = 0;
//    int m = 0;//要插入的整数
//    int i = 0;
//    int arr[50] = {0};
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    //插入
//    for(i = n-1; i >= 0; i--)
//    {
//        if(m < arr[i])//判断m和arr[i]的大小
//        {
//            arr[i+1] = arr[i];
//        }
//        else
//        {
//            arr[i+1] = m;
//			break;
//        }
//    }
//	if(-1 == i)
//	{
//		arr[0] = m;
//	}
//    //打印
//    for(i = 0; i < n+1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}




//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//int main()
//{
//    int del = 0;//想要删除的数字
//    int n = 0;
//    int i = 0;
//    int j = 0;//用来存放不相等的数字
//    int arr[50] = {0};
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    scanf("%d", &del);
//    for(i = 0; i < n; i++)
//    {
//        //判断arr[i]是否和del相等
//        if(arr[i] != del)//不相等就存储，相等就不存储并跳过
//        {
//            arr[j++] = arr[i];//不相等就把不相等的那个数放到下标为j的数组里
//        }
//        //相等就跳过，i++但是j不++。
//    }
//    //打印
//    for(i = 0; i < j; i++)//arr[j]里存放的就是不相同的数字
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//16、编写程序，将用户输入的字符串中所有的字符a去掉，然后输出剩余的字符。
//int main()
//{
//	int i = 0;
//	int j = 0;//存放不相等的字符
//	int len = 0;//字符串长度
//	char arr[50] = {0};
//	gets(arr);
//	len = strlen(arr);
//	for(i = 0; i < len; i++)
//	{
//		//判断字符串中是否有'a'
//		if(arr[i] != 'a')
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	//打印
//	for(i = 0; i < j; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}




//53、编写程序，将用户输入的字符串中删除所有的数字，然后输出剩余的字符
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int len = 0;
//	char arr[50] = {0};
//	gets(arr);//获取用户输入的字符串
//	len = strlen(arr);//计算字符串长度
//	//判断字符串中是否有数字
//	for(i = 0; i < len; i++)
//	{
//		if(!(arr[i] >= '0' && arr[i] <= '9'))
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for(i = 0; i < j; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[100] = {0};
//	int i = 0;
//	int n = 0;
//	int left = 0;
//	int right = 4;
//	scanf("%d", &n);
//	for(i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while(left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for(i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}