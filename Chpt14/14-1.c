#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score[3][4]; //3명의 4과목 점수를 저장할 2차원 배열
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)       //학생 수만큼 반복 : 3번 반복
	{
		printf("4과목 점수 입력 : ");
		for (j = 0; j < 4; j++)   //과목 수만큼 반복 : 4번 반복
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)       //학생 수만큼 반복 : 3번 반복
	{
		total = 0;                //학생 한명 끝날 때마다 0으로 초기화
		for (j = 0; j < 4; j++)   //과목 수만큼 반복 : 4번 반복
		{
			total += score[i][j]; //학생 별로 총점 누적
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %2.lf\n", total, avg);
	}

	return 0;
}
//다차원 배열에서는 열이 중요, 배열[행][열]
//행은 생략가능, 열은 생략 불가능