#include<stdio.h>
#include<math.h>

//
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz-1;
//
//    while(left<=right)
//    {
//	    int mid = (left+right)/2;//�м�Ԫ�ص��±�
//	    if(arr[mid] < k)
//	    {
//		    left = mid+1;
//	    }
//	    else if(arr[mid] > k)
//	    {
//		    right = mid-1;
//	    }
//	    else
//	    {
//		    return mid;
//	    }
//    }
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±꣬�Ҳ����ķ���-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, int sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}




//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//int main()
//{
//	int len = 0;
//	//1.
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2.��ʽ����
//	printf("%d\n", strlen("abc"));
//	return 0;
//}



//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf43�ķ���ֵ��2���ȴ�ӡ43���ٴ�ӡ43�ķ���ֵ��2���ٴ�ӡ2�ķ���ֵ��1
//	//��ӡ����ǣ�4321
//	return 0;
//}




//��������
//int Add(int x, int y);
//int mian()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}