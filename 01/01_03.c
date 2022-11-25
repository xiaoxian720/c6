#include <stdio.h>

int main(void)
{
    int inch;
    int cm;
    printf("请输入英寸值：\n");
    scanf("%f",&inch);
    cm = 2.54 * inch;
    printf("经计算：%f英寸=%f厘米",inch,cm);
    return 0;
}