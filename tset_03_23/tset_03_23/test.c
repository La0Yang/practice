#include<stdio.h>
//ð������
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


//ɾ��Ԫ��
int main()
{
	int arr[50] = {0};
	int n = 0;
	int i = 0;
	int num = 0;//Ҫɾ��������
	int j = 0;
	scanf("%d", &n);
	for(i = 0; i< n; i++)
	{
		printf("����������arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("������Ҫɾ��������");
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



//����Ԫ��
int main()
{
	int arr[100] = {0};
	int num = 0;//Ҫ���������
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("����������arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("������Ҫ���������");
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



//���ֲ���
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
		printf("����������arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("������Ҫ���ҵ�����");
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if(left > right)
	{
		printf("���޴���\n");
	}

	return 0;
}



int main()
{
	int i = 0;
	char str[256] = {0};
	int max = 0;
	int dp[256] = {0};//Ӱ������ 
	scanf("%c", str);
	max = dp[i] = str[0] >= '0' && str[0] <= '9' ? 1 : 0;
	for(i=1; str[i] != '\0'; i++)
	{
		if(!(str[i] >= '0' && str[i] <= '9'))//��ǰԪ�ز�������
		{
			dp[i] = 0;
		}
		else if(!(str[i-1] >= '0' && str[i-1] <= '9'))//ǰһ��Ԫ�ز�������
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
	int dp[10] = {0};//Ӱ������ 
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

//ɾ��Ԫ��
//����һ��ʱ�临�Ӷ�O(n^2)���ռ临�Ӷ�O(1)��
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
	printf("����Ҫɾ��������:");
	scanf("%d", &num);
	for(i = 0; i < n; i++)
	{
		if(arr[i] == num)//�����ɾ��������ͬ
		{
			for(j=1+i; j<n; j++)
			{
				arr[j-1] = arr[j];�Ѻ�һλ�Ƶ�ǰһλ
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


//��������ʱ�临�Ӷ�O(n)���ռ临�Ӷ�O(1)��
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
	printf("����Ҫɾ��������:");
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



//����Ԫ��
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
		printf("��������:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("������Ҫ���������:");
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



//���ֲ���
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
		printf("��������:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("Ҫ���ҵ�����:");
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
			printf("�±��ǣ�%d\n", mid);
			break;
		}
	}
	if(left>right)
	{
		printf("�Ҳ���\n");
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
		printf("��������:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("Ҫ���ҵ�����:");
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
			printf("�±��ǣ�%d\n", mid);
			break;
		}
		if(left>right)
		{
			printf("�Ҳ���\n");
			break;
		}
	}
	return 0;
}


//����
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
 


//ɾ��Ԫ��
int main()
{
	int arr[50] = {0};
	int n = 0;
	int i = 0;
	int j = 0;
	int num = 0;//Ҫɾ��������
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("������Ԫ��a[%d]:", i);
		scanf("%d", &arr[i]);
	}
	printf("������Ҫɾ��������:");
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


//����Ԫ��
int main()
{
	int arr[100] = {0};
	int num = 0;//Ҫ���������
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("��������:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("������Ҫ��������֣�");
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



//���ֲ���
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
		printf("��������:arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	printf("Ҫ���ҵ�����:");
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if(left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}



//ð������
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