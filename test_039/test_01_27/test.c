#include<stdio.h>
#include<errno.h>
#include<string.h>



//int main()
//{
//	//FILE* pf = fopen("test.txt", "w");//д�ļ�
//	FILE* pf = fopen("test.txt", "r");//���ļ�
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	/*fputc('b', pf);
//	fputc('2', pf);
//	fputc('b', pf);*/
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//int main()
//{
//	char buf[1024] = {0};
//
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//	
//
//	return 0;
//}

//д�ļ�
//int main()
//{
//	char buf[1024] = {0};
//
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = {0};
//	fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	fputs(buf, stdout);//�������׼�����
//
//	//�ȼ���
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100, 3.14, "hello"};
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf(stdout, "%d %f %s\n", s.n, s.score, s.arr);
//
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100, 3.14f, "abcdef"};
//	char buf[1024] = {0};
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//
//	return 0;
//}


//scanf/printf     ����Ա�׼������/��׼������� ��ʽ������/������
//fscanf/fprintf   ���������������/����������� ��ʽ������/������
//sscanf/sprintf   sscanf�Ǵ��ַ����ж�ȡ��ʽ�������ݣ�sprintf�ǰѸ�ʽ����������ɣ��洢�����ַ���