/* ���� ������ */

#include<stdio.h>
#include "����������_user.h" //����� ���� header���� ��ũ���

int main()
{
	int n1, n2;
	int result, num;

	input_data(&n1, &n2); //�ּҰ� ����
	result = sum(n1, n2); //sum�� �޾ƿ�

	printf("�� : %d\n", result);

	return 0;
}