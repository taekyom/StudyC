#include<stdio.h>
#define VER 7 //ġȯ�� �κ��� �ִ� ��ũ�� ����
#define BIT16 //ġȯ�� �κ��� ���� ��ũ�� ����

int main()
{
	int max;

#if VER >= 6                         //��ũ�θ� VER�� 6�̻��̸�~
	printf("���� %d�Դϴ�.\n", VER); //�� ���� ������
#endif

#ifdef BIT16                         //��ũ�θ� BIT16�� ���ǵǾ� ������~
	max = 32767;                     //�� ���� ������
#else
	max = 2147483647;
#endif 

	printf("int�� ������ �ִ밪 : %d\n", max);

	return 0;
}