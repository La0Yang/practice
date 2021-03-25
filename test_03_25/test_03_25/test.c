#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
/*
float get_avg(int a, int b)
{
	float avg = 0;
	avg = (float)((a+b)/2.0);
	return avg;
}
int main()
{
	int x = 0;
	int y = 0;
	float avg = 0.0;
	scanf("%d%d", &x, &y);
	avg = get_avg(x, y);
	printf("%.2f", avg);
	return 0;
}


void welcome()
{
	printf("*     *    *     *\n");
	printf("*    欢迎光临    *\n");
	printf("*     *    *     *\n");
}
int ask()
{
	int age = 0;
	printf("你今年多大了？\n");
	scanf("%d", &age);
	return age;
}
void admire(int a)
{
	if(a > 35)
	{
		printf("你好成熟呀\n");
	}
	else
	{
		printf("你好年轻呀\n");
	}
}
int main()
{
	int age = 0;
	welcome();
	age = ask();
	admire(age);

	return 0;	
}


float get_Area(int x, int y, int z)
{
	float area = 0;
	area = (float)(((x+y)*z)/2.0);
	return area;
}
int main()
{
	float  area = 0;
	int top = 0;
	int bottom = 0;
	int hight = 0;
	scanf("%d%d%d", &top, &bottom, &hight);
	area = get_Area(top, bottom, hight);
	printf("%.2f", area);

	return 0;
}

float get_F(float c)
{
	return 9*c/5+32;
}
int main()
{
	float c = 0;
	float f = 0;
	scanf("%f", &c);
	f = get_F(c);
	printf("%.2f\n", f);

	return 0;
}



//找众数(利用相同下标)
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int max = 0;
	int arr[10] = {0};
	int brr[10] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("请输入数字");
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			if(arr[i] == arr[j])
			{
				brr[i]++;//存放相同下标后面与arr数组元素对应的出现次数
			}
		}
		max < brr[i]?(max = brr[i]):0;
	}
	for(i = 0; i < n; i++)
	{
		if(brr[i] == max)//brr最大值对应的i下标就是众数
		{
			printf("众数是%d \n", arr[i]);
		}
	}
	return 0;
}


//约瑟夫问题
int main()
{
	int arr[41] = {0};
	int i = 0;
	int j = 0;
	int n = 41;
	int count = 1;
	for(i=0;i<n;i++)//放入41个元素
	{
		arr[i] = i+1;
	}
	while(n>2)//剩余人数
	{
		for(i = 0; i < n; i++,count++)
		{
			if(count%3 != 0)//不杀
			{
				arr[j++] = arr[i];//
			}
		}
		n = j;//杀完一轮剩余的人数
		j = 0;//新一轮
	}
	printf("%d %d\n", arr[0], arr[1]);
	return 0;
}


//编写程序，将用户输入的字符串中所有的字符a用*代替，然后输出
int main()
{
	int i = 0;
	int len = 0;
	char str[50] = {0};
	gets(str);
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[i] == 'a')
		{
			str[i] = '*';
		}
	}
	printf("%s\n", str);
	return 0;

}



//编写程序，将用户输入的字符串中所有的字符a去掉，然后输出剩余的字符
int main()
{
	char str[50] = {0};
	int len = 0;
	int i = 0;
	int j = 0;
	gets(str);
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[i] != 'a')
		{
			str[j++] = str[i];
		}
	}
	for(i = 0;i<j; i++)
	{
		printf("%c\n", str[i]);
	}
	return 0;
}


//输入一串字符，将其中的大写字母变成对应的小写字母并输出。
int main()
{
	char str[50] = {0};
	int i = 0;
	int len = 0;
	gets(str);
	len = strlen(str);
	for(i = 0; i<len; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	printf("%s\n", str);
	return 0;
}

  


//判断从键盘输入的字符中数字字符的个数、大写字母的个数、小写字母的个数及其它字符的个数，以*作为字符输入结束标志
int main()
{
	char str[50] = {0};
	int len = 0;
	int i = 0;
	int count_low = 0;
	int count_up = 0;
	int count_num = 0;
	int count_else = 0;
	gets(str);
	len = strlen(str);
	for(i = 0; str[i] != '*';i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			count_low++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			count_up++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			count_num++;
		}
		else
		{
			count_else++;
		}
	}
	printf("%d %d %d %d\n", count_low, count_up, count_num, count_else);

	return 0;
}


//输入一串字符，逆序输出。要求使用数组实现
int main()
{
	char str[50] = {0};
	int len = 0;
	int i = 0;
	int left = 0;
	int right = 0;
	gets(str);
	len = strlen(str);
	right = len-1;
	while(left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
	printf("%s\n", str);
	return 0;
}



//将用户输入的字符串中删除所有的数字，然后输出剩余的字符
int main()
{
	char str[50] = {0};
	int len = 0;
	int i = 0;
	int j = 0;
	gets(str);
	len = strlen(str);
	for(i = 0; i<len; i++)
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		{
			str[j++] = str[i];
		}
	}
	for(i = 0; i < j; i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}



//从键盘输入一个字符串，再输入两个正整数m和n，输出字符串中从m开始，连续n个字符。例如，输入abcdefg，2，3，输出bcd
int main()
{
	char str[50] = {0};
	int len = 0;
	int m = 0;
	int n = 0;
	int i = 0;
	gets(str);
	scanf("%d%d",&m, &n);
	for(i = m-1; i <= n; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}


//编程判断输入的字符串是否为“回文”。所谓“回文”是指顺读和倒读都一样，如abcba
int main()
{
	char str[50] = {0};
	int len = 0;
	int i = 0;
	gets(str);
	len = strlen(str);
	for(i = 0; i < len/2; i++)
	{
		if(str[i] == str[len-1-i])
		{
			printf("是回文串\n");
			break;
		}
		else
		{
			printf("不是回文串\n");
			break;
		}
	}
	return 0;
}


