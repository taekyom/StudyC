//����Ž�� : ��ü �迭�� ������ ������ Ž��, ����Ž������ �ð��� ���� �ɸ�
#include<stdio.h>

int BSearch(int* pary, int sz, int tg) 
{
	int first = 0;
	int last = sz - 1;
	int mid;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (tg == pary[mid])
		{
			return mid;
		}
		else
		{
			if (tg > pary[mid])
			{
				first = mid + 1;
			}
			else
			{
				last = mid - 1;
			}

		}
	}
	return -1;
}

int main()
{
	int index;
	//int ary[] = { 3, 5, 8, 2, 7, 6, 1 };
	int ary[] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(ary) / sizeof(ary[0]);
	index = BSearch(ary, size, 1);
	if (index == -1)
	{
		printf("Ž�� ����!\n");
	}
	else
	{
		printf("���ȣ : %d\n", index);
	}

	return 0;
}