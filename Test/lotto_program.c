/*
	�ζ� ���α׷�

	Date : 2021-05-03
	Author : ���°�
	Description :
	1. �ζǹ�ȣ�� ������ �� �ִ� �迭 ���� : lotto[6]
	2. �ζǹ�ȣ �Է� : ó������ ��ȣ �Է� �� ������ ��ȣ���� �˻� �� �Է½�Ŵ
					   ������ ��ȣ �Է� �� ���� �޼��� ����ϰ� �ٽ� �Է�  
					   input_lotto(), print_lotto()
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;;

void input_lotto(int* lotto, int size);
void print_lotto(int* lotto, int size);

int main()
{
	int lotto[6];

	input_lotto(lotto, sizeof(lotto));
	print_lotto(lotto, sizeof(lotto));

	return 0;
}

void input_lotto(int* lotto, int size)
{
	int i;     //index ��ȣ
	int count=0; //�Է�Ƚ��
	int temp;  //�Է°��� �����ϴ� �ӽú���

	while (count < 6)
	{
		printf("�ζ� ��ȣ�� �Է��ϼ��� : ");
		scanf("%d", &temp);

		if (count == 0)      //ù��°�� �Է��� ��
		{
			lotto[count] = temp; //ù��° ���� 0�� index�� ����
		}
		else //�ι�° �Էº���~
		{
			for (i = 0; i < count; i++)    //0~5���� 6�� �ݺ�
			{
				if (temp == lotto[i])  //�ߺ��� ��
				{
					printf("�ߺ��� ��ȣ�� �����մϴ�. �ٸ� ��ȣ�� �Է��ϼ���.\n");
					count--;
					break;
				}
				else //�ߺ� �ƴ� ��
				{
					lotto[count] = temp;
				}
			}
		}
		count++;
	}
}

void print_lotto(int* lotto, int size)
{
	int count;

	for (count = 0; count < 6; count++) {
		printf("����� ������ �ζ� ��ȣ�� %d�Դϴ�.\n", lotto[count]);
	}
}