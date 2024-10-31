//题目描述
//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 
// 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
//输入格式
//M N
//输出格式
//它在第N次落地时反弹多高？共经过多少米？ 保留两位小数，空格隔开，放在一行
//样例输入
//1000 5
//样例输出
//31.25 2875.00
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int  n;
	double h ;
	double s;
	int i;
	scanf("%lf %d",&h,&n);
	s = h;
	for (i = 1; i < n; i++)
	{
		
		h = h / 2;
		s += 2 * h;
		

	}
	h = h / 2;
	printf("%.2f %.2f",h,s);
	return 0;

}