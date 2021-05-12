#include<stdio.h>

void input_data(int*, int*);
double average(int, int);

int main()
{
	int a, b;
	double avg;
	int total;

	input_data(&a, &b); //함수 호출, 출력값이 없으므로 void, 주소값 전달
	avg = average(a, b); //함수 호출, 출력값 있으므로 void 아님
	printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

	return 0;
}