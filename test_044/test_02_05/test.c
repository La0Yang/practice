#include<stdio.h>
#include<ctype.h>
#define _CRT_SECURE_NO_WARNINGS 1





//����һ
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
//	//�ж�
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
//������
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
//	//�ж�
//	if(count > 0)
//		printf("A\n");
//	else if(count == 0)
//		printf("E\n");
//	else
//		printf("B\n");
//
//	return 0;
//}
//������
//int main()
//{
//	char str[100] = {0};
//	//��ȡһ��
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
//	//�ж�
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




//����һ
//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	int s3 = 0;
//	while(~scanf("%d %d %d", &s1, &s2, &s3))
//	{
//		//�ٶ�max�зŵ������ֵ
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
//������
//int main()
//{
//	int s[3] = {0};
//	while(~scanf("%d %d %d", &s[0], &s[1], &s[2]))
//	{
//		//�ٶ�max�зŵ������ֵ
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
//		//���˻��з�\n
//		getchar();
//	}
//	return 0;
//}
//�Ż�
//int main()
//{
//	int ch = 0;
//	char s[] = "AaEeIiOoUu";
//	//��%cǰ���һ���ո񣬱�ʾ�ڶ�ȡ�ַ���ʱ�򣬺������еĿհ��ַ�
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



//����һ
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
//������
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		//if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		if(isalpha(ch))//�⺯�� - �ж��Ƿ�Ϊ��ĸ
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



//����һ
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		if(ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch-32);//Сдת��д-32
//		}
//		if(ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch+32);//��дתСд+32
//		}
//		getchar();
//	}
//	return 0;
//}
//������
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		if(islower(ch))//�⺯���ж��Ƿ�ΪСд
//		{
//			printf("%c\n", toupper(ch));//�⺯��Сдת��д
//		}
//		if(isupper(ch))//�⺯���ж��Ƿ�Ϊ��д
//		{
//			printf("%c\n", tolower(ch));//�⺯����дתСд
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


