#include<stdio.h>

int main()
{
	char str[80] = "apple juice";
	char* ps = "banana"; 

	puts(str);         //puts : apple juice ����ϰ� �ڵ� ����
	fputs(ps, stdout); //fputs : �ڵ� ����X, �ش�Ǵ� ���Ͻ�Ʈ�� �Է� �ʼ�
	puts("milk");

	return 0;
}
//����� const : ���� �Ѽվ��� �״�� ����ϱ� ����(����� ���� ���, �Է½ÿ��� ���X)