#include <stdio.h>

int a = 10, b = 20;
void swap();

int main()
{
   printf("�ٲٱ� �� a,b : %d, %d\n", a, b);
	//temp = a;
	//a = b;
	//b = temp;
   
   swap();
   printf("�ٲٱ� �� a,b : %d, %d\n", a, b);
   return 0;
}

void swap()
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}

//�� ���� �ٲٱ� ���ؼ� ���� ���� �۷ι��� ����ߴµ� ������ ��� ���� �ʴ� ���� ����
//�������� ��� �����ϱ⿡ ���� ������ ���� �� ����