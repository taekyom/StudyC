#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* pi; //������ ���� ����
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int)); //������� 20byte �Ҵ�
	if (pi == NULL)                     //�޸𸮰� ������ �� ���� ó�� ����
	{
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);                        //���α׷� ����
	}

	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);            //�迭��ҿ� �Է�
		sum += pi[i];                   //�迭��� �� ����
	}
	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);                           //�Ҵ��� �޸� ���� ��ȯ(����)

	return 0;
}