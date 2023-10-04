// 5人の学生の点数を読み込んで合計点と平均点を表示
#include <stdio.h>

int main(void)
{
    int point1;  // 1番の点数
    int point2;  // 2番の点数
    int point3;  // 3番の点数
    int point4;  // 4番の点数
    int point5;  // 5番の点数
    int sum = 0; // 合計点

    printf("5人の点数を入力せよ．\n");
    printf("1番：");
    scanf("%d", &point1);
    sum += point1;
    printf("2番：");
    scanf("%d", &point2);
    sum += point2;
    printf("3番：");
    scanf("%d", &point3);
    sum += point3;
    printf("4番：");
    scanf("%d", &point4);
    sum += point4;
    printf("5番：");
    scanf("%d", &point5);
    sum += point5;

    printf("合計点：%5d\n", sum);
    printf("平均点：%5.1f\n", (double)sum / 5);

    return 0;
}