#include<stdio.h>

int main()
{
	int ary[5]; //1���� �迭

	printf("  ary�� �� : %u\t", ary); //�迭 ù��° �ּ�
	printf("ary�� �ּ� : %u\n", &ary); //�迭 ��ü �ּ�
	printf("   ary + 1 : %u\t", ary + 1);
	printf("   &ary +1 : %u\n", &ary + 1); //�迭 ��ü�ּ� + 1

	return 0;
}