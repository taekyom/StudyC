#include<stdio.h>

int main()
{
	int a = 10;
	double b = 3.5;
	void* vp; //void ������

	vp = &a;
	printf("a : %d\n", *(int*)vp); //*(int*)vp : vp�� int������ ��������ȯ �� void �������� ���� �����͸� �о�� �� ũ�⸦ ��Ȯ�ϰ� �����ؾ� ��

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}
//void�����ʹ� ��� �ڷ����� ��� ����