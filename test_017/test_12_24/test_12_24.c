#include<stdio.h>



//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for(i=0; i<6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};//创建3行4列的数组
//	int arr[3][4] = {{1,2,3},{4,5}};
//	int arr[][4] = {{1,2,3,4},{5,6,7,8}};//行可以省略，列不能省略
//	return 0;
//}




//int main()
//{
//	int arr[3][4] = {{1,2,3},{4,5}};
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




int main()
{
	int arr[3][4] = {{1,2,3},{4,5}};
	//1 2 3 0
	//4 5 0 0
	//0 0 0 0
	int i = 0;
	for(i=0; i<3; i++)
	{
		int j = 0;
		for(j=0; j<4; j++)
		{
			printf("&arr[%d][%d] = %p\n ", i, j, &arr[i][j]);
		}
	}
	return 0;
}
