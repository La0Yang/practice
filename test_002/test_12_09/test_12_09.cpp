#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\16\tese.c"));
//	printf("%c\n", strlen("\327"));
//	return 0;
//}
//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	return 0;
//}
//int main()
//{
//	printf("c:\\test\\32\\test.c\n");
//	return 0;
//}
//int main()
//{
//	printf("abc\n");// \n��ʾ����
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c',0};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c',0};
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
int main()
{
	int line = 0;
	printf("ѧϰ���\n");
	
	while(line<20000)
	{
		printf("�ô���: %d\n", line);
		line++;
	}
	if(line>=20000)
		printf("ţ��\n");
	return 0; 
}