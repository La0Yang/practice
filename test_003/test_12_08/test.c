#include<stdio.h>
#include<string.h>
int main()
{//�ַ���
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', '\0'};
	printf("%d\n", strlen(arr1));//strlen - string length �����ַ�������
	printf("%d\n", strlen(arr2));
	return 0;
}
//int main()
//{
//	char arr1[] = "abc";//����
//	//��abc��--'a', 'b', 'c', '\0'--'\0'���ַ����Ľ�����־,ֹͣ��ӡ���������ַ���������
//	char arr2[] = {'a', 'b', 'c', '\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	
//	return 0;
//}
//enum����ö�ٳ���
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//enum Color color = BLUE;
// printf("%d\n",RED);
// printf("%d\n",YELLOW);
// printf("%d\n",BLUE);
// return 0;
//}
	//enum Sex
	//{
	//	MALE,
	//	FEMALE,
	//	SECRET
	//};
	//int main()
	//{
	//	enum Sex s = MALE;
	//	printf("%d\n",MALE);
	//	printf("%d\n",FEMALE);
	//	printf("%d\n",SECRET);
	//	
	//	return 0;
	//}