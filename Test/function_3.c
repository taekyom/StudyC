/*�Է��� �ִ� �Լ�*/

#include <stdio.h>

void func(int aa, int ab); //�Լ� ����(�Լ�����) : �Է¿� ������ ��������, ������ Ÿ�Ը� �Է� ����

int main()
{
	int a, b;
	a = 10, b = 20;

	func(a, b); //�Է��� �ִ� �Լ� ȣ��
	return 0;
}

void func(int aa, int ab) //main���� ������ ������ ������ �Է�
{
	int res;
	res = aa + ab;
	printf("res : %d", res);
}
