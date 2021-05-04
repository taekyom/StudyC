#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char animal[5][20]; //2차원 배열 선언
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); //(전체 배열 크기)100/(0번 index의 크기, 방 개수)20 = 5
	for (i = 0; i < count; i++) //행의 개수만큼 반복 : 5번 반복
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++) 
	{
		printf("%s ", animal[i]);
	}

	return 0;
}