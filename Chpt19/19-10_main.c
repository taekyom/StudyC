#include <stdio.h>
#include "19-10_point.h" 
#include "19-10_line.h"  

int main()
{
	Line a = { {1, 2}, {5, 6} }; //line ����ü ���� �ʱ�ȭ
	Point b;                     //��� ���� ��ǥ ����

	b.x = (a.first.x + a.second.x) / 2; //��� ���� x��ǥ ���
	b.y = (a.first.y + a.second.y) / 2; //��� ���� y��ǥ ���
	printf("���� ��� ���� ��ǥ : (%d, %d)\n", b.x, b.y);

	return 0;
}