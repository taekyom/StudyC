#include<stdio.h>

void add_ten(int a);

int main()
{
	int a = 10;

	add_ten(a); //a�� �����ؼ� ����
	printf("a :%d\n", a);

	return 0;
}
void add_ten(int a) //main�� a�� �ٸ� �������� ���� ���� �Ҵ�
{
	a = a + 10; //a = 20
}