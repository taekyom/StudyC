#include<stdio.h>

int main()
{
	char str[80];
	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin); //stdin : �Է¿� ���õ� filestream, fgets : �ִ� �迭�� ũ������� ���ڿ��� �Է�(�迭 ũ�� Ȯ�� �Լ�)
	//���߿� �Է��� �����Դϴ�.
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);
	return 0;
}