#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

//9����д���򣬽�һ��һά�����Ԫ�������Ų���������磬ԭ˳��Ϊ1��2��3��4��5�������Ϊ5��4��3��2��1��
//int main()
//{
//	int arr[100] = {0};
//	int i = 0;
//	int n = 0;
//	int left = 0;
//	int right = n-1;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while(left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	for(i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//17�����㲢���200-400֮�䲻�ܱ�7�����������ĺ͡�
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 200; i <= 400; i++)
//	{
//		if(i%7 != 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//18.���㲢���200-400֮�䲻�ܱ�5�����������ĺ͡�
//int main ()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 200; i <= 400; i++)
//	{
//		if(i%5 != 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//19���Ӽ�������10������ͳ�Ʒ������ĸ�����������������ĺ͡�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int count = 0;
//	if(n < 0)
//	{
//		sum += n;
//		count++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//21����ӡ���е�ˮ�ɻ�������νˮ�ɻ�����ָһ����λ�������λ���ֵ������͵��ڸ��������磬153����һ��ˮ�ɻ�������Ϊ153=1*1*1+5*5*5+3*3*3��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	for(n = 100; n <= 999; n++)
//	{
//		i = n%10;//��λ��
//		j = n/10%10;//ʮλ��
//		k = n/100;//��λ��
//		if(n == k*k*k+j*j*j+i*i*i)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}



//23���������0-200֮���ܱ�3�����Ҹ�λ����Ϊ6��������
//int main()
//{
//	int i = 0;
//	for(i = 0; i <= 200; i++)
//	{
//		if((0 == i%3) && (6 == i%10))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//26����д����ʹ��ѭ���ṹ�������ͼ�Σ�
//* * * *
//
//* * * *
//
//* * * *
//
//* * * *
//
//* * * *

//int main()
//{
//	int i = 0;
//	for(i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for(j = 0; j < 4; j++)
//		{
//			//��ӡ*
//			printf("* ");
//		}
//		for(j = 0; j < 5; j++)
//		{
//			//��ӡ�ո�
//			printf(" ");
//		}
//		printf("\n");
//		printf("       \n");
//	}
//	return 0;
//}


//30�������������������Լ����
//int main()
//{
//	int min = 0;
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d%d", &m, &n);
//	if(m < n)
//	{
//		min = m;
//	}
//	else
//	{
//		min = n;
//	}
//	for(i = min; i >= 0; i--)
//	{
//		if(0 == m%i && 0 == n%i)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//	return 0;
//}


//31����100֮����Ȼ��������֮�͡�
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for(i = 0; i <= 100; i++)
//	{
//		if(i%2 != 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//32���������200-400֮���ܱ�3�����Ҹ�λ����Ϊ7��������
//int main()
//{
//	int i = 0;
//	for(i = 200; i <= 400; i++)
//	{
//		if((0 == i%3) && (7 == i%10))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//33����̼���1*2*3+4*5*6+...+97*98*99��ֵ
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 1; i <= 97; i+=3)
//	{
//		sum += i*(i+1)*(i+2);
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//34������n��ֵ�����㲢���1*1+2*2+3*3+4*4+5*5+...+n*n��ֵ��Ҫ���д����f��ƽ����
//int f(int x)
//{
//	return x*x;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++)
//	{
//		sum += f(i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//35�����㲢���1-200֮�䲻�ܱ�3�����������ĺ͡�
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for(i = 1; i <= 200; i++)
//	{
//		if(0 != i%3)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//37������һ�������¶ȣ���������¶ȣ����㹫ʽΪc=5*(F-32)/9��Ҫ����������λС����
//int main()
//{
//	int F = 0;//�����¶�
//	double c = 0;//�����¶�
//	scanf("%d", &F);
//	c = 5*(F-32)/9;
//	printf("c=%.2lf", c);
//	return 0;
//}



//38���������������������Ӵ�С��˳�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//		{
//		int t = a;
//			a = b;
//			b = t;
//		}
//		if (a < c)
//		{
//		int t = a;
//			a = c;
//			c = t;
//		}
//		if (b < c)
//		{
//		int t = b;
//			b = c;
//			c = t;
//		}
//		printf("%d %d %d", a, b, c);
//	return 0;
//}



//40���Ӽ�������Բ�İ뾶�����㲢���Բ������ܳ���Ҫ����������λС����
//int main()
//{
//	int r = 0;//Բ�İ뾶
//	double S = 0;//Բ�����
//	double C = 0;//Բ���ܳ�
//	double pai = 3.14;
//	scanf("%d", &r);
//	S = pai * (r*r);
//	C = 2.0*pai*r;
//	printf("S=%.2lf\nC=%.2lf", S, C);
//	return 0;
//}



//44���ж�ĳһ���Ƿ�������
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if((0 == year%4) && (0 != year%100))
//	{
//		printf("%d������", year);
//	}
//	if(0 == year%400)
//	{
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}



//46���ж�ĳ�����Ƿ�Ϊ����.
//int main()
//{
//	int i = 0;
//	int n = 0;//����һ����
//	scanf("%d", &n);
//	for(i = 2; i < n-1; i++)
//	{
//		//�ж�
//		if(0 != n%i)
//		{
//			printf("%d������\n", n);
//			break;
//		}
//		else
//		{
//			printf("%d��������\n", n);
//			break;
//		}
//	}
//	return 0;
//}



//48������������ǰʮ����ĺͣ�2/1��3/2��5/3��8/5��13/8��21/13����
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	double m = 1.0;
//	double n = 2.0;
//	for(i = 1; i <= 20; i++)
//	{
//		sum += n/m;
//		n = n + m;
//		m = n - m;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//49���Ӽ�������Բ����������뾶�����㲢���Բ���������������Ҫ����������λС����
//int main()
//{
//	int h = 0;//Բ����ĸ�
//	int r = 0;//����뾶
//	double S = 0;//Բ����ı����
//	double V = 0;//Բ��������
//	double pai = 3.14;
//	scanf("%d%d", &h, &r);
//	S = 2 * pai * (r*r) + 2 * pai * r * h;
//	V = pai * (r*r) * h;
//	printf("S=%.2lf\nV=%.2lf", S, V);
//	return 0;
//}



