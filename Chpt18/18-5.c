#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int ch;
	while(1)
	{
		ch = fgetc(stdin); //Ű���忡�� ���� �Է�
		if (ch == EOF)     //ctrl+z�� �Է� ����
		{
			break;
		}
		fputc(ch, stdout); //ȭ�鿡 ���� ���
	}

	return 0;
}
//getchar() == fgetc(stdin)
//putchar(ch) == fputc(ch, stdout)