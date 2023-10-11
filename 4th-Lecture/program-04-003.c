// 左下直角の直角二等辺三角形を表示
#include <stdio.h>

//--- 記号文字'*'をnこ連続して表示 ---//
void put_starts(int n)
{
    while ((n-- > 0))
        putchar('*');
}

int main(void)
{
    int len;

    printf("左下直角二等辺三角形を作ります．\n");
    printf("短辺：");
    scanf("%d", &len);

    for (int i = 1; i <= len; i++)
    {
        put_starts(i);
        putchar('\n');
    }

    return 0;
}