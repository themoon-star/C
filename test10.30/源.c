
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int age1, age2;
    printf("Enter age of two persons:");
    scanf("%d%d", &age1, &age2);
    printf("the order age is %d\n", age1 > age2 ? age1 : age2);
}
