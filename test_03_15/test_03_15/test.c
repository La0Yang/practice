#include<stdio.h>
#include<math.h>

//KiKi��һ����������֪������k���б任���б任��õ��ľ������̰������
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = {0};
//    scanf("%d%d", &n, &m);
//    //�����������
//    int i = 0;
//    int j = 0;
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;//�����Ĵ���
//    scanf("%d", &k);
//    int r = 0;
//    for(r = 0; r < k; r++)
//    {
//        //ת��һ��
//        char t = 0;
//        int a = 0;
//        int b = 0;
//        getchar();//�����ϴ�����ʱ���µ�\n
//        scanf("%c %d %d", &t, &a, &b);
//        if(t == 'r')
//        {
//            //������
//            for(i = 0; i < m; i++)
//            {
//                int tmp = arr[a-1][i];
//                arr[a-1][i] = arr[b-1][i];
//                arr[b-1][i] = tmp;
//            }
//        }
//        else if(t == 'c')
//        {
//            //������
//            for(i = 0; i < n; i++)
//            {
//                int tmp = arr[i][a-1];
//                arr[i][a-1] = arr[i][b-1];
//                arr[i][b-1] = tmp;
//            }
//        }
//    }
//    //��ӡ
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//KiKi֪��ʲô���������֮���������ǲ�����Ũ�����Ȥ������֪��������ǵ�ǰn�У����̰������
//������ǣ��������Ƕ���ʽ(a+b)��n�η�չ��������ϵ���ųɵ������Ρ������ʰ�����ÿ�еĶ˵���Ϊ1�� һ����ҲΪ1��
//ÿ�������������Ϸ����Ϸ�������֮��

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    int arr[30][30] = {0};
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < n; j++)
//        {
//            if(i == j)
//            {
//                arr[i][j] = 1;
//            }
//            if(j == 0)
//            {
//                arr[i][j] = 1;
//            }
//            if(i>1 && j>0)
//            {
//                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//            }
//        }
//    }
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//KiKi��BoBo�� ���������塣Ҳ�����ھŹ����У�ֻҪ�����С��У���������Խ��������������������ͬ�����ӣ����ܻ�ʤ��
//���������״̬���жϵ�ǰ��Ӯ��

//int main()
//{
//    char arr[3][3] = {0};
//    int i = 0;
//    int j = 0;
//    char flag = 'O';
//    for(i = 0; i < 3; i++)
//    {
//        for(j = 0; j < 3; j++)
//        {
//            scanf("%c ", &arr[i][j]);
//        }
//    }
//    //�ж���Ӯ
//    for(i = 0; i < 3; i++)
//    {
//        //����
//        if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
//        {
//            flag = arr[i][0];
//            break;
//        }
//        //����
//        if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
//        {
//            flag = arr[0][i];
//            break;
//        }
//    }
//    //�Խ���
//    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
//    {
//        flag = arr[1][1];
//    }
//    if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
//    {
//        flag = arr[1][1];
//    }
//    if(flag == 'K')
//    {
//        printf("KiKi wins!");
//    }
//    else if(flag == 'B')
//    {
//        printf("BoBo wins!");
//    }
//    else
//    {
//        printf("No winner!");
//    }
//    return 0;
//}



//С�����ڿ���ѧϰ�˶����ư˽�����ʮ�����ƺ󣬶Խ���ת��������Ũ�����Ȥ��
//��Ϊ��������������6����������֪��һ������ʾΪ�����ƺ�Ľ�����������������������
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50] = {0};
//    while(n != 0)
//    {
//        arr[i++] = n%6;
//        n /= 6;
//    }
//    for(i--; i>=0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}



//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    printf("%lld", (1+n)*n/2);
//    return 0;
//}



//int main()
//{
//    int hour = 0;
//    int minute = 0;
//    int k = 0;
//    scanf("%d:%d %d", &hour, &minute, &k);
//    minute += k;
//    hour = (hour + minute/60)%24;
//    minute %= 60;
//    printf("%02d:%02d", hour, minute);
//    return 0;
//}


//С��������ڿ���ѧϰ����������������������Լ������С��������
//��������Ȼ���������������������Լ������С������֮�ͣ��������������������

//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    long long a = 0;
//    long long b = 0;
//    long long k = 0;
//    scanf("%lld %lld", &n, &m);
//    a = n;
//    b = m;
//    while(k=a%b)
//    {
//        a = b;
//        b = k;
//    }
//    printf("%lld\n", b+m*n/b);
//    return 0;
//}



//С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
//���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�

//int main()
//{
//    int i = 0;
//    int n = 0;
//    int m = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    while(n)
//    {
//        m = n%10;
//        if(m%2 == 1)
//        {
//            m = 1;
//        }
//        else
//        {
//            m = 0;
//        }
//        sum += m*pow(10, i);
//        i++;
//        n /= 10;
//    }
//    printf("%d\n", sum);
//    return 0;
//}



//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷�
//쳲��������б���

//int Fib(int n)
//{
//    if(n <= 2)
//    {
//        return n;
//    }
//    else
//    {
//        return Fib(n-1)+Fib(n-2);
//    }
//
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}


//��ʦ����С����һ�����������У�Ҫ��С���ְ��������ȥ�غ󰴴�С��������
//������ʦ����������̫���ˣ�С����û�취���ĵ�ȥ�ز����������������
//int main()
//{
//	int n = 0;
//	int arr[100001] = {0};
//	int k = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		arr[k] = k;
//	}
//	for(i = 1; i < 100001; i++)
//	{
//		if(arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}



//С�������ַ���
//int main()
//{
//    char arr[8000] = {0};
//    scanf("%s", &arr);
//    long long c =0;
//    long long ch = 0;
//    long long chn = 0;
//    char *p = arr;
//    while(*p != '\0')
//    {
//        if(*p == 'C')
//        {
//            c++;
//        }
//        else if(*p == 'H')
//        {
//            ch += c;
//        }
//        else if(*p == 'N')
//        {
//            chn += ch;
//        }
//        *p++;
//    }
//    printf("%lld\n", chn);
//    return 0;
//}



//С���ּ��㺯��
//int max3(int x, int y, int z)
//{
//    int max = x>y?x:y;
//    return (max>z?max:z);
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    float m = 0.0;
//    m = ((float)max3(a+b,b,c))/(max3(a,b+c,c) + max3(a, b, b+c));
//    printf("%.2f\n", m);
//    return 0;
//}