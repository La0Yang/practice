#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//---------������------------
//int main()
//{
//	//1.��NULLָ������ò���
//	int *p = (int*)malloc(40);
//	//��p�����ж�
//	*p = 10;//malloc���ٿռ�ʧ�ܣ���NULLָ�������
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	int *p = (int*)malloc(40);//10��int
//	if(p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for(i = 0; i <= 10; i++)//i = 10��ʱ����Խ�����
//	{
//		*(p + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//
//	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	int a = 10;
//	int *p = &a;
//	//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	free(p);
//	p = NULL;
//
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//	int* p = (int*)malloc(40);
//	if(p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//���տռ�
//	free(p);
//	p = NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	int* p = (int*)malloc(40);
//	if(p == NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	//�ͷ�
//	free(p);
//	//p = NULL;//����취
//	//...
//	free(p);
//	
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��
//	while(1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}



//---------���������----------

//��Ŀһ��
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//�˴��������
//	printf(str);
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
////������ڵ�����
////str�Դ�ֵ����ʽ���ݸ�p��p��GetMemory���βΣ�ֻ���ں����ڲ���Ч
////��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
//
//
////��ȷ�޸ķ�ʽ1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");//�˴��������
//	printf(str);
//	
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
////��ȷ�޸ķ�ʽ2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");//�˴��������
//	printf(str);
//	
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//��Ŀ����

//char* GetMemory(void)
//{
//	char p[] = "hello world";//�ֲ�����������������
//	return p;//����ջ�ռ�ĵ�ַ - ������ɷǷ�����
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//-----------------------------------

//int* test()
//{
//	//static int a = 10;//��̬�� - ok
//	int a = 10;//ջ�� - err
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//��Ŀ����

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�����ͷŶ�̬���ٵ��ڴ�
//	//�����ڴ�й©
//	free(str);
//	str = NULL;//�Ľ�
//}
//int main()
//{
//	Test();
//	return 0;
//}



//��Ŀ�ģ�

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷź󣬲������str��ΪNULL
//	//�޸�
//	str = NULL;
//	
//	if(str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}