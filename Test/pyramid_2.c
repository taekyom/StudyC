//별로 피라미드 만들기2

#include<stdio.h>

int main()
{
    int x, y, z;

    for (x = 1; x < 10; x++)
    {
        for (y = 0; y < 10 - x; y++)  //여백 개수 9 ~ 1개까지 만드는 for문      
        {
            printf(" ");
        }
        for (z = 0; z < x * 2 - 1; z++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}