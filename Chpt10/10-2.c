#include<stdio.h>

int main()
{
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;              //ù��° �迭 ��ҿ� 10 ����
	*(pa + 1) = 20;        //�ι�° ��ҿ� 20 ����
	pa[2] = pa[0] + pa[1]; //���ȣ�� �Ἥ pa�� �迭��ó�� ���

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
	return 0;
}