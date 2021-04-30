#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ary[5];  //요소 5개인 배열 선언

	ary[0] = 10; //1번째 배열에 10 대입
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]); //키보드로 입력받은 값을 4번째에 저장

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]); //마지막 배열 요소는 쓰레기 값

	return 0;
}