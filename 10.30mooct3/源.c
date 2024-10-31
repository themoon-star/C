/*计算并输出s的值。s的计算方法见下式，其中m为实数，其值由键盘读入。
计算时，要求最后一项的绝对值小于1e - 4，输出结果保留两位小数。（10分）
题目内容：

计算并输出s的值。s的计算方法见下式，其中m为实数，其值由键盘读入。
计算时，要求最后一项的绝对值小于1e - 4，输出结果保留两位小数。

输入格式:
实数m，格式控制串为"%lf"
输出格式：

式子的值，输出格式控制串为"%.2f\n"
输入样例：

0.2
输出样例：
0.18*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double fact(int n)
{
    int m = 1;
    for (int i = 1; i <=n; i++)
    {
        m *= i;
    }
    return m;
}
int main()
{
	int b=1;
	double a=1,m;
	double s = 0;
    int c = 0;
	scanf("%lf",&m);

	while(fabs(a>=1e-4))
	{
        c = b % 2 != 0 ? 1 : -1;
        a = pow(m, b) / fact(b);
		s += a*c;
		b++;
	}
	printf("%.2f\n", s);
	return 0;
}
/*
#include <stdio.h>
#include <math.h>
int F(int x)
{
    int m = 1;
    for (int i = 1; i <= x; i++)
    {
        m *= i;
    }
    return m;
}
int main()
{
    double s = 0, m, x = 1;
    int a = 1, b = 1;
    scanf("%lf", &m);
    while (fabs(x) >= 1e-4)
    {
        x = pow(m, b) / F(b) * a;
        s += x;
        a = -a;
        b++;
    }
    printf("%.2lf", s);
    return 0;
}*/
