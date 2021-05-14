#include<stdio.h>

void hanoi(int n, int start, int work, int target);

void main()
{
	hanoi(5, 'A', 'B', 'C'); //�Լ�ȣ��(������ ����, ��1, ��2, ��3)
	getchar();
}

void hanoi(int n, int start, int work, int target)
{
	if (n == 1)
	{
		printf(" %c���� ���� %d��(��) %c�� �ű� \n", start, n, target);
	}
	else
	{
		hanoi(n - 1, start, target, work); //�Լ� ���ȣ��
		printf(" %c���� ���� %d(��)�� %c�� �ű� \n", start, n, target);
		hanoi(n - 1, work, start, target);
	}
}