#include <stdio.h>

union student //����ü ����
{             //����ü ���
	int num;
	double grade;
};

int main()
{
	union student s1 = { 3.14 }; //����ü ���� ���� �� �ʱ�ȭ

	printf("�й� :%d\n", s1.num);
	s1.grade = 4.4;             //grade ����� 4.4(��) ����
	printf("���� : %.1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num);
	s1.num = 315;
	printf("�й� : %d\n", s1.num);
	printf("%d\n", sizeof(s1)); //����ü�� ��� �� ���� ū �ڷ����� ã�Ƽ� �޸� �Ҵ�, �������� �Ҵ���� ������ ����

	return 0;
}