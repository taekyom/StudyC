#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int res;
	char ch;

	while(1)
	{
		res = scanf("%c", &ch); //���� �Է�, ctrl+z �� -1 ��ȯ �� �Է� ����
		if (res == -1) break;   //��ȯ���� -1�̸� ����(-1=EOF(End Of File))
		printf("%d ", ch);      //�Էµ� ������ �ƽ�Ű �ڵ� �� ���
	}
	return 0;
}