//������������º�����ϰ getchar��putchar

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char grade1, grade2;
	grade1 = getchar();                         //��һ���ַ�
	getchar();                                  //�ڶ����ַ����س���
	grade2 = getchar();                         //�������ַ�
	printf("The first grade is:");
	putchar(grade1);
	putchar('\n');
	printf("The second grade is:");
	putchar(grade2);
	putchar('\n');

    return  0;
}
