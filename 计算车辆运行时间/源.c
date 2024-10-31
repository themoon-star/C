#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum1, sum2;
	int hour3 = 0;
	int minute3 = 0;
	int hour1 = 0; 
	int hour2 = 0;
	int minute1 = 0;
	int minute2 = 0;
	scanf("%d %d" ,&sum1, &sum2);
	hour1 = sum1 / 100;
	hour2 = sum2 / 100;
	minute1 = sum1 - 100 * hour1;
	minute2 = sum2 - 100 * hour2;
	if (minute1 <= minute2)
	{
		minute3 = minute2 - minute1;
		hour3 = hour2 - hour1;
		printf("%02d:%02d", hour3, minute3);
	}
	else
	{
		minute3 = 60 - minute1 + minute2;
		hour3 = hour2 - hour1 - 1;
		printf("%02d:%02d", hour3, minute3);
	}

	return 0;
}