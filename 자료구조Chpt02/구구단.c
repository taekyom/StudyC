#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	char s;

	while (1)
	{
		printf("�� ���� ����ұ��? : ");
		scanf("%d", &n);

		for (i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", n, i, n * i);
		}
		printf("\n�����Ͻðڽ��ϱ�?(Y/N)\n");
		scanf(" %c", &s);
		if (s == 'Y') break;
	}

	return 0;
}
//����ڰ� �Է��ϴ� ��(n)�� ���� �������� �޶���
//�����Ϸ��� Ư�� ���ڸ� �Է��ؾ� �ϰ� �� �������� ���ѹݺ�