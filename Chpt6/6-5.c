#include <stdio.h>

int main()
{
	int i;        //�ݺ�Ƚ�� ī��Ʈ
	int sum = 0;  //1~10���� �� ����

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break; //���� 30�� ������ �ߴ�(break)�ϰ� for�� Ż��
	}

	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);

	return 0;
}
//1~10���� ���� ���ϴ� ���� ���� 30�� ������ �ߴ�
