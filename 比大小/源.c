#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n;
    printf("请输入整数的个数 n：");
    scanf("%d", &n);

    int a[999];
    printf("请输入 %d 个整数：\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] < a[j + 1]) 
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    printf("从大到小排序后的结果为：\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("从小到大排序后的结果为：\n");
    for (int k = n; k > 0; k--)
    {
        printf("%d ", a[k-1]);
    }
    printf("\n");

    return 0;
}