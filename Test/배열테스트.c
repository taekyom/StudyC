#include<stdio.h>

int main()
{
	int i;
	int score[5] = { 1, 2, 3 };
	char grade[5] = { 'a', 'b', 'c' };

	for (i = 0; i < 5; i++)
	{
		//printf("%d\n", score[i]);
		printf("%c\n", grade[i]);
	}
	return 0;
}