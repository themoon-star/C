//题目描述
//输入10个整数，求它们的平均值，并输出大于平均值的数据的个数。
//
//输入格式
//10个数
//
//输出格式
//大于平均数的个数
//
//样例输入
//1 2 3 4 5 6 7 8 9 10
//样例输出
//5
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i,a[10];
	int sum= 0;
	int k = 0;
	double pri= 0;
	for (i = 0; i <10; i++)
	{
		scanf("%d",&a[i]);
		sum = sum+a[i];	
	}
	pri = sum / 10.0;
	for (i = 0; i <10; i++)
	{
		if (a[i] > pri)k++;
	}
	printf("%d", k);
	return 0;
}
