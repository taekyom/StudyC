#include<stdio.h>

enum season{SPRING, SUMMER, FALL, WINTER}; //������(enum) ����, enum�� ũ��� 4byte�� ����

int main()
{
	enum season ss; //������ ���� ����
	char* pc = NULL;

	ss = SPRING;    //���� ��� �� ����
	switch(ss)      //���� ��� �Ǵ�
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("���� ���� Ȱ�� => %s\n", pc);
	printf("%d %d %d %d", SPRING, SUMMER, FALL, WINTER); //���������� �⺻���� 0���� ���ʷ� ����ȭ�� ��(�ʱ�ȭ���ָ� �޶���)

	return 0;
}
//���ڰ� �ƴ� ���ڷ� ǥ���� �� �����Ƿ� ������ ��� �� ����� ���忡�� ����ϱ� ��