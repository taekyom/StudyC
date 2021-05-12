#include<stdio.h>

int input_data();        //양수 입력하고 합을 반환
double average();        //평균
void print_data(double); //출력

int count = 0;           //입력한 양수의 수 누적
static int total = 0;    //입력한 양수의 합

int main()
{
	double avg;

	total = input_data();
	avg = average();
	print_data(avg);

	return 0;
}

void print_data(double avg)
{
	printf("\n");
	printf(" 입력한 양수의 개수 : %d\n", count);
	printf(" 전체 합과 평균 : %d, %.1lf\n", total, avg);
}