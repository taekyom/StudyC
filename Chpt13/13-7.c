#include<stdio.h>

void add_ten(int* pa);

int main()
{
	int a = 10;

	add_ten(&a); //a�� �ּҸ� �ְ� add_ten �Լ� ȣ��
	printf("a : %d\n", a);

	return 0;
}
void add_ten(int *pa) //������ pa�� a�� �ּҸ� ����
{
	*pa = *pa + 10;  //������ pa�� ����Ű�� ������ �� 10 ����
}
//call by value(���� ���� ȣ��) : ���� ������ ���� ����, ������ good
//call by reference(������ ���� ȣ��) : �ּ� ���� ���, ���� ������ ���� �� ���� �� call by value�� default