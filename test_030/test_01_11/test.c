#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1; a<=5; a++)
//	{
//		for(b=1; b<=5; b++)
//		{
//			for(c=1; c<=5; c++)
//			{
//				for(d=1; d<=5; d++)
//				{
//					for(e=1; e<=5; e++)
//					{
//						if (((b==2) + (a==3) == 1)&&
//							((b==2) + (e==4) == 1)&&
//							((c==1) + (d==2) == 1)&&
//							((c==5) + (d==3) == 1)&&
//							((e==4) + (a==1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	if(str1 == str2)
//		printf("str1 and str2 are same\n");//ÿ�����鶼�Ƕ����Ŀռ�洢�����Բ���ͬ
//	else
//		printf("str1 and str2 are not same\n");
//
//	if(str3 == str4)
//		printf("str3 and st4 are same\n");//�����ַ������ܸı䣬���ܸı��������ַ��ĵ�ַ��ͬ���ַ�����ͬһ���ռ�
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}



//int* fun(int a, int b);��������
//int(*)fun(int a, int b);err
//int(*fun)(int a, int b);����ָ��
//(int *)fun(int a, int b);��������


//����һ��ָ����10��Ԫ�ص������ָ�룬����ÿ��Ԫ����һ������ָ�룬�ú���
//�ķ���ֵ��int��������int*����ȷ����C
//A.(int *p[10])(int*); - err
//B.int[10]*p(int*); - err
//C.int(*(*p)[10])(int*);
//D.int((int*)[10])*p - err




//int main()
//{
//	int a[5] = {5,4,3,2,1};
//	int* ptr = (int*)(&a + 1);//�����ַ+1��������������
//	printf("%d,%d", *(a + 1), *(ptr - 1));//4,1
//	return 0;
//}




//int main()
//{
//	int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
//	int* ptr1 = (int*)(&aa+1);
//	int* ptr2 = (int*)(*(aa+1));//��ά����aa����Ԫ�ص�ַ���ǵ�һ�еĵ�ַ��aa+1���ڵڶ�����Ԫ�صĵ�ַ����5�ĵ�ַ
//	printf("%d,%d", *(ptr1-1), *(ptr2-1));//1,6
//	return 0;
//}



//��Ŀ����
//ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//1.������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for(i = 0; i < k; i++)
//	{
//		//����һ���ַ�
//		//1.ȡ������ߵ�Ԫ��
//		char tmp = *arr;
//		//2.�Ѻ����Ԫ����ǰŲһλ
//		int j = 0;
//		for(j = 0; j < len-1; j++)
//		{
//			*(arr+j) = *(arr+j+1);
//		}
//		//3.��ȡ����Ԫ�طŵ����
//		*(arr+len-1) = tmp;
//	}
//}

//2.������ת��
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right= tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k<=len);
//	reverse(arr, arr+k-1);//�������
//	reverse(arr+k, arr+len-1);//�����ұ�
//	reverse(arr, arr+len-1);//��������
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}






//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k<=len);
//	reverse(arr, arr+k-1);//�������
//	reverse(arr+k, arr+len-1);//�����ұ�
//	reverse(arr, arr+len-1);//��������
//}
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for(i=0;i<len;i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if(ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if(ret == 1)
//		printf("Yes\n");
//	else
//	    printf("No\n");
//
//	return 0;
//}