#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//给一个字符串，找出最长的连续的，没有重复字符的子字符串字符个数
//例：abcdaxyzaabcd
//方法：动态规划
//步骤：1.从左向右遍历字符串
//      2.计算某个dp[i]时，遍历从i-1到i-dp[i-1]遍历到sttr[j]和srt[i]相同，
//        记录个数，个数为循环次数。如果没有相同，dp[i] = dp[i-1]+1
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
	printf("请输入三个数:\n");
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
	dest[i] = '\0';//补'\0'
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
	dest[i+j] = '\0';//补'\0'
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



//判断@
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
//判断.com
int is_com(char *str)
{
	return strcmp(str+strlen(str)-4, ".com")==0?1:0;
}
//判断空格
int is_space(char *str)
{
	return strchr(str, ' ')?0:1;
} 
//判断有效字符
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
		printf("名字有效\n");
	}
	else
	{
		printf("名字无效\n");
	}
	return 0;
}

//作业1
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

//作业2
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
