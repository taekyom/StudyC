#include<stdio.h>

void swap_ptr(char** ppa, char **ppb);

int main()
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa �� %s, pb �� %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa �� %s, pb �� %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb) //*pa�� ����Ű�� �����Ͱ��� �ҷ��;��ϹǷ� **ppa(���� ������)�� �Է¹���
{
	char* pt;
	
	pt = *ppa;   //pt = pa;
	*ppa = *ppb; //pa = pb;
	*ppb = pt;   //pb = pt;
}