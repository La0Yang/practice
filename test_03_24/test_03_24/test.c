#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//��10��������������������еĳ���
//���룺8 2 6 9 4 3 1 0 7 9 �����4
//
//int main()
//{
//	int arr[10] = {0};
//	int dp[10] = {1};
//	int i = 0;
//	int j = 0;
//	int max = 1;
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for(i = 1; i<10; i++)
//	{
//		dp[i] = 1;
//		for(j = 0; i < j; i++)
//		{
//			if(arr[i]>arr[j])
//			{
//				dp[i] = dp[i]<dp[j]+1?dp[j]+1:dp[i];//��̬�仯ȡ���
//				max = max > dp[i]?max:dp[i];
//			}
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int n = 0;
//	int count = 0
//	int min = 10;
//	int pos = 0;//λ��
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d", &arr[i]);
//	}
//	for(i = 1; i < 5; i++)//��1λ�õ�4λ��
//	{
//		count = 1;
//		pos = i;//��ʼλ��1
//		while(pos<9)//��û����
//		{
//			pos = pos + arr[pos];
//			count++;
//		}
//		if(pos == 9)//�պ�����ʱ
//		{
//			min = min < count ? min : count;//���˶��ٴ�
//		}
//	}
//	printf("%d", min == 10?-1:min);
//	return 0;
//}
//
//
////ɾ������
//int main()
//{
//	int arr[50] = {0};
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int num = 0;//Ҫɾ������
//	scanf("%d", &n);
//	for(i=0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &num);
//	for(i = 0; i < n; i++)
//	{
//		if(arr[i] != num)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for(i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//
////��һ�����������в�������
//int main()
//{
//	int arr[50] = {0};
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int num = 0;//Ҫ�������
//	scanf("%d", &n);
//	for(i=0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	printf("������Ҫ��������֣�");
//	scanf("%d", &num);
//	for(i = n-1; i>=0; i--)
//	{
//		if(num <= arr[i])
//		{
//			arr[i+1] = arr[i];
//		}
//		else
//		{
//			arr[i+1] = num;
//		}
//	}
//	n++;
//	for(i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//
//
////���ֲ���
//int main()
//{
//	int arr[50] = {0};
//	int i = 0;
//	int n = 0;
//	int mid = 0;
//	int num = 0;
//	int left = 0;
//	int right = 0;
//	scanf("%d", &n);
//	for(i=0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	printf("������Ҫ���ҵ����֣�");
//	scanf("%d", &num);
//	right = n-1;
//	while(left <= right)
//	{
//		mid = (left+right)/2;
//		if(num > arr[mid])
//		{
//			left = mid+1;
//		}
//		else if(num < arr[mid])
//		{
//			right = mid -1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if(left >right)
//	{
//		printf("���޴���\n");
//	}
//	return 0;
//}
//
//
//
//
////ð������
//int main()
//{
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
//	int i = 0;
//	int j = 0;
//	int n = 10;
//	for(i = 0; i < n-1; i++)
//	{
//		for(j = 0; j < n-1-i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//
////����ȥ��
////���룺1 3 2 1 3 2
////�����1 3 2
////����һ��
//int main()
//{
//	int n = 0;
//	int arr[10] = {0};
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	for(i = 1; i<n; i++)
//	{
//		flag = 0;
//		for(j = 0; j < i; j++)				//�ж�
//		{
//			if(arr[j] == arr[i])			//Ԫ�������Ҫɾ��
//			{
//				flag = 1;					//1Ϊɾ��
//				break;						//�����ж�ѭ��ȥɾ��
//			}
//		}
//		if(flag == 1)
//		{
//			int k = 0;						//i�ĺ�1λ����k
//			for(k = i+1; k < n; k++)
//			{
//				//ɾ��
//				arr[k-1] = arr[k];
//			}
//			n--;							//ɾ��֮��Ԫ���ܸ�������һλ
//			i--;							//�ж��ƶ���������Ƿ���Ҫɾ�������Լ�ѭ�������ͱ�����
//		}
//	}
//	for(i = 0; i<n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//
////��������
//int main()
//{
//	int n = 0;
//	int arr[100] = {0};
//	int brr[100] = {0};
//	int m = 0;//brr����Ŀռ䳤��
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	for(i = 0; i < n; i++)
//	{
//		flag = 0;
//		for(j = 0; j < m; j++)
//		{
//			if(arr[i] == brr[j])
//			{
//				flag = 1;//����ͬԪ�أ����Ž�brr����
//				break;
//			}
//		}
//		if(flag == 0)
//		{
//			brr[m] = arr[i];
//			m++;
//		}
//	}
//	for(i = 0; i < m; i++)
//	{
//		printf("%d ", brr[i]);
//	}
//	return 0;
//}
//
//
////������
//
//int main()
//{
//	int n = 0;
//	int arr[100] = {0};
//	int brr[10000] = {0};
//	int m = 0;//brr����Ŀռ䳤��
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	for(i = 0; i < n; i++)
//	{
//		brr[arr[i]]++;
//	}
//	for(i = 0; i < 10000; i++)
//	{
//		if(brr[i] != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//
////�ƶ�0
////2 1 0 3 0 4 0 5
////2 1 3 4 5 0 0 0
//int main()
//{
//	int arr[50] = {0};
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	for(i = 0; i < n; i++)
//	{
//		if(arr[i] != 0)
//		{
//			arr[m++] = arr[i];
//		}
//	}
//	while(m<n)
//	{
//		arr[m++] = 0;
//	}
//	for(i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
////����������������˻���������
////���룺3 5 2 4
////�����20
//int main()
//{
//	int arr[50] = {0};
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = 1+i; j < n; j++)
//		{
//			max = ((arr[i]*arr[j])>max)?(arr[i]*arr[j]):max;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//
//
// //����ȥ��
////���룺1 3 2 1 3 2
////�����1 3 2
////����һ��
//int main()
//{
//	int n = 0;
//	int arr[10] = {0};
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int flag = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	for(i = 0; i < n; i++)
//	{
//		flag = 0;
//		for(j = 0; j < i; j++)
//		{
//			if(arr[j] == arr[i])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if(flag == 1)
//		{
//			for(k = i+1; k < n; k++)
//			{
//				arr[k-1] = arr[k];
//			}
//			n--;
//			i--;
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//
//
////��������,������
////����:2 3 2 4 2 
////���:2
// int main()
//{
//	int n = 0;
//	int arr[10] = {0};
//	int i = 0;
//	int j = 0;
//	int ans = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		printf("���������֣�arr[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	for(i = 0; i < n; i++)
//	{
//		for(j = 1; j < n; j++)
//		{
//			if(arr[i] != arr[j])
//			{
//				count--;
//			}
//			else
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d\n", ans);
//	return 0;
//}
//
//int main()
// {
//	int i = 0;
//	int j = 0;
//	int n = 10;
//	int arr[10] ={10,9,8,7,6,5,4,3,2,1};
//	for(i = 0; i < n-1; i++)
//	{
//		for(j = 0; j < n-1-i; j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	for(i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	 return 0;
// }
//
//int main()
//{
//    int nums[50] = {0};
//    int targat = 0;
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &nums[i]);        
//    }
//    scanf("%d", &targat);
//    for(i = 0; i < n; i++)
//    {
//        for(j = i+1; j < n; j++)
//        {
//            if(nums[i]+nums[j] == targat)
//            {
//                printf("[%d,%d]", i,j);
//                break;
//            }
//        }
//    }
//
//    return 0;
//}


//��10��������������������еĳ���
//���룺8 2 6 9 4 3 1 0 7 9 �����4

//int main()
//{
//	int arr[10] = {0};
//	int dp[10] = {1};
//	int i = 0;
//	int j = 0;
//	int max = 1;
//	for(i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for(i = 1; i<10; i++)
//	{
//		dp[i] = 1;
//		for(j = 0; j < i; j++)
//		{
//			if(arr[i]>arr[j])
//			{
//				dp[i] = dp[i]<dp[j]+1?dp[j]+1:dp[i];//��̬�仯ȡ���
//				max = max > dp[i]?max:dp[i];
//			}
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//    int arr[50] = {0};
//    int n = 0;
//    int i = 0;
//    int j = 0;
//	int k = 0;
//    int flag = 0;
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for(i = 1; i < n; i++)
//    {
//        for(j = 0; j < i; j++)
//        {
//            if(arr[i] == arr[j])
//            {
//                flag = 1;
//				break;
//            }
//        }
//		if(flag == 1)
//		{
//			for(k = i+1; k < n; k++)
//			{
//				arr[k-1] = arr[k];
//			}
//			n--;
//			i--;
//		}
//    }
//    for(i = 0; i<n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	int arr[50]={0};
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for(i = 0; i< n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for(i = 0; i < n; i++)
//	{
//		if(arr[i] != 0)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	while(j < i)
//	{
//		arr[j++] = 0;
//	}
//	for(i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}