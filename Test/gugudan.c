#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;

	printf("�� ���� ����ұ��? : ");
	scanf("%d", &n);

	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}

	return 0;
}

//����ڰ� �Է��ϴ� ��(n)�� ���� �������� �޶���