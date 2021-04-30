#include<stdio.h>
#include<string.h>

int main()
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;  //포인터 pt를 total의 시작주소로 초기화
	double* pg = &avg; //포인터 pg를 avg의 시작주소로 초기화

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;   //pa가 가리키는 값 : a, pb가 가리키는 값 : b, pt가 가리키는 값: total
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb); //a, b 값 출력
	printf("두 정수의 합 : %d\n", *pt);          //total 값 출력
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
}

//scanf사용해서 pa로 변수 a의 저장공간 찾기 : scanf("%d", pa) → pa 자체가 a의 주소를 저장하므로 &pa라고 안씀