#include<stdio.h>
#include<math.h>
#include"game.h"
#define _CRT_SECURE_NO_WARNINGS 1

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡趟数
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//假设这一趟排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for(j=0; j< sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;//本趟排序的数据不完全有序
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
//	//对arr进行排序，升序打印
//	//arr是数组，对数组arr进行传参，实际上传过去的是数组arr首元素的地址 - &arr[0]
//	bubble_sort(arr, sz);//冒泡排序函数
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	//数组名是数组首元素的地址（一般情况下）
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0};
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);
//	//有2个例外情况
//	//1.sizeof（数组名）- 数组名表示整个数组 - sizeof（数组名）计算的是整个数组的大小，单位是字节
//	//2.&arr - 取地址数组名的时候，数组名代表整个数组 - &数组名，取出的是整个数组的地址
//	printf("%d\n", *arr);  - //&arr得到的是整个数组开始的全部地址
//	
//	return 0;
//}




//测试三子棋游戏
void menu()
{
	printf("###########################\n");
	printf("#### 1. play   0. exit ####\n");
	printf("###########################\n");
}

//游戏的实现
void game()
{
	char ret = 0;
	//创建二维数组
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while(1)
	{
		//玩家先下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否获胜
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否获胜
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("玩家获胜!\n");
	}
	else if(ret == '#')
	{
		printf("电脑获胜!\n");
	}
	else
	{
		printf("平局\n");
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}