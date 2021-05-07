/*
	구조체 test
	date : 2021-05-07
	description : 
	1. 5명의 사원 번호, 이름, 급여를 입력받아 출력
	2. 사원 5명의 급여 총액과 평균 급여액을 구하라.
	(이름은 동적할당에 저장한다.)
	
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee{ //구조체 선언
	int id;              //사원번호
	char* name;          //이름
	int salary;          //급여
}Employee;

int main()
{
	int i;
	int sal_sum = 0;

	Employee info[5];
	char str[20] = {'\0'};

	for (i = 0; i < 5; i++) 
	{
		printf("사원 번호, 이름, 급여를 입력하세요 :");
		scanf("%d %s %d", &(info[i].id), str, &(info[i].salary));

		info[i].name = (char*)malloc(strlen(str) + 1); //이름을 동적할당에 저장(배열의 길이보다 길게)
		if (info[i].name != NULL)                      //이름이 null이 아닐 때
		{
			strcpy(info[i].name, str);                 //str을 이름에 복사
		}
	}

	printf("사원 정보");
	printf("------------------------------------------\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d %s %d\n", info[i].id, info[i].name, info[i].salary);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		sal_sum += info[i].salary;
	}
	printf("사원의 급여 총액 : %d\n", sal_sum);
	printf("사원의 평균 급여액 : %.1lf\n", sal_sum/5.0);

	for (i = 0; i < 5; i++)
	{
		free(info[i].name); //반환(해제), for문 안에서 동적할당을 선언했으므로 해제도 for문 안에서 이뤄져야 함
	}

	return 0;
}