//���� P.558~
#include<stdio.h>

int LSearch(int* pary, int sz, int tg)
{
	int i;
	for ( i = 0; i < sz; i++)
	{
		if (pary[i] == tg) //�迭 �� ��Ұ� tg�� ������ ��
		{ 
			return i;	  //ã�� ���� index�� ��ȯ
		}
	}
	return -1; //-1 : �迭�� ���� ��
}
int main()
{
	int index;
	int ary[] = { 3, 5, 8, 2, 7, 6, 1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	index = LSearch(ary, size, 10);
	if (index == -1)
	{
		printf("ã�� ����!\n");
	}
	else
	{
		printf("���ȣ : %d\n", index);
	}
	return 0;
}