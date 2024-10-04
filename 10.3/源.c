
//日期的转换

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year, month, day;
	printf("请输入标准的日期（YYYY-MM--DD）:");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("中国的日期格式：%d年%d月%d日\n", year, month, day);
	printf("美国的日期格式：%d/%d/%d\n", month, day, year);
	printf("英国的日期格式: %d/%d/%d\n", day, month, year);
	return 0;
}