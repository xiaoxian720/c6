//age_days.c  --将年龄转换为天数，不考虑闰年

#include <stdio.h>

int main(void)
{
    int age, days;

    age = 32;
    days = 365 * age;

    printf("My age is %d, and there are %d days.", age, days);
    
    return 0;
}