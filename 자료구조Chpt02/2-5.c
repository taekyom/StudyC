#include<stdio.h>

void main()
{
	int i;
	int length = 0;
	char str[50];
	
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str); //gets : ���ڿ� �Է��Լ�, str�� ����
	
	printf("\n �Էµ� ���ڿ��� \"");
	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		length += 1;
	}
	printf("\" �Դϴ�");
	printf("\n\n �Էµ� ���ڿ��� ���� = %d\n", length);

	getchar(); //�ٷ� �������� �ʰ� ���͸� ġ�� �����ϱ� ���� ���� �Է� �ñ��� ��ٸ�
}