#include<stdio.h>

int main()
{
	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");  //"apple"�� ��ǻ� &apple�� ���� �ǹ� �� �ᱹ ���ڿ��� �ּҸ� ��Ÿ��
	printf("�ι�° ������ �ּ� �� : %p\n", "apple" + 1);
	printf("ù��° ���� : %c\n", *"apple");
	printf("�ι�° ���� : %c\n", *("apple" + 1));           //������ �����
	printf("�迭�� ǥ���� ����° ���� : %c\n", "apple"[2]); //�迭 ǥ����

	return 0;
}
//���ڿ��� �ּ� �� �����ͷ� ��� ����