#include<stdio.h>


//����������ȥ��
//���룺5
//���룺10 12 93 12 75
//�����10 12 93 75
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[5000] = {0};
//	int n = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//ȥ��
//	for(i = 0; i < n; i++)
//	{
//		for(j = i + 1; j < n; j++)
//		{
//			if(arr[i] == arr[j])
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	//���
//	for(i = 0; i < n; i++)
//	{
//		if(arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int arr[50] = {0};
//    int i = 0;
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for(i = n-1; i >= 0; i--)
//    {
//        if(arr[i] > n)
//        {
//            arr[i+1] = arr[i];
//        }
//        if(arr[i] < n)
//        {
//            arr[i+1] = n;
//			break;
//        }
//    }
//    if(i == -1)
//    {
//        arr[0] = n;
//    }
//	for(i = 0; i < n+1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//    return 0;
//}


//int main()
//{
//	int n = 0;//���ϸ���
//	int count = 0;
//	int e = 0;//��ƿ�Ӹ���
//	scanf("%d", &n);
//	e = n%3 + n/3;
//	while(e>2)
//	{
//		count = count + e;
//		e = e%3 + e/3;
//	}
//	if(e == 2)
//	{
//		count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}



//ĳ�̵�涨����������ˮƿ���Ի�һƿ��ˮ��С��������ʮ������ˮƿ���������Ի�����ƿ��ˮ�ȣ���
//����5ƿ���������£�����9����ƿ�ӻ�3ƿ��ˮ���ȵ�3ƿ���ģ������Ժ�4����ƿ�ӣ���3���ٻ�һƿ���ȵ���ƿ���ģ���ʱ��ʣ2����ƿ�ӡ�
//Ȼ�������ϰ��Ƚ����һƿ��ˮ���ȵ���ƿ���ģ������Ժ���3����ƿ�ӻ�һƿ���Ļ����ϰ塣���С��������n������ˮƿ�������Ի�����ƿ��ˮ�ȣ�
//int main()
//{
//	int n = 0;//��ƿ�ӵĸ���
//	int count = 0;//�ܺȶ���ƿ
//	scanf("%d", &n);
//	while(n>2)
//	{
//		count = count + n/3;
//		n = n%3+n/3;
//	}
//	if(n == 2)
//	{
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}



//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for(i = 1; i <= n; i++)
//    {
//        for(j = 1; j <= i; j++)
//        {
//            printf("* ");
//        }
//        for(j = 1; j <= i; j++)
//        {
//            printf(" ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        for(i = 1; i <= n; i++)
//        {
//            for(j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while(~scanf("%d", &n))
//    {
//        //��ӡ�ϰ벿��
//        for(i = 0; i < n+1; i++)
//        {
//            for(j = 0; j < n-i; j++)
//            {
//                printf(" ");
//            }
//            for(j = 0; j < i+1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //��ӡ�°벿��
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < i+1; j++)
//            {
//                printf(" ");
//            }
//            for(j = 0; j < n-i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while(~scanf("%d", &n))
//    {
//        for(i = 0; i < n; i++)
//        {
//            for(j = 0; j < n+1-i; j++)
//            {
//                printf("* ");
//            }
//            for(j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        for(i = 0; i < n+1; i++)
//        {
//            for(j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            for(j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



