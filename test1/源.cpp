#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	scanf("a=%d,b=%d", &a, &b);   //此时要给a,b赋值，则要输入a=...,b=....
	printf("a=%d,b=%d", a, b);
	return 0;
}