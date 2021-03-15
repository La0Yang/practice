#include<stdio.h>
#include<math.h>

//KiKi有一个矩阵，他想知道经过k次行变换或列变换后得到的矩阵。请编程帮他解答。
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = {0};
//    scanf("%d%d", &n, &m);
//    //输入矩阵数据
//    int i = 0;
//    int j = 0;
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;//操作的次数
//    scanf("%d", &k);
//    int r = 0;
//    for(r = 0; r < k; r++)
//    {
//        //转置一次
//        char t = 0;
//        int a = 0;
//        int b = 0;
//        getchar();//消除上次输入时留下的\n
//        scanf("%c %d %d", &t, &a, &b);
//        if(t == 'r')
//        {
//            //交换行
//            for(i = 0; i < m; i++)
//            {
//                int tmp = arr[a-1][i];
//                arr[a-1][i] = arr[b-1][i];
//                arr[b-1][i] = tmp;
//            }
//        }
//        else if(t == 'c')
//        {
//            //交换列
//            for(i = 0; i < n; i++)
//            {
//                int tmp = arr[i][a-1];
//                arr[i][a-1] = arr[i][b-1];
//                arr[i][b-1] = tmp;
//            }
//        }
//    }
//    //打印
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



//KiKi知道什么叫杨辉三角之后对杨辉三角产生了浓厚的兴趣，他想知道杨辉三角的前n行，请编程帮他解答。
//杨辉三角，本质上是二项式(a+b)的n次方展开后各项的系数排成的三角形。其性质包括：每行的端点数为1， 一个数也为1；
//每个数等于它左上方和上方的两数之和

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



//KiKi和BoBo玩 “井”字棋。也就是在九宫格中，只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，就能获胜。
//请根据棋盘状态，判断当前输赢。

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
//    //判断输赢
//    for(i = 0; i < 3; i++)
//    {
//        //三行
//        if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
//        {
//            flag = arr[i][0];
//            break;
//        }
//        //三列
//        if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
//        {
//            flag = arr[0][i];
//            break;
//        }
//    }
//    //对角线
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



//小乐乐在课上学习了二进制八进制与十六进制后，对进制转换产生了浓厚的兴趣。
//因为他的幸运数字是6，所以他想知道一个数表示为六进制后的结果。请你帮助他解决这个问题
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



//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答
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


//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，
//但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题

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



//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。

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



//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法
//斐波那契数列变形

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


//老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。
//但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
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



//小乐乐与字符串
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



//小乐乐计算函数
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