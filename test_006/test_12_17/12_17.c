#include <stdio.h>
#include <ctype.h>

//int main()
//{
//	int ch = 0;
//	int count = 0;
//	while(((ch=getchar()) !='0') && ch != EOF)
//	{
//		if(ch ==  'A')
//			count++;
//		if(ch ==  'B')
//			count++;
//	}
//	if(count>0)
//		printf("A\n");
//	if(count<0)
//		printf("B\n");
//	else
//		printf("E\n");
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	while(scanf("%d", &n) != EOF)
//	{
//		if(n >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while(~scanf("%d", &n))//~ - 按位取反
//	{
//		if(n >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while(~scanf("%d", &i))
//	{
//		if(i>=90 && i<=100)
//			printf("perfetc\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while(scanf("%d", &i))
//	{
//		if(i >= 60)
//		{
//			printf("Pass\n");
//		}
//		if(i < 60)
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	int s3 = 0;
//	while(~scanf("%d %d %d", &s1, &s2, &s3))
//	{
//		int max = 0;
//		if(s1>max)
//			max = s1;
//		if(s2>max)
//			max = s2;
//		if(s3>max)
//			max = s3;
//		printf("%d\n", max);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
// 	while((ch = getchar()) != EOF)
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
//		//消除\n
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
// 	//%c前面写一个空格，表示在读取字符的时候，忽略所有空白字符
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



//int main()
//{
//	int ch = 0;
//	while(ch=getchar() !=EOF)
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


//int main()
//{
//	int ch = 0;
//	while(ch=getchar() !=EOF)
//	{
//		if(isalpha(ch))//库函数-判断是否为字母
//		{
//			printf("%c is an alphabet.\n");
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n");
//		}
//		getchar();\\清除回车（"\n"）
//	}
//	return 0;
//}


//
//int main()
//{
//	int ch = 0;
//	while(scanf("%c", &ch) != EOF)
//	{
//        getchar();
//        if(ch>='a' && ch<='z')
//		{
//			printf("%c\n", ch-32);//小写-32=大写
//		}
//		if(ch>='A' && ch<='Z')
//		{
//			printf("%c\n", ch+32);//大写+32=小写
//		}
//	}
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while(~(scanf("%d %d %d", &a, &b, &c)))
	{
		if((a+b>c) && (a+c>b) && (b+c>a))
		{
			//三角形
			if(a==b && b==c)//等边三角形
			{
				printf("Equilateral triangle!\n");
			}
			else if((a==b) && (b!=c) || (a==c) && (c!=b) || (b==c) && (c!=a))//等腰三角形
			{
				printf("Isosceles triangle!\n");
			}
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		else
		{
				//不是三角形
				printf("Not a triangle!\n");
		}
    }
		return 0;
}
