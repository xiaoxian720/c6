#include <stdio.h>

int main(void)
{
    int inch;
    int cm;
    printf("������Ӣ��ֵ��\n");
    scanf("%f",&inch);
    cm = 2.54 * inch;
    printf("�����㣺%fӢ��=%f����",inch,cm);
    return 0;
}