#include<stdio.h>

struct student //����ü ����
{
	int num;
	double grade;
};

typedef struct student Student;     //Student������ ������
//������ �� �ٷ� �������ϴ� ���� �� ����(������ �ϸ� �ߺ��ǹǷ�)
//typedef struct //�������� ���̹Ƿ� ����ü �̸� ��������
//{
//	  int num;
//	  double grade;
//}Student;
void print_data(Student* ps);

int main()
{
	Student s1 = { 315, 4.2 };      //Student�� ������ ����� �ʱ�ȭ

	print_data(&s1);

	return 0;
}

void print_data(Student *ps)
{
	printf("�й� : %d\n", ps->num); //Student �����ͷ� ����� ����
	printf("���� : %.1lf\n", ps->grade);
}