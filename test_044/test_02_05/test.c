#include<stdio.h>
#include<ctype.h>
#define _CRT_SECURE_NO_WARNINGS 1





//方法一
//int main()
//{
//	int ch = 0;
//	int count_a = 0;
//	int count_b = 0;
//	while((ch=getchar() != '0') && (ch != EOF))
//	{
//		if(ch == 'A')
//			count_a++;
//		if(ch == 'B')
//			count_b++;
//	}
//	//判断
//	if(count_a == count_b)
//	{
//		printf("%c\n", 'E');
//	}
//	else if(count_a > count_b)
//	{
//		printf("%c\n", 'A');
//	}
//	else
//	{
//		printf("%c\n", 'B');
//	}
//
//	return 0;
//}
//方法二
//int main()
//{
//	int ch = 0;
//	int count = 0;
//	while((ch=getchar() != '0') && (ch != EOF))
//	{
//		if(ch == 'A')
//			count++;
//		if(ch == 'B')
//			count--;
//	}
//	//判断
//	if(count > 0)
//		printf("A\n");
//	else if(count == 0)
//		printf("E\n");
//	else
//		printf("B\n");
//
//	return 0;
//}
//方法三
//int main()
//{
//	char str[100] = {0};
//	//读取一行
//	gets(str);
//	int i = 0;
//	int count = 0;
//	while(str[i] != '0')
//	{
//		if(str[i] == 'A')
//			count++;
//		else if(str[i] == 'B')
//			count--;
//		i++;
//	}
//	//判断
//	if(count > 0)
//		printf("A\n");
//	else if(count == 0)
//		printf("E\n");
//	else
//		printf("B\n");
//
//	return 0;
//}





//int main()
//{
//	int n = 0;
//
//	while(scanf("%d", &n) != EOF)//while(~scanf("%d", &n))
//	{
//		if(n >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//
//	return 0;
//}





//int main()
//{
//	int score = 0;
//	while(!scanf("%d", &score))
//	{
//		if(score >= 90 && score <= 100)
//			printf("prefect\n");
//	}
//	return 0;
//}




//int main()
//{
//	int score = 0;
//	while(~scanf("%d", &score))
//	{
//		if(score >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	while(~scanf("%d", &n))
//	{
//		if(n % 2 == 1)
//		{
//			printf("Odd\n");
//		}
//		else
//		{
//			printf("Even\n");
//		}
//	}
//	return 0;
//}




//方法一
//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	int s3 = 0;
//	while(~scanf("%d %d %d", &s1, &s2, &s3))
//	{
//		//假定max中放的是最大值
//		int max = 0;
//		if(s1 > max)
//			max = s1;
//		if(s2 > max)
//			max = s2;
//		if(s3 > max)
//			max = s3;
//		printf("%d\n", max);
//	}
//
//	return 0;
//}
//方法二
//int main()
//{
//	int s[3] = {0};
//	while(~scanf("%d %d %d", &s[0], &s[1], &s[2]))
//	{
//		//假定max中放的是最大值
//		int max = 0;
//		int i = 0;
//		for(i = 0; i < 3; i++)
//		{
//			if(max < s[i])
//				max = s[i];
//		}
//		printf("%d\n", max);
//	}
//
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
//	while((ch=getchar()) != EOF)
//	{
//		//判断ch是不是和s数组中的某个字符相同
//		int i = 0;
//		for(i=0; i<10; i++)
//		{
//			if(ch == s[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if(i == 10)
//			printf("Consonant\n");
//
//		//过滤换行符\n
//		getchar();
//	}
//	return 0;
//}
//优化
//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
//	//在%c前面加一个空格，表示在读取字符的时候，忽略所有的空白字符
//	while((scanf(" %c", &ch)) != EOF)
//	{
//		//判断ch是不是和s数组中的某个字符相同
//		int i = 0;
//		for(i=0; i<10; i++)
//		{
//			if(ch == s[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if(i == 10)
//			printf("Consonant\n");
//	}
//	return 0;
//}



//方法一
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
//		{
//			printf("%c is an alphabet.\n");
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n");
//		}
//		getchar();
//	}
//	return 0;
//}
//方法二
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		//if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		if(isalpha(ch))//库函数 - 判断是否为字母
//		{
//			printf("%c is an alphabet.\n");
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n");
//		}
//		getchar();
//	}
//	return 0;
//}



//方法一
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		if(ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch-32);//小写转大写-32
//		}
//		if(ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch+32);//大写转小写+32
//		}
//		getchar();
//	}
//	return 0;
//}
//方法二
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		if(islower(ch))//库函数判断是否为小写
//		{
//			printf("%c\n", toupper(ch));//库函数小写转大写
//		}
//		if(isupper(ch))//库函数判断是否为大写
//		{
//			printf("%c\n", tolower(ch));//库函数大写转小写
//		}
//		getchar();
//	}
//	return 0;
//}




//int main()
//{
//	int  t = 0;
//	while(~scanf("%d", &t))
//	{
//		if(t>0)
//			printf("%d\n", 1);
//		else if(t == 0)
//			printf("%.1f\n", 0.5);
//		else
//			printf("%d\n", 1);
//	}
//	return 0;
//}


