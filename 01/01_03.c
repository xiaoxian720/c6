#include <stdio.h>

int main(void)
{
    int inch;
    int cm;
    printf("������Ӣ��ֵ��\n");
    scanf("%d",&inch);
    cm = 2.54 * inch;
    printf("�����㣺%dӢ��=%d����",inch,cm);
    return 0;
}