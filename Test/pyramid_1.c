//���� �Ƕ�̵� �����

#include<stdio.h>

int main()
{
	int x, y, z, a;

	for (x = 0; x < 7; x++)
	{
		for (y = 6; y > x; y--) //���� ���� ����� for��
		{
			printf(" ");
		}
		for (z = 0; z < x; z++) //���� ����¥�� �� ����� for��, x=0�� �� z < x ���� ���ϹǷ� ù �� ����
		{
			printf("*");
		}
		for (a = 1; a < x; a++) //������ ����¥�� �� ����� for��, �� ���� �� 1�� ��� for��
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}