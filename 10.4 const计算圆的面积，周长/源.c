//const����Բ��������ܳ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	const double pi = 3.1415926;
	double r;
	printf("������뾶:");
	scanf("%lf", &r);
	printf("Բ�����area=%.2f\n", pi * r * r);
	printf("Բ���ܳ�C=%.2f\n", pi * 2 * r);
	return 0;
}