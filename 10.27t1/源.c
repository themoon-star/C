//题目描述
//有一分数序列： 2 / 1 3 / 2 5 / 3 8 / 5 13 / 8 21 / 13......求出这个数列的前N项之和，保留两位小数。
//输入格式
//N
//输出格式
//数列前N项和
//样例输入
//10
//样例输出
//16.48
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	int i,n;
	int b = 2;
	int c = 1;
	
	scanf("%d",&n);
	
	double sum = 0.0;
	for (i = 0; i <n; i ++)
	{
		
		sum +=(double)b / c;
		a = b;
		b += c;
		c = a;
		

		
	}
	
	printf("%.2f", sum);

	return 0;
}