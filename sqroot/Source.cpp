#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int num, loop;
    scanf("%d", &num);
    if (num < 1 || num>100)
    {
        printf("Error");
        return 0;
    }
    else
    {
        for (loop = 0; loop <= num; loop++)
        {
            if (loop * loop == num)
            {
                printf("%d", loop);
                return 0;
            }
            else if (loop == num)
            {
                printf("Error");
                return 0;
            }
        }
    }

    return 0;
}
