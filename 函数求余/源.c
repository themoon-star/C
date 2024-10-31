//КЏЪ§Чѓгр
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int chu(int x,int y)
{
	int z = 0;
	z =  x % y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = chu(a, b);
	printf("c=%d", c);

	return 0;
}
