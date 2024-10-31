//计算抛出距离
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	const double pi = 3.1415926;
	const double g = 9.80;
	double v0;
	int theta;
	double L;
	printf("请输入初始速度v0=");
	scanf("%lf", &v0);
	printf("请输入出射角度theta=");
	scanf("%d", &theta);
	L = v0 * v0 * sin(2 * theta / 180.0 * pi) / g;
	printf("射程为%.2f", L);
	return 0;
}
