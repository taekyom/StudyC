//���� �Ƕ�̵� �����2

#include<stdio.h>

int main()
{
    int x, y, z;

    for (x = 1; x < 10; x++)
    {
        for (y = 0; y < 10 - x; y++)  //���� ���� 9 ~ 1������ ����� for��      
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