#define _CRT_SECURE_NO_WARNINGS
//��ϰ���ڸ�ʽ
#include<stdio.h>
int main()
{
	int year, month, day;
	printf("������һ����׼�����ڸ�ʽ(YYYY-MM-DD):\n");
	scanf("%d-%d-%d",&year,&month,&day);
	printf("�й������ڸ�ʽΪ%d��%d��%d��\n",year,month,day);
	printf("Ӣ�������ڸ�ʽΪ%d/%d/%d\n",day,month,year); 
	printf("���������ڸ�ʽΪ%d/%d/%d\n",month,day,year);

	return 0;
}