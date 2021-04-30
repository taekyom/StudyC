#include<stdio.h>

int main()
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	//const : 변수를 상수화하는 역할, 초기화를 해야 const를 사용가능(선언과 동시에 초기화, 초기화를 안하면 쓰레기값을 상수화하는 것)

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}
