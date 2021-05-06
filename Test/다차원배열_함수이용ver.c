/*
	1. 5명 학생의 4과목(국어, 영어, 수학, 체육)점수를 입력받는다.(2차원 배열 사용)
	2. 개인별 총점과 평균을 구한다.(평균은 소수점 첫째자리까지)
	3. 과목별 총점과 평균을 구한다.

	date : 2021-05-06
	.ver2
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void student_score(int (*pa)[4]);
void subject_score(int (*pa)[4]);

int main()
{
	int score[5][4]; //5명 4과목 : 2차원 배열
	int i, j;
	int total;       //총점
	double avg;      //평균

	for (i = 0; i < 5; i++)     //학생 수만큼 : 5
	{
		printf("%d번째 학생의 국어, 영어, 수학, 체육 점수를 입력하세요 : ", i + 1);

		for (j = 0; j < 4; j++) //과목 수만큼 : 4
		{
			scanf("%d", &score[i][j]);
		}
	}
	printf("\n");
	student_score(score);
	printf("\n");
	subject_score(score);

	return 0;
}

//개인별
void student_score(int (*pa)[4])//main의 score함수를 받는 배열 포인터(2차원 배열이므로)
{
	int i, j, total;
	double avg;

	for (i = 0; i < 5; i++)     //학생수
	{
		total = 0;

		for (j = 0; j < 4; j++) //과목수
		{
			total += pa[i][j];  //포인터 pa로 score함수 받음
		}
		avg = total / 4.0;
		printf("%d번째 학생의 총점 : %d, 평균 : %.1lf\n", i + 1, total, avg);
	}
}

//과목별
void subject_score(int (*pa)[4])//main의 score함수를 받는 배열 포인터(2차원 배열이므로)
{
	int i, j, total;
	double avg;

	printf("국어, 영어, 수학, 체육 순입니다.\n");
	for (i = 0; i < 4; i++)     //학생수 
	{
		total = 0;

		for (j = 0; j < 5; j++) //과목수
		{
			total += pa[i][j];  //포인터 pa로 score함수 받음
		}
		avg = total / 5.0;
		printf("과목별 총점 : %d, 평균 : %.1lf\n", total, avg);
	}
}