#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* ifp, * ofp;
	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res;

	ifp = fopen("a.txt", "r"); //입력 파일을 읽기 전용으로 개방
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w"); //출력 파일을 쓰기 전용으로 개방
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다. \n");
		return 1;
	}

	while(1)
	{
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math); //ifp로부터 데이터를 읽어옴
		if (res == EOF)                                         //파일의 데이터를 모두 읽으면 EOF 반환
		{
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}