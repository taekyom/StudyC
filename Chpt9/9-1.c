#include<stdio.h>
#include<string.h>

int main()
{
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %u\n", &a);    //�ּҿ�����&�� ����� �ּ� ���
	printf("double�� ������ �ּ� : %u\n", &b); //%u : ��� ���, %p : pointer�� ���(���� �ּҴ� pointer�� ���)
	printf("char�� ������ �ּ� : %u\n", &c);

	return 0;
}

//�ּ� : �Ҵ�� �޸��� ���� �ּ�, �ּҿ�����&�� ����� �ּ� ���