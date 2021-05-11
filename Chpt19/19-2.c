#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14159                                    //상수를 매크로명으로 정의
#define LIMIT 100.0                                   //상수를 매크로명으로 정의
#define MSG "passed!"                                 //문자열을 매크로명으로 정의
#define ERR_PRN printf("허용 범위를 벗어났습니다!\n") //출력문을 매크로명으로 정의

int main()
{
	double radius, area;

	printf("반지름을 입력하세요(10 이하) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (area > LIMIT) ERR_PRN;
	else printf("원의 면적 : %.2lf (%s)\n", area, MSG);

	return 0;
}