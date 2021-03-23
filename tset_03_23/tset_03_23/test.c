#include<stdio.h>
//冒泡排序
/*
int main()
{
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	int i = 0;
	int j = 0;
	int n = 10;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//删除元素
int main()
{
	int arr[50] = {0};
	int n = 0;
	int i = 0;
	int num = 0;//要删除的数字
	int j = 0;
	scanf("%d", &n);
	for(i = 0; i< n; i++)
	{
		printf("请输入数字arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("请输入要删除的数：");
	scanf("%d", &num);
	for(i = 0; i < n; i++)
	{
		if(arr[i] != num)
		{
			arr[j++] = arr[i];
		}
	}
	for(i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
}



//插入元素
int main()
{
	int arr[100] = {0};
	int num = 0;//要插入的数字
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("请输入数字arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("请输入要插入的数：");
	scanf("%d", &num);
	for(i = n-1; i >= 0; i--)
	{
		if(num <= arr[i])
		{
			arr[i+1] = arr[i];
		}
		if(num > arr[i])
		{
			arr[i+1] = num;
		}
	}
	n++;
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}



//二分查找
int main()
{
	int i = 0;
	int n = 0;
	int arr[100] = {0};
	int left = 0;
	int right = 0;
	int mid = 0;
	int num = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("请输入数字arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("请输入要查找的数：");
	scanf("%d", &num);
	right = n-1;
	while(left <= right)
	{
		mid = (left+right)/2;
		if(num > arr[mid])
		{
			left = mid + 1;
		}
		else if(num < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if(left > right)
	{
		printf("查无此数\n");
	}

	return 0;
}



int main()
{
	int i = 0;
	char str[256] = {0};
	int max = 0;
	int dp[256] = {0};//影子数组 
	scanf("%c", str);
	max = dp[i] = str[0] >= '0' && str[0] <= '9' ? 1 : 0;
	for(i=1; str[i] != '\0'; i++)
	{
		if(!(str[i] >= '0' && str[i] <= '9'))//当前元素不是数字
		{
			dp[i] = 0;
		}
		else if(!(str[i-1] >= '0' && str[i-1] <= '9'))//前一个元素不是数字
		{
			dp[i] = 1;
		}
		else if(str[i] >= str[i-1])
		{
			dp[i] = dp[i-1] + 1;
		}
		else if(str[i] < atr[i-1])
		{
			dp[i] = 1;
		}
		max = max < dp[i] ? dp[i] : max;
	}
	printf("%d\n", max);
	return 0;
}


int main()
{
	int i = 0;
	int j = 0;
	int arr[10] = {0};
	int max = 0;
	int dp[10] = {0};//影子数组 
	scanf("%d", arr);
	for(i=1; i<10; i++)
	{
		for(j = 0; j<i; j++)
		{
			if(arr[j] > arr[i])
			{
				dp[i] = dp[j];
				max = dp[i];
			}
			else if(arr[j] < arr[i])
			{
				dp[i] = dp[i-1]+1;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}

//删除元素
//方法一：时间复杂度O(n^2)，空间复杂度O(1)；
int main()
{
	int n = 0;
	int j = 0;
	int i = 0;
	int arr[100]= {0};
	int num = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("输入要删除的数字:");
	scanf("%d", &num);
	for(i = 0; i < n; i++)
	{
		if(arr[i] == num)//如果与删除的数相同
		{
			for(j=1+i; j<n; j++)
			{
				arr[j-1] = arr[j];把后一位移到前一位
			}
			n--;
			i--;
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}


//方法二：时间复杂度O(n)，空间复杂度O(1)；
int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int arr[100]= {0};
	int num = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("输入要删除的数字:");
	scanf("%d", &num);
	for(i = 0; i < n; i++)
	{
		if(arr[i] != num)
		{
			arr[m++] = arr[i];
		}
	}
	for(i = 0; i < m; i++)
	{
		printf("%d ", arr[i]);
	}
}



//插入元素
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int num = 0;
	int arr[100] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("输入数字:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("请输入要插入的数字:");
	scanf("%d", &num);
	for(i = n-1; i>=0 && arr[i]>=num; i--)
	{
		arr[i+1]=arr[i];
	}
	arr[i+1] = num;
	n++;
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//二分查找
int main()
{
	int n = 0;
	int i = 0;
	int left = 0;
	int right = 0;
	int num = 0;
	int mid = 0;
	int arr[100] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("输入数字:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("要查找的数是:");
	scanf("%d", &num);
	right = n-1;
	while(left <= right)
	{
		mid = (left+right)/2;
		if(num > arr[mid])
		{
			left = mid+1;
		}
		else if(num < arr[mid])
		{
			right = mid-1;
		}
		else
		{
			printf("下标是：%d\n", mid);
			break;
		}
	}
	if(left>right)
	{
		printf("找不到\n");
	}
	return 0;
}


int main()
{
	int n = 0;
	int i = 0;
	int left = 0;
	int right = 0;
	int num = 0;
	int mid = 0;
	int arr[100] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("输入数字:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("要查找的数是:");
	scanf("%d", &num);
	right = n-1;
	for(i = 0; i < n; i++)
	{
		mid = (left+right)/2;
		if(num > arr[mid])
		{
			left = mid+1;
		}
		else if(num < arr[mid])
		{
			right = mid-1;
		}
		else
		{
			printf("下标是：%d\n", mid);
			break;
		}
		if(left>right)
		{
			printf("找不到\n");
			break;
		}
	}
	return 0;
}


//排序
 int main()
 {
	int i = 0;
	int j = 0;
	int n = 10;
	int arr[10] ={10,9,8,7,6,5,4,3,2,1};
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d \n", arr[i]);
	}
	 return 0;
 }
 


//删除元素
int main()
{
	int arr[50] = {0};
	int n = 0;
	int i = 0;
	int j = 0;
	int num = 0;//要删除的数字
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("请输入元素a[%d]:", i);
		scanf("%d", &arr[i]);
	}
	printf("请输入要删除的数字:");
	scanf("%d", &num);
	for(i = 0; i < n; i++)
	{
		if(arr[i] != num)
		{
			arr[j++] = arr[i];
		}
	}
	for(i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//增加元素
int main()
{
	int arr[100] = {0};
	int num = 0;//要插入的数字
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("输入数字:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("请输入要插入的数字：");
	scanf("%d", &num);
	for(i = n-1; i>=0;i--)
	{
		if(num <= arr[i])
		{
			arr[i+1] = arr[i];
			arr[i] = num;
		}
		else
		{
			arr[i+1] = num;
		}
	}
	n++;
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//二分查找
int main()
{
	int n = 0;
	int i = 0;
	int left = 0;
	int right = 0;
	int num = 0;
	int mid = 0;
	int arr[100] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("输入数字:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("要查找的数是:");
	scanf("%d", &num);
	right = n-1;
	while(left <= right)
	{
		mid = (left+right)/2;
		if(num > arr[mid])
		{
			left = mid + 1;
		}
		else if(num < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if(left > right)
	{
		printf("找不到\n");
	}
	return 0;
}



//冒泡排序
int main()
{
	int i = 0;
	int j = 0;
	int n = 10;
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j< n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

*/