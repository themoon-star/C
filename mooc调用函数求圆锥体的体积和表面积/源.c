/*题目内容：

编写两个函数，分别求圆锥体的体积和表面积。从main函数中输入圆锥体的高和半径，
调用两个自定义函数分别求出对应的体积和表面积，并输出完整信息。
提示 : 圆周率取3.14
输入格式:
scanf("%lf%lf", &r, &h);//要求输入两个实数，表示圆锥体的高和半径

输出格式：
输出圆锥体的半径、高、表面积和体积
printf语句中的格式串请复制  "radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n"

输入样例：
6 8

输出样例：
radius = 6.000000, height = 8.000000, Area of surface = 301.440000, Volume = 301.440000*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
const double PI = 3.14;
double calculateVolume(double m,double n)
{ 
	return (double) PI * m * m * n / 3;
}
double calculateSurfaceArea(double p, double q)
 { 
	 return (double)PI * p * (p + sqrt(p * p + q * q));
 }
 int main()
 {
	 double r, h;
	 scanf("%lf%lf", &r, &h);
	 double volume = calculateVolume(r, h);
	 double area = calculateSurfaceArea(r, h);
	 printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n", r, h, area, volume);
	 return 0;
 }
