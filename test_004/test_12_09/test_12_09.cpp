#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//          //编写一个关于100-200之间素数的c语言程序
//int main()
//{
//	//素数是指一个大于1的自然数中，除了1和此整数自身外，不能被其他自然数整除的输
//int i =0;
//for(i=100;i<=200;i++)   //首先将数的范围规划在100-200之间
//{
//        int j =0;
//        for(j=2;j<i;j++)    //依次用2-199之间的数来与i进行模运算
//        {
//
//	               if(i%j==0)    //如果可以整除，说明不是素数
//	                   break;
//
//
//       }
//       if(j==i)    //如果最后没有任何一个数可以被j整除，说明这个i是素数
//	   printf("%d\n",i);
//}
//system("pause");
//return 0;
//
//}
//输出99乘法表---
//int main()
//{
//	int num1, num2;
//	for(num1 = 1; num1 <10; num1++)
//	{
//		for (num2 = 1; num2 <= 10-num1; num2++)
//		{
//		printf("%d*%d=%-3d ", num1, num2, num1*num2);
//	}
//	printf("\n");
//	}
//system("pause");
//return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i =1; i <=9; i++)
//	{
//		int j = 0;
//		for(j =1; j<=i; j++)
//			{
//				printf("%d*%d=%-3d ", i, j, i*j );
//	        }
//	printf("\n");
//	}
//	return 0;
//}
//找出1000-2000之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(year%4==0)
//	    {
//			if(year%100!=0)
//	        {
//			count++;
//			printf("%d ",year);
//		    }
//		}
//		
//			if(year%400==0)
//			{
//				count++;
//				printf("%d ",year);
//			}
//	}
//printf("\ncount = %d\n ",count);
//return 0;
//}