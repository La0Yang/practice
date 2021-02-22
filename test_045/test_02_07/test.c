#include<stdio.h>
#include<math.h>


//int main()
//{
//	int w = 0;
//	int h = 0;
//	while(~scanf("%d %d", &w, &h))
//	{
//		float bmi = w/(h*h/100.0/100.0);
//		if(bmi<18.5)
//			printf("Underweight\n");
//		else if(bmi>=18.5 && bmi<=23.9)
//			printf("Normal\n");
//		else if(bmi>23.9 && bmi<=27.9)
//			printf("Overweight\n");
//		else
//			printf("Obese\n");
//	}
//	return 0;
//}



//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//
//	while(~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if(a!=0.0)
//		{
//			//一元二次方程
//			double disc = b*b - 4*a*c;
//			if(disc>0.0)
//			{
//				printf("x1=%.2lf;x1=%.2lf\n", (-b-sqrt(disc))/(2*a), (-b+sqrt(disc))/(2*a));
//			}
//			else if(disc<0.0)
//			{
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lf\n",
//					(-b)/(2*a),
//					sqrt(-disc)/(2*a),
//					(-b)/(2*a),
//					sqrt(-disc)/(2*a));
//			}
//			else
//			{
//				printf("x1=x2=%.2lf", (-b)/(2*a));
//			}
//		}
//		else
//		{
//			printf("Not quadratic equation\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int y = 0;
//	int m = 0;
//
//	int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//
//	while(~scanf("%d %d", &y, &m))
//	{
//		int day = days[m-1];
//		if((y&4 == 0 && y&100 != 0) || (y%400 == 0))
//		{
//			if(m == 2)
//				day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}



//int main()
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char op = 0;
//	while(~scanf("%lf%c%lf", &n1, &op, &n2))
//	{
//		switch(op)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf%", n1, n2, n1+n2);
//			break;
//		case'-':
//			printf("%.4lf-%.4lf=%.4lf%", n1, n2, n1-n2);
//			break;
//		case'*':
//			printf("%.4lf*%.4lf=%.4lf%", n1, n2, n1*n2);
//			break;
//		case'/':
//			{
//				if(n2 == 0.0)
//				{
//					printf("Wrong!Division by zero\n");
//				}
//				else
//				{
//					printf("%.4lf/%.4lf=%.4lf", n1, n2, n1/n2);
//				}
//			}
//			break;
//		default:
//			printf("Invalid operation!\n");
//		}
//	}
//
//	return 0;
//}



