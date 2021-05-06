#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int)); //�޸� ���� �Ҵ� 
	if(pi == NULL)                  //���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
	{
		printf("# �޸𸮰� �����մϴ�.\n");
		exit(1); //���α׷� ��������
	}

	pd = (double*)malloc(sizeof(double));//�޸� ���� �Ҵ� 

	*pi = 10; //�����ͷ� ���� �Ҵ� ���� ���
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi); //���� �Ҵ���� �޸� ���� ��ȯ
	free(pd);

	return 0;
}
//malloc-free : �Ҵ� �Լ�(���-����)
//new-delete : ������(���-����)
//������ : �ʱ�ȭ�� ��Ű�� ���ؼ� ���
//NULL : �� ������, �ּҸ� �Ҵ���� ���߱� ������ ���ϰ��� ����
//exit(1) : ��������