// 配列の各要素に先頭から順に１〜５を代入して表示(for文を使う)
#include <stdio.h>

int main(void)
{
    int a[5]; // int[5]型の配列

    for (int i = 0; i < 5; i++)
    {
        a[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}