#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char alpha;
	char small; //�ҹ��� ��ȯ ���� ����
	char big;   //�빮�� ��ȯ ���� ����
	            //���⼭�� ���� �ϰ� alpha���� ���� ������ ����� ���� �� ����

	printf("���ĺ� �ϳ��� �Է��ϼ��� : ");
	scanf("%c", &alpha);
	
	if ((alpha >= 'A') && (alpha <= 'Z')) //�빮�ڸ�
	{
		small = alpha + ('a' - 'A');      //scanf�� alpha���� �޾����Ƿ� ���ǽ� �ȿ��� ����� ����
		printf("�ҹ��ڷ� ��ȯ : %c", small);
	}
	else if ((alpha >= 'a') && (alpha <= 'z'))//�ҹ��ڸ�
	{
		big = alpha - 32;
		printf("�빮�ڷ� ��ȯ : %c", big);
	}
	else //���ĺ� �ܿ� ���ڸ� �Է����� ��
	{
		printf("���ĺ����� �ٽ� �Է����ּ���!");
	}

	return 0;
}