#include<stdio.h>
#include<math.h>
#include"game.h"
#define _CRT_SECURE_NO_WARNINGS 1

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð������
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//������һ������������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for(j=0; j< sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if(flag == 1)
//		{
//			break;
//		
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr�������������ӡ
//	//arr�����飬������arr���д��Σ�ʵ���ϴ���ȥ��������arr��Ԫ�صĵ�ַ - &arr[0]
//	bubble_sort(arr, sz);//ð��������
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	//��������������Ԫ�صĵ�ַ��һ������£�
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0};
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);
//	//��2���������
//	//1.sizeof����������- ��������ʾ�������� - sizeof�������������������������Ĵ�С����λ���ֽ�
//	//2.&arr - ȡ��ַ��������ʱ�������������������� - &��������ȡ��������������ĵ�ַ
//	printf("%d\n", *arr);  - //&arr�õ������������鿪ʼ��ȫ����ַ
//	
//	return 0;
//}




//������������Ϸ
void menu()
{
	printf("###########################\n");
	printf("#### 1. play   0. exit ####\n");
	printf("###########################\n");
}

//��Ϸ��ʵ��
void game()
{
	char ret = 0;
	//������ά����
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while(1)
	{
		//���������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ��ʤ
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ��ʤ
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("��һ�ʤ!\n");
	}
	else if(ret == '#')
	{
		printf("���Ի�ʤ!\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}