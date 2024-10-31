
//题目描述
//给出一个不多于5位的整数，要求 1、求出它是几位数 
// 2、分别输出每一位数字 
// 3、按逆序输出各位数字，例如原数为321, 应输出123
//输入格式
//一个不大于5位的数字
//输出格式
//三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
//样例输入
//12345
//样例输出
//5
//1 2 3 4 5
//54321
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{	
//	int a,len,b,c,d,e,f;
//	scanf("%d", &a);
//	if (a / 10000 != 0)
//	{
//		len = 5;
//		b= a / 10000;
//		c = (a % 10000) / 1000;
//		d = (a % 10000 % 1000) / 100;
//		e = (a % 10000 % 1000 % 100) / 10;
//		f= a % 10000 % 1000 % 100%10;
//		printf("%d\n%d %d %d %d %d\n%d%d%d%d%d", len, b, c, d, e, f, f, e, d, c, b);
//	}
//	else if (a / 1000 != 0)
//	{
//		len = 4;
//		c = a/1000;
//		d = (a  % 1000) / 100;
//		e = (a  % 1000 % 100) / 10;
//		f = a  % 1000 % 100 % 10;
//		printf("%d\n%d %d %d %d\n%d%d%d%d", len,c, d, e, f, f, e, d, c);
//	}
//	else if (a / 100 != 0)
//	{
//		len = 3;
//		d = a / 100;
//		e = (a  % 100) / 10;
//		f = a % 100 % 10;
//		printf("%d\n%d %d %d\n%d%d%d", len, d, e, f, f, e, d);
//	}
//	else if (a / 10 != 0)
//	{
//		len = 2;
//		e = a  / 10;
//		f = a % 10;
//		printf("%d\n%d %d\n%d%d", len,  e, f, f, e);
//	}
////	else
////	{
////		len = 1;
////		f = a;
////		printf("%d\n%d\n%d", len, f, f);
////	}
////	return 0;
////}       
//#include <stdio.h>
//#include <string.h>         //C语言字符串头文件，strlen() 函数包含在此内
//
//int main()
//{
//    char str[10];                       //定义字符串长度为 10
//    scanf("%s", str);                   //输入数字 (作为字符串输入)
//
//    int len = strlen(str);              //获取字符串长度
//    printf("%d\n", len);                //输出字符串长度，即为数字位数
//    for (int i = 0; i < len; i++)       //从左往右遍历输出
//    {
//        printf("%c ", str[i]);
//    }
//    printf("\n");                       //输出回车
//    for (int i = len - 1; i >= 0; i--)  //从右往左遍历输出
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}
//题目描述
//有三个整数a b c, 由键盘输入，输出其中的最大的数。
//输入格式
//一行数组，分别为a b c
//输出格式
//a b c其中最大的数
//样例输入
//10 20 30
//样例输出
//30
#include<stdio.h>
int main()
{
	int a, b, c, max;
	scanf(" % d % d % d", &a, &b, &c);
	if (a > b && b > c)
	{
		max = a;
	}
	if (a > c && c > b)
	{
		max = a;
	}
	if (b > a && a > c)
	{
		max = b;
	}
	if (b > c && c > a)
	{
		max = b;
	}
	if (c > b && b > a)
	{
		max = c;
	}
	if (c > a && a > b)
	{
		max = c;
	}
	printf("%d", max);
	return 0;

}