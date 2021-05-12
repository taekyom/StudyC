#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

extern int count; //main.c 파일의 전역변수 count 공유(extern은 초기화 불가능 → 처음 선언 및 초기화 된 것이 원본)
int total = 0;    //전역변수 선언(함수 안이 아니라 밖에서 선언했으므로)

int input_data()
{
	int pos;                //양수 저장

	while(1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);
		if (pos < 0) break; //음수면 입력 종료
		count++;
		total += pos;
	}
	return total;
}