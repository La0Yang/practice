#include<stdio.h>
#include<stdlib.h>




//-----------------
//��������
//struct S
//{
//	int n;
//	int arr[];//�ṹ�����һ��Ԫ�ؿ���Ϊδ֪��С - ����Ϊ���������Ա - ����Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//
//	int i = 0;
//	for(i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = (struct S*)realloc(ps, 44);
//	if(ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for(i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}



//����2
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(5*sizeof(int));
//	int i = 0;
//	for(i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//������С
//	int* ptr = (int*)realloc(ps->arr, 10*sizeof(int));
//	if(ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for(i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}



