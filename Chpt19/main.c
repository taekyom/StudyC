//�ҽ�����
#include<stdio.h>    //�ý��� ��� ���� ���� ����
#include "student.h" //����� ���� ��� ���� ���� ����

int main()
{
	Student a = { 315, "ȫ�浿" }; //����ü ���� ���� �� �ʱ�ȭ

	printf("�й� : %d, �̸� : %s\n", a.num, a.name);

	return 0;
}