#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10*sizeof(int));//��̬�ڴ濪��
//	if(p == NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for(i = 0; i< 10; i++)
//		{
//			*(p+i) = i;
//		}
//		for(i = 0; i< 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	//���ٿռ�ʹ����ʹ��free�����ͷ���黹
//  //free�����������ͷŶ�̬�������ٵĿռ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if(p == NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//realloc - ������̬�����ڴ�ռ�Ĵ�С
//int main()
//{
//	int* p = (int*)malloc(20);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//��������ʹ��malloc���ٵ�20���ֽ�
//	//��������20���ֽڲ�������ʹ��
//	//ϣ��ӵ��40���ֽڿռ�
//	//ʹ��realloc��������̬���ٵ��ڴ�
//
//	//reallocʹ�õ�ע������
//	//1.���pָ��Ŀռ�������㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ�����p
//	//2.���pָ��Ŀռ����û���㹻���ڴ�ռ�׷�ӣ���realloc������������һ���µ��ڴ�����
//	//  ����һ����������Ŀռ䣬����ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��µĵ�ַ
//	//3.������һ���µı���������realloc�����ķ���ֵ
//	int*ptr = (int*)realloc(p, 4000);
//	
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//	
//	int i = 0;
//	for(i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	//1.�Կ�ָ����н����ò���
//	int *p = (int*)malloc(40);
//	//��һmallocʧ�ܣ�p�ͱ���ֵΪNULL
//	*p = 0;//err
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//
//	//2.�Զ�̬���ٵ��ڴ��Խ�����
//	int *p = (int*)malloc(5*sizeof(int));
//	if(p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i < 10; i++)//�˴�Խ�����
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//
//	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}



