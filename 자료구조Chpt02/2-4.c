#include<stdio.h>

void main()
{
	char str[20] = "Data Structure!";
	int cnt = 0;             //for�� ��� ����Ǵ��� ���� ���� ����
	int i;
	
	printf("\n���ڹ迭 str[] : ");
	for (i = 0; str[i]; i++) //���ǽ��� �迭���� 
	{
		printf("%c", str[i]);
		cnt++;
	}
	getchar();
	printf("%d", cnt);
}