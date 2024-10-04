#define _CRT_SECURE_NO_WARNINGS
//复习日期格式
#include<stdio.h>
int main()
{
	int year, month, day;
	printf("请输入一个标准的日期格式(YYYY-MM-DD):\n");
	scanf("%d-%d-%d",&year,&month,&day);
	printf("中国的日期格式为%d年%d月%d日\n",year,month,day);
	printf("英国的日期格式为%d/%d/%d\n",day,month,year); 
	printf("美国的日期格式为%d/%d/%d\n",month,day,year);

	return 0;
}