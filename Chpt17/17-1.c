#include<stdio.h>

struct student     //����ü ����(����� ����ü�̸�) : �Լ� ���� �� X, ������ OK
{				   //����ü ���
	int num;
	double grade;
};                 //�����ݷ� �ʼ�

int main()
{
	struct student s1; //struct student�� ���� ����

	s1.num = 2;        //s1�� num ����� 2 ����
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);

	return 0;
}