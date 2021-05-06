#include<stdio.h>

void swap_ptr(char** ppa, char **ppb);

int main()
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa → %s, pb → %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa → %s, pb → %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb) //*pa가 가리키는 데이터값을 불러와야하므로 **ppa(이중 포인터)로 입력받음
{
	char* pt;
	
	pt = *ppa;   //pt = pa;
	*ppa = *ppb; //pa = pb;
	*ppb = pt;   //pb = pt;
}