#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>



void menu()
{
	printf("******************************\n");
	printf("****  1. play     0. exit ****\n");
	printf("******************************\n");
}
void game()
{
	//1.����һ�������
	int ret = 0;
	int guess = 0;//���ܲµ�����
	srand((unsigned int)time(NULL));
	ret = rand()%100+1;//����1-100֮��������
	//2.������
	while(1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}while(input);
	return 0;
}