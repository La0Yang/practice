#include<stdio.h>
#include<errno.h>
#include<string.h>



//int main()
//{
//	//FILE* pf = fopen("test.txt", "w");//写文件
//	FILE* pf = fopen("test.txt", "r");//读文件
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	/*fputc('b', pf);
//	fputc('2', pf);
//	fputc('b', pf);*/
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	//关闭文件
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
//	//读文件
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

//写文件
//int main()
//{
//	char buf[1024] = {0};
//
//	FILE* pf = fopen("test.txt", "w");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
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
//	//从键盘读取一行文本信息
//	char buf[1024] = {0};
//	fgets(buf, 1024, stdin);//从标准输入流读取
//	fputs(buf, stdout);//输出到标准输出流
//
//	//等价于
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
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	
//	//关闭文件
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
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	//关闭文件
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


//scanf/printf     是针对标准输入流/标准输出流的 格式化输入/输出语句
//fscanf/fprintf   是针对所有输入流/所有输出流的 格式化输入/输出语句
//sscanf/sprintf   sscanf是从字符串中读取格式化的数据，sprintf是把格式化数据输出成（存储到）字符串