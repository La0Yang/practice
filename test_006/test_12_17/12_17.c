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
//	while(~scanf("%d", &n))//~ - ��λȡ��
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
//		//�ж�ch�ǲ��Ǻ�s�����е�ĳ���ַ���ͬ
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
//		//����\n
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
// 	//%cǰ��дһ���ո񣬱�ʾ�ڶ�ȡ�ַ���ʱ�򣬺������пհ��ַ�
//	while((scanf(" %c", &ch)) != EOF)
//	{
//		//�ж�ch�ǲ��Ǻ�s�����е�ĳ���ַ���ͬ
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
//		if(isalpha(ch))//�⺯��-�ж��Ƿ�Ϊ��ĸ
//		{
//			printf("%c is an alphabet.\n");
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n");
//		}
//		getchar();\\����س���"\n"��
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
//			printf("%c\n", ch-32);//Сд-32=��д
//		}
//		if(ch>='A' && ch<='Z')
//		{
//			printf("%c\n", ch+32);//��д+32=Сд
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
			//������
			if(a==b && b==c)//�ȱ�������
			{
				printf("Equilateral triangle!\n");
			}
			else if((a==b) && (b!=c) || (a==c) && (c!=b) || (b==c) && (c!=a))//����������
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
				//����������
				printf("Not a triangle!\n");
		}
    }
		return 0;
}
