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
	printf("*    ��ӭ����    *\n");
	printf("*     *    *     *\n");
}
int ask()
{
	int age = 0;
	printf("��������ˣ�\n");
	scanf("%d", &age);
	return age;
}
void admire(int a)
{
	if(a > 35)
	{
		printf("��ó���ѽ\n");
	}
	else
	{
		printf("�������ѽ\n");
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



//������(������ͬ�±�)
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
		printf("����������");
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			if(arr[i] == arr[j])
			{
				brr[i]++;//�����ͬ�±������arr����Ԫ�ض�Ӧ�ĳ��ִ���
			}
		}
		max < brr[i]?(max = brr[i]):0;
	}
	for(i = 0; i < n; i++)
	{
		if(brr[i] == max)//brr���ֵ��Ӧ��i�±��������
		{
			printf("������%d \n", arr[i]);
		}
	}
	return 0;
}


//Լɪ������
int main()
{
	int arr[41] = {0};
	int i = 0;
	int j = 0;
	int n = 41;
	int count = 1;
	for(i=0;i<n;i++)//����41��Ԫ��
	{
		arr[i] = i+1;
	}
	while(n>2)//ʣ������
	{
		for(i = 0; i < n; i++,count++)
		{
			if(count%3 != 0)//��ɱ
			{
				arr[j++] = arr[i];//
			}
		}
		n = j;//ɱ��һ��ʣ�������
		j = 0;//��һ��
	}
	printf("%d %d\n", arr[0], arr[1]);
	return 0;
}


//��д���򣬽��û�������ַ��������е��ַ�a��*���棬Ȼ�����
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



//��д���򣬽��û�������ַ��������е��ַ�aȥ����Ȼ�����ʣ����ַ�
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


//����һ���ַ��������еĴ�д��ĸ��ɶ�Ӧ��Сд��ĸ�������
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

  


//�жϴӼ���������ַ��������ַ��ĸ�������д��ĸ�ĸ�����Сд��ĸ�ĸ����������ַ��ĸ�������*��Ϊ�ַ����������־
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


//����һ���ַ������������Ҫ��ʹ������ʵ��
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



//���û�������ַ�����ɾ�����е����֣�Ȼ�����ʣ����ַ�
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



//�Ӽ�������һ���ַ���������������������m��n������ַ����д�m��ʼ������n���ַ������磬����abcdefg��2��3�����bcd
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


//����ж�������ַ����Ƿ�Ϊ�����ġ�����ν�����ġ���ָ˳���͵�����һ������abcba
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
			printf("�ǻ��Ĵ�\n");
			break;
		}
		else
		{
			printf("���ǻ��Ĵ�\n");
			break;
		}
	}
	return 0;
}


