// 最高点を求める
#include <stdio.h>

#define NUMBER 5 // 学生の人数

int point[NUMBER]; // 配列の定義

int top(void); // 関数topの関数原型宣言

int main(void)
{
    extern int point[]; // 配列の宣言（省略可）

    printf("%d人の点数を入力してください．\n", NUMBER);
    for (int i = 0; i < NUMBER; i++)
    {
        printf("%d：", i + 1);
        scanf("%d", &point[i]);
    }
    printf("最高点＝%d\n", top());

    return 0;
}

//--- 配列pointの最大値を返す関数topの関数定義 ---//
int top(void)
{
    extern int point[]; // 配列の宣言（省略可）
    int max = point[0];

    for (int i = 0; i < NUMBER; i++)
    {
        if (point[i] > max)
        {
            max = point[i];
        }
    }
    return max;
}