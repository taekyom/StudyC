#include<stdio.h>
#include<string.h>

int main()
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;  //������ pt�� total�� �����ּҷ� �ʱ�ȭ
	double* pg = &avg; //������ pg�� avg�� �����ּҷ� �ʱ�ȭ

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;   //pa�� ����Ű�� �� : a, pb�� ����Ű�� �� : b, pt�� ����Ű�� ��: total
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb); //a, b �� ���
	printf("�� ������ �� : %d\n", *pt);          //total �� ���
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
}

//scanf����ؼ� pa�� ���� a�� ������� ã�� : scanf("%d", pa) �� pa ��ü�� a�� �ּҸ� �����ϹǷ� &pa��� �Ⱦ�