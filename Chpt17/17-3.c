#include<stdio.h>

struct profile //����ü ����
{
	int age;
	double height;
};

struct student //����ü ����
{
	struct profile pf; //profile ����ü�� ����� ���, ���� ������ ����ü�� ���� ����ü�� ����� ��� ����(�ݴ�� �Ұ���)
	int id;
	double grade;
};

int main()
{
	struct student yuni; //����ü ���� ����

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);

	return 0;
}