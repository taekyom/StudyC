#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num, grade;

	printf("�й� �Է� : ");
	scanf("%d", &num);
	getchar();             //���ۿ� �����ִ� ���๮�� ����(���ۿ� ����Ǵ� ������ ���������� �׻� ���๮�ڰ� ����)
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}
//���� �� ���� �Է� �� ������ ���ڷ� �ν��ϹǷ� getchar�� ���๮�� �����ϰ� ������ ������
//���� �� ���� �Է� �ÿ��� ���� ����
//fflush�� ���ۿ� ���๮�� �����ϴ� �Լ�