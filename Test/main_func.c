#include<stdio.h>

int main(int argc, char* argv[])
{
	int i;
	printf("입력 개수 : %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%d번째 입력된 값 : %s\n", i + 1, argv[i]);
	}

	return 0;
}