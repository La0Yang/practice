#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//��һ���ַ������ҳ���������ģ�û���ظ��ַ������ַ����ַ�����
//����abcdaxyzaabcd
//��������̬�滮
//���裺1.�������ұ����ַ���
//      2.����ĳ��dp[i]ʱ��������i-1��i-dp[i-1]������sttr[j]��srt[i]��ͬ��
//        ��¼����������Ϊѭ�����������û����ͬ��dp[i] = dp[i-1]+1
/*
int main()
{
	char str[100] = {0};
	char dp[100] = {1};
	int i = 0;
	int j = 0;
	int count = 1;
	int len = 0;
	int max = 0;
	scanf("%s", str);
	len = strlen(str);
	for(i = 1; i<len; i++)
	{
		count = 1;
		for(j = i-1; j>=i-dp[i-1]; j--)
		{
			if(str[j]!=str[i])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		dp[i] = count;
		max = max > dp[i]? max : dp[i];
	}
	printf("max=%d\n", max);
	return 0;
}


int get_max(int x, int y, int z)
{
	int max = 0;
	max = x>y?x:y;
	max = max>z?max:z;
	return max;
}
int main()
{
	int a = 0;
	int b = 0;  
	int c = 0;
	int ret = 0;
	printf("������������:\n");
	scanf("%d%d%d", &a, &b, &c);
	ret = get_max(a,b,c);
	printf("%d\n", ret);

	return 0;
}


int my_strlen(char *a)
{
	int i = 0;
	for(i = 0; a[i] != '\0'; i++)
	{
		;
	}
	return i;
}
int main()
{
	char str[100] = "abcdef";
	int len = 0;
	len = my_strlen(str);
	printf("%d\n", len);
}



char *my_strcpy(char *dest, char* str)
{
	int i = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';//��'\0'
	return dest;
}
int main()
{
	char src[100] = "123546";
	char str[100] = "abcdefgh";
	char *s = NULL;
	
	printf("%s\n", strcpy(src,str));
	printf("%s\n", my_strcpy(src,str));

	return 0;
}


char *my_strcat(char *dest, char *str)
{
	int i = 0;
	int j = 0;
	for(i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for(j = 0; str[j] != '\0'; j++)
	{
		dest[i+j] = str[i];
	}
	dest[i+j] = '\0';//��'\0'
	return dest;
}
int main()
{
	char src[100] = "abc";
	char str[100] = "def";
	my_strcat(src, str);

	printf("%s\n", strcat(src,str));
	printf("%s\n", my_strcat(src,str));
	return 0;
}



char *my_strchr(char *src, char ch)
{
	int i = 0;
	for(i = 0; src[i] !='\0'; i++)
	{
		if(src[i] == ch)
		{
			return src+i;//return &src[i]
		}
	}
	return NULL;
}
int main()
{
	char src[100] = "www.runoob.com";
	char ch = '.';
	printf("%s\n", strchr(src,ch));
	printf("%s\n", my_strchr(src, ch));
	return 0;
}



//�ж�@
int is_aite(char* str)
{
	int i = 0;
	int count = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == '@')
		{
			count++;
		}
	}
	if(count == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//�ж�.com
int is_com(char *str)
{
	return strcmp(str+strlen(str)-4, ".com")==0?1:0;
}
//�жϿո�
int is_space(char *str)
{
	return strchr(str, ' ')?0:1;
} 
//�ж���Ч�ַ�
int is_work(char *str)
{
	int i = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(!(isalnum(str[i]) || str[i] == '.' || str[i] == '_' || str[i] == '@'))
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int ret1 = 0;
	int ret2 = 0;
	int ret3 = 0;
	int ret4 = 0;
	int sum = 0;
	char str[100] = {0};
	gets(str);
	ret1 = is_aite(str);
	ret2 = is_com(str);
	ret3 = is_space(str);
	ret4 = is_work(str);

	sum = ret1 + ret2 + ret3 + ret4;
	if(sum == 4)
	{
		printf("������Ч\n");
	}
	else
	{
		printf("������Ч\n");
	}
	return 0;
}

//��ҵ1
char *My_strupr(char *str)
{
	int i = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i] -= 32;
		}
	}
	return str;
}
int main()
{
	char* p = NULL;
	char str[100] = {0};
	gets(str);
	p = My_strupr(str);
	printf("%s\n", p);
}

//��ҵ2
char *My_strlwr(char *str)
{
	int i = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i] += 32;
		}
	}
	return str;
}
int main()
{
	char* p = NULL;
	char str[100] = {0};
	gets(str);
	p = My_strlwr(str);
	printf("%s\n", p);
}
*/
