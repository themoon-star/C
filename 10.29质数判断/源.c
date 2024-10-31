/*题目内容：
以每行8个的形式输出100 - 999内的质数。
输出格式：
每行输出8个质数（最后一行可以不到8个），每个质数的输出格式控制符为"%4d"，最后一行输完后，输出一个"\n"
输出样例：
101 103 107 109 113 127 131 137
139 149 151 157 163 167 173 179*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int b = 0;
	for (int j = 100; j <= 999; j++)
	{
		for (i = 2; i < j; i++)
		{
			if (j % i == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%4d", j);
			b++;
			if (b == 8)
			{
				printf("\n");
				b = 0;
			}
		}
	}
	return 0;
}