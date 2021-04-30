#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)   //i가 0~4까지 5번 반복
	{
		scanf("%d", &score[i]);   // 각 배열 요소에 성적 입력
	}

	for (i = 0; i < count; i++)
	{
		total += score[i];       //성적을 누적해서 총점 계산
	}
	avg = total / (double)count; //count를 double로 강제형변환

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]); //성적 출력
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);

	return 0;
}