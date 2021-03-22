#include<stdio.h>
#include<limits.h>
#include<string.h>
/*
int main()
{
	int a = 5;
	int b = 10;
	int y = 0;
	y = a++,a++,b+a;//y=5
	y = (a++,a++,b+a);//y=17
	printf("%d\n", y);
	return 0;
}

int main()
{
	int a = 5;
	a = ~a;
	printf("%hu\n", a);
	return 0;
}


//用最快的算法计算一个数二进制位中有多少个1
int main()
{
	int a = 0;
	int count = 0;
	scanf("%d", &a);
	while(a)
	{
		a = a & (a - 1);
		count++;
	}
	printf("count=%d\n", count);
	return 0;
}



//输入一个大端存储数m，把m转换成小端输出
int main()
{
	int m = 0;
	scanf("%d", &m);
	printf("%x\n",((m&255)<<24)+((m&(255<<8))<<8)+((m&(255<<16))>>8)+((m&(255<<24))>>24));
	return 0;
}


//不用算数运算符，计算两数之和
int main()
{
	int a = 0;
	int b = 0;
	int x = 0;
	int y = 0;
	scanf("%d%d", &a, &b);
	while(a==0 || b==0)
	{
		x = a^b;
		y = (a&b)<<1;
		a = x;
		b = y;
	}
	if(a == 0)
	{
		printf("%d\n", a);
	}
	if(b == 0)
	{
		printf("%d\n", b<<1);
	}
}


int main()
{
	int arr[100] = {0};
	int n = 0;
	int i = 0;
	int max = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for(i = 0; i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}

//数组的逆序
int main()
{
	int n = 0;
	int i = 0;
	int arr[1000] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//逆序
	for(i = 0; i < n/2; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = tmp;
	}
	//输出
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//方法二
int main()
{
	int n = 0;
	int j = 0;
	int i = 0;
	int arr[1000] = {0};
	int brr[1000] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//逆序
	for(i =0,j=n-i-1;i<n;i++,j--)
	{
		brr[i] = arr[j];
	}
	//输出
	for(i = 0; i < n; i++)
	{
		printf("%d ", brr[i]);
	}
	return 0;
}

//输出第二大的数
int main()
{
	int n = 0;
	int i = 0;
	int max1 = 0;
	int max2 = INT_MIN;
	int arr[1000] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	max1 = arr[0];
	for(i = 1; i < n; i++)
	{
		max1<arr[i]?(max1=arr[i]):0;//找最大值
	}
	for(i = 0; i < n;i++)
	{
		if(arr[i] != max1 && max2 < arr[i])
		{
			max2 = arr[i];//有大的记大的，但是不能和max1相同
		}
	}
	max2 == INT_MIN?printf("没有第二大"):printf("%d\n", max2);
	return 0;
}

//方法二
int main()
{
	int n = 0;
	int i = 0;
	int max = 0;
	int max1 = 0;
	int max2 = INT_MIN;
	int arr[1000] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i = 1; i < n; i++)
	{
		if(max < arr[i])
		{
			max2 = max;
			max1 = arr[i];
		}
		else if(max2 < arr[i])
		{
			max2 = arr[i];
		}
	}
	printf("%d\n", max2)
	return 0;
}

//种树问题
int main()
{
	int n = 0;
	int count = 0;
	int arr[1000] = {0};
	int i= 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i = 1; i <= n; i++)
	{
		if(arr[i-1] == 0 && arr[i] == 0 && arr[i+1] == 0)
		{
			arr[i] = 1;
			count++;
		}
	}
	printf("%d\n", count);
}


int main()
{
	int count = 0;
	int n = 0;
	int arr[200] = {0};
	int i = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("请输入数字:");
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		if(arr[i-1] == 0 && arr[i] == 0 && arr[i+1] == 0)
		{
			arr[i] = 1;
			count++;
		}
		else if(arr[0] == 0 && arr[1] == 0)
		{
			arr[0] = 1;
			count++;
		}
		else if(arr[n-1] == 0 && arr[n-2] == 0)
		{
			arr[n-1] = 1;
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}



//编写程序，将用户输入的字符串中所有的字符a去掉，然后输出剩余的字符
int main()
{
	int i = 0;
	int j = 0;
	int len = 0;
	char arr[50] = {0};
	gets(arr);
	len = strlen(arr);
	for(i = 0; i < len; i++)
	{
		if(arr[i] != 'a')
		{
			arr[j++] = arr[i];
		}
	}
	for(i = 0; i< j; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}


//编写程序，将用户输入的字符串中删除所有的数字，然后输出剩余的字符
int main()
{
	int i = 0;
	int j = 0;
	int len = 0;
	char arr[50] = {0};
	gets(arr);
	len = strlen(arr);
	for(i=0; i < len; i++)
	{
		if(arr[i] > '9' && arr[i] < '0')
		{
			arr[j++] = arr[i];
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}




//冒泡排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < sz-1; i++)
	{
		int flag = 1;
		for(j = 0; j < sz-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = {2,1,10,9,8,7,6,5,4,3};
	int sz = 0;
	int i = 0;
	sz = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, sz);
	for(i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



void swap_arr(int arr[], int sz)
{
	int tmp = 0;
	int left = 0;
	int right = sz-1;
	while(left < right)
	{
		while((left < right) && (arr[left]%2 == 1))
		{
			left++;
		}
		while((left < right) && (arr[right]%2 == 0))
		{
			right--;
		}
		if(left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for(i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr)/sizeof(arr[0]);
	swap_arr(arr,sz);
	print_arr(arr,sz);
	return 0;
}



int main()
{
	int arr[10][10] = {0};
	int i = 0;
	int j = 0;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(j == 0)
			{
				arr[i][j] = 1;
			}
			if(i == j)
			{
				arr[i][j] == 1;
			}
			if(i>1 && j>0)
			{
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
		for(j = 1; j < 10-i; j++)
		{
			printf(" ");
		}
	}
	return 0;
}
*/