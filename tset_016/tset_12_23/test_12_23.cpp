#include<stdio.h>
#include<math.h>
#include<string.h>


////����1234  ���1 2 3 4
//void print(int n)
//{
//	if(n>9)
//	{	
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�õݹ�ʵ��
//	print(num);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	//�����ַ����ĳ���
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d", len);
//	
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���δ���ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	
//	return 0;
//}


//int Fac1(int n)//ѭ���ķ�ʽ
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)//�ݹ�
//{
//	if(n<=1)
//	    return 1;
//	else
//		return n*Fac2(n-1);
//}
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//
//	return 0;
//}


//���n��쳲�������
//int Fib(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}




//int main()
//{
//	//����һ������ - �������10��
//	int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
//    char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof - ���� arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ�� - char 7*1 = 7
//
//	printf("%d\n", strlen(arr4));
//	//strlen ���ַ����ĳ��� - '\0'֮ǰ���ַ�����
//	//[a b c d e f \0]
//	
//
//	return 0;
//}



