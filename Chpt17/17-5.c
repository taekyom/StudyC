#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct vision //����ü ����
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); //�÷��� �ٲٴ� �Լ�
											 //�Ű������� ��ȯ�� ��� ����ü(��� : struct vision, �Է� : struct vision robot)

int main()
{
	struct vision robot; //����ü ���� ����

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);                 //�����;��� ����ü������ �ҷ����� �ڵ����� 2���� ���� ������
	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)  //����ü ��ȯ �Լ�
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot; //����ü ���� ��ȯ
}