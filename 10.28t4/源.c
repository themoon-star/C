//本题要求编写程序, 计算序列 1 - 1 / 4 + 1 / 7 - 1 / 10 + ... 的前N项之和。
//
//输入格式 :
//输入在一行中给出一个正整数N。
//3
//输出格式 :
//在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int N,i;
	double sum=0.0;
	double b;
	scanf("%d",&N);
	for (i = 0; i < N; i++)
	{
		 b = (i % 2 == 0 ? 1.0 : -1.0) / (3 * i + 1);
		sum += b;
	}
	printf("sum=%.3f", sum);
	return 0;
}





