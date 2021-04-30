#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;

	scanf("%d", &a); //실행 후 값을 입력하면 변수a에 그 값이 저장
	printf("입력된 값 : %d\n", a);

	return 0;
}
//scanf : scan formatted, 키보드로 입력된 문자들을 스캔하여 데이터로 변환
//& : 주소 연산자