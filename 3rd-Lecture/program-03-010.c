// 配列を用いて例1をプログラムする
#include <stdio.h>
#define NUM 5

int main(void)
{
    int point[NUM]; // int[5]型の配列を用意
    int sum = 0;    // 合計点

    printf("%d人の点数を入力せよ．\n", NUM);

    for (int i = 0; i < NUM; i++)
    {
        printf("%d番：", i + 1);
        scanf("%d", &point[i]);
        sum += point[i];
    }

    printf("合計点：%5d\n", sum);
    printf("平均点：%5.1f\n", (double)sum / NUM);

    return 0;
}