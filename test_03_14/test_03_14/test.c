#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1

//1.输入年月日，判断是这一年中的第几天
//int main()
//{
//	int alldays = 0;
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int i = 0;
//	scanf("%d%d%d", &year, &month, &day);
//	for(i = 1; i < month; i++)
//	{
//		if(2 == i)
//		{
//			(((year%2 == 0 && year%100 != 0) || (year%400 == 0))?(alldays += 29):(alldays += 28));
//		}
//		else if(4 == i || 6 == i || 9 == i || 11 == i)
//		{
//			alldays += 30;
//		}
//		else
//		{
//			alldays += 31;
//		}
//	}
//	alldays += day;
//	printf("是这一年中的第%d天\n", alldays);
//
//	return 0;
//}


//2.输入两个日期，输出两个日期的间隔天数
//int main()
//{
//	int ret = 0;//相差的年数
//	int sub = 0;//相差的天数
//	int alldays1 = 0;//第一个日期的总天数
//	int alldays2 = 0;//第二个日期的总天数
//	int year1 = 0;
//	int year2 = 0;
//	int month1 = 0;
//	int month2 = 0;
//	int day1 = 0;
//	int day2 = 0;
//	int i = 0;
//	scanf("%d%d%d", &year1, &month1, &day1);//输入第一年的年月日
//
//	for(i = 1; i < month1; i++)
//	{
//		if(2 == i)//
//		{
//			(((year1%2 == 0 && year1%100 != 0) || (year1%400 == 0))?(alldays1 += 29):(alldays1 += 28));//如果是闰年则2月有29天，反则28
//		}
//		else if(4 == i || 6 == i || 9 == i || 11 == i)//小月天数30
//		{
//			alldays1 += 30;
//		}
//		else//大月天数31
//		{
//			alldays1 += 31;
//		}
//	}
//	alldays1 += day1;//第一年总天数
//
//	scanf("%d%d%d", &year2, &month2, &day2);//输入第一年的年月日
//	for(i = 1; i < month2; i++)
//	{
//		if(2 == i)
//		{
//			(((year2%2 == 0 && year2%100 != 0) || (year2%400 == 0))?(alldays2 += 29):(alldays2 += 28));//如果是闰年则2月有29天，反则28
//		}
//		else if(4 == i || 6 == i || 9 == i || 11 == i)//小月天数30
//		{
//			alldays2 += 30;
//		}
//		else//大月天数31
//		{
//			alldays2 += 31;
//		}
//	}
//	alldays2 += day2;//第二年总天数
//
//	if(year1 == year2)//如果年份相等
//	{
//		sub = alldays1 - alldays2;//只需计算天数之差
//		printf("相差%d天\n", sub);
//	}
//	else//如果年数不等
//	{
//		ret = abs(year1 - year2);//计算年数之差
//		sub = 365*ret + (day1 - day2) + ret/4; //年数之差/4 - 计算中间出现几次闰年，出现几年，相差天数+几。
//	}
//
//	printf("相差%d天\n", sub);
//
//	return 0;
//}
//开始日期	结束日期	共/天	年
//2012/3/14	2031/3/14	6939	19



//输入n个整数的序列，要求对这个序列进行去重操作。去重是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int arr[1000] = {0};
//	scanf("%d", &n);
//	//输入序列
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	//去重
//	for(i = 0; i < n; i++)
//	{
//		for(j = i+1; j < n; j++)
//		{
//			//判断是否重复
//			if(arr[j] == arr[i])
//			{
//				arr[j] = 0;//重复的数置为0
//			}
//		}
//	}
//	//输出不为0的数
//	for(i = 0; i < n; i++)
//	{
//		if(arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}




//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//int main()
//{
//    int n = 0;
//    int m = 0;
//	int i = 0;
//    int j = 0;
//    int arr1[100] = {0};
//    int arr2[100] = {0};
//    //输入
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for(i=0; i<n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for(i=0; i<m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //处理
//    while(i<n && j<m)
//    {
//        if(arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);    
//            j++;
//        }
//    }
//    if(i == n)
//    {
//        for(; j<m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else
//    {
//        for(; i<n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//    return 0;
//}



//输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分
//int main()
//{
//    double score = 0.0;
//    int i = 0;
//    for(i = 0; i < 5; i++)
//    {
//        int j = 0;
//        double sum = 0;
//        for(j = 0; j < 5; j++)
//        {
//            scanf("%lf", &score);
//            sum += score;
//            printf("%.1lf ", score);
//        }
//        printf("%.1lf\n", sum);
//    }
//    return 0;
//}



//KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务。
//输入描述:
//第一行包含两个数n和m，表示这个矩阵包含n行m列。从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，
//共输入n*m个数，表示矩阵中的元素。接下来一行输入x和y，用空格分隔，表示KiKi想得到的元素的位置。(1≤x≤n≤10，1≤y≤m≤10)
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int x = 0;
//    int y = 0;
//    int i = 0;
//    int j = 0;
//    int arr[10][10];
//    scanf("%d %d", &n, &m);
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    scanf("%d %d", &x, &y);
//    printf("%d\n", arr[x-1][y-1]);
//    
//    return 0;
//}



//KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务
//输入：第一行包含两个整数n和m，表示这个方阵队列包含n行m列。从2到n+1行，每行输入m个整数，用空格分隔，共输入n*m个数，
//表示方阵中的所有人的身高（保证输入身高都不相同）。(1≤x≤n≤10，1≤y≤m≤10)
//输出：一行，输出两个整数，用空格分隔，表示方阵中身高最高的人所在的行号和列号
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    int m = 0;
//    int x = 0;
//    int y = 0;
//    int high = 0;
//    int max = 0;
//    scanf("%d %d", &n, &m);
//    for(i = 1; i <= n; i++)
//    {
//        for(j = 1; j <= m; j++)
//        {
//            scanf("%d", &high);
//            if(high > max)
//            {
//                max = high;
//                x = i;
//                y = j;
//            }
//        }
//    }
//    printf("%d %d\n", x, y);
//    return 0;
//}




//KiKi得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他。(当两个矩阵对应数组元素都相等时两个矩阵相等)。
//输入：第一行包含两个整数n和m，表示两个矩阵包含n行m列，用空格分隔。
//从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。
//从n+2行到2n+1，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示第二个矩阵中的元素。1 < n,m < 10
//输出：一行，如果两个矩阵相等输出"Yes"并换行，否则输出"No"并换行

//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    int arr1[10][10] = {0};
//    int arr2[10][10] = {0};
//    
//    scanf("%d %d", &n, &m);
//    for(i = 1; i <= n; i++)
//    {
//        for(j = 1; j <= m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for(i = 1; i <= n; i++)
//    {
//        for(j = 1; j <= m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //比较
//    for(i = 1; i <= n; i++)
//    {
//        for(j = 1; j <= m; j++)
//        {
//            if(arr1[i][j] != arr2[i][j])
//            {
//                printf("No\n");
//                return 0;
//            }
//        }
//    }
//    printf("Yes\n");
//    return 0;
//}



//KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。
//上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    int arr[10][10] = {0};
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < n; j++)
//        {
//            if(i > j)
//            {
//                if(arr[i][j] != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}



//KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答
//输入：第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 
//从2到n+1行，每行输入m个整数，用空格分隔，共输入n*m个数，表示第一个矩阵中的元素
//输出：输出m行n列，为矩阵转置后的结果。每个数后面有一个空格

//int main()
//{
//    int m = 0;
//    int n = 0;
//    int arr[10][10] = {0};
//    int i = 0;
//    int j = 0;
//    scanf("%d %d", &n, &m);
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //转置
//    for(i = 0; i < m; i++)
//    {
//        for(j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}