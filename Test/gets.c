#include<stdio.h>

int main()
{
	int i = 0;
	char str[20];
	char ch;

	do {                 //do~while�� : ������ �ѹ� ���� �� ���� �˻�
		ch = getchar();  //���� �ϳ� �Է�
		str[i] = ch;     //�迭 str�� ����
		i++;
	} while (ch != '\n');//�Էµ� ���ڰ� �����̸� ����
	
	str[i] = '\n';       //���� ���ڰ� �Էµ� ��ġ�� NULL ���� ����
	printf("%s", str);
	return 0;
}