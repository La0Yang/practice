#include<stdio.h>
#include<stddef.h>




//ϵͳ�Դ�ƫ�������㺯�� - offsetof
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	//struct S s;
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}

//����ʵ��ƫ�������㺯��
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}



//union Un
//{
//	short s[7];//2 *7
//	int n;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//
//	return 0;
//}



//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//
//	return 0;
//}


//---------------ˢ��----------------
//int main()
//{
//	int sec = 0;
//	scanf("%d", &sec);
//	int h = sec/60/60;
//	int m = sec/60%60;
//	int s = sec%60;
//	printf("%d %d %d\n", h, m, s);
//
//	return 0;
//}



//int main()
//{
//	float s1 = 0.0;
//	float s2 = 0.0;
//	float s3 = 0.0;
//	//����
//	scanf("%f %f %f", s1, s2, s3);
//	//�����
//	float sum = s1+s2+s3;
//	float avg = sum/3;
//	printf("%.2f %.2f\n", sum, avg);
//
//	return 0;
//}
//����2
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for(i = 0; i < 3; i++)
//	{
//		//��ȡһ���ɼ�
//		float s = 0.0;
//		scanf("%f", &s);
//		sum += s;
//	}
//	printf("%.2f %.2f", sum, sum/3);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while(scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		if(m%h)
//		{
//			printf("%d\n", n-m/h-1);
//		}
//		else
//		{
//			printf("%d\n", n-m/h);
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int sum =0;
//	for(i = 0; i < 5; i++)
//	{
//		int score = 0;
//		scanf("%d", &score);
//		sum += score;
//	}
//	printf("%.2f", sum/5.0);
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	int sum = a + b;
//	printf("%d\n", sum);
//
//	return 0;
//}



//int main()
//{
//	float price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%f %d %d", &price, &m, &d);
//	if((m == 11) && (d == 11))
//	{
//		price *= 0.7;
//		if(flag == 1)
//		{
//			price -= 50;
//		}
//	}
//	if((m == 12) && (d == 12))
//	{
//		price *= 0.8;
//		if(flag == 1)
//		{
//			price -= 50;
//		}
//	}
//	if(price < 0)
//		price = 0;
//	printf("%.2f\n", price);
//
//	return 0;
//}
//�Ż�
//int main()
//{
//	float price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	float cut = 1.0;
//	scanf("%f %d %d", &price, &m, &d);
//	if((m == 11) && (d == 11))
//	{
//		cut = 0.7;
//	}
//	else if((m == 12) && (d == 12))
//	{
//		cut = 0.8;
//	}
//	price = price * cut - flag * 50;
//	if(price < 0)
//		price = 0;
//	printf("%.2f\n", price);
//
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[40] = {0};
//	//��ȡ����
//	scanf("%d", &n);
//	//��ȡ�ɼ�
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//��n��ѧ���ĳɼ���������
//	//ð������
//	//����
//	for(i = 0; i < n-1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for(j = 0; j < n-1-i; j++)
//		{
//			if(arr[j] < arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//	//���
//	for(i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}