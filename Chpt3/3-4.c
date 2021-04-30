#include<stdio.h>

int main()
{
	unsigned int a;    //unsigned : 양수만 있는 데이터(양수전용) ex.나이, 키

	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a); //unsigned 변환문자 : %u

	return 0;
}