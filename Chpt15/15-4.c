#include<stdio.h>

int main()
{
	int ary[5]; //1차원 배열

	printf("  ary의 값 : %u\t", ary); //배열 첫번째 주소
	printf("ary의 주소 : %u\n", &ary); //배열 전체 주소
	printf("   ary + 1 : %u\t", ary + 1);
	printf("   &ary +1 : %u\n", &ary + 1); //배열 전체주소 + 1

	return 0;
}