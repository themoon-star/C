//输入与输出的新函数练习 getchar与putchar

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char grade1, grade2;
	grade1 = getchar();                         //第一个字符
	getchar();                                  //第二个字符（回车）
	grade2 = getchar();                         //第三个字符
	printf("The first grade is:");
	putchar(grade1);
	putchar('\n');
	printf("The second grade is:");
	putchar(grade2);
	putchar('\n');

    return  0;
}
