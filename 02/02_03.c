/*two_func.c --一个文件中包含2个函数*/
#include <stdio.h>
void butler(void);

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, Bring me some tea and whiteable DVDs.\n");

    return 0;
}

void butler(void)
{
    printf("You rang, Sir?\n");
}