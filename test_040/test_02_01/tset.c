#include<stdio.h>


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = {"����", 20, 55.6};
//	struct S tmp = {0};
//
//	FILE* pf = fopen("test.txt", "wb");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//��������ʽд�ļ�
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	//��������ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%s ", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_CUR);
//	fgetc(pf);
//
//	/*int pos = ftell(pf);
//	printf("%d\n", pos);*/
//	rewind(pf);//���ļ�ָ���λ�ûص��ļ�����ʼλ��
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if(pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//���ļ�
//	int ch = 0;
//	while((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if(ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if(feof(pf))
//	{
//		printf("end of file\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//typedef struct
//{
//	int a;//4
//	char b;//1
//	short c;//2
//	short d;//2
//}AA_T;
//int main()
//{
//	printf("%d\n", sizeof(AA_T));//12
//
//	return 0;
//}



//struct A
//{
//	int a;//4
//	short b;//2
//	int c;//4
//	char d;//2
//};
//struct B
//{
//	int a;//4
//	short b;//2
//	char c;//1
//	int d;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//
//	return 0;
//}



//#pragma pack(4)//Ĭ�϶���������Ϊ4
//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		short a;//2
//		char d;//1
//		long b;//4
//		long c;//4
//	};//12
//	struct tagTest2
//	{
//		long b;//4
//		short c;//2
//		char d;//1
//		long a;//4
//	};//12
//	struct tagTest3
//	{
//		short c;//2
//		long b;//4
//		char d;//1
//		long a;//4
//	};//16
//
//	printf("%d %d %d", sizeof(tagTest1), sizeof(tagTest2), sizeof(tagTest3));
//
//	return 0
//}
//#pragma pack()



