#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char animal[5][20]; //2���� �迭 ����
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); //(��ü �迭 ũ��)100/(0�� index�� ũ��, �� ����)20 = 5
	for (i = 0; i < count; i++) //���� ������ŭ �ݺ� : 5�� �ݺ�
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++) 
	{
		printf("%s ", animal[i]);
	}

	return 0;
}