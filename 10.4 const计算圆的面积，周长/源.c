//const计算圆的面积与周长
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	const double pi = 3.1415926;
	double r;
	printf("请输入半径:");
	scanf("%lf", &r);
	printf("圆的面积area=%.2f\n", pi * r * r);
	printf("圆的周长C=%.2f\n", pi * 2 * r);
	return 0;
}