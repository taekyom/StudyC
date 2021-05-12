/* 분할 컴파일 */

#include<stdio.h>
#include "분할컴파일_user.h" //사용자 정의 header파일 인크루드

int main()
{
	int n1, n2;
	int result, num;

	input_data(&n1, &n2); //주소값 전달
	result = sum(n1, n2); //sum값 받아옴

	printf("합 : %d\n", result);

	return 0;
}