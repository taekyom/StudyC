#include <stdio.h>

void fruit(int count);

int main()
{
	fruit(1); //ó�� ȣ���ϹǷ� 1 �� 

	return 0;
}

void fruit(int count)       //ȣ�� Ƚ���� count�� ����
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);       //��ȣ���� �� ȣ�� Ƚ�� +1
}
//apple�� 3���� ��µǴ� ��� ȣ�� �Լ�