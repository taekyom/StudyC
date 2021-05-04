#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char alpha;
	char small; //소문자 변환 변수 선언
	char big;   //대문자 변환 변수 선언
	            //여기서는 선언만 하고 alpha값이 없기 때문에 연산식 만들 수 없음

	printf("알파벳 하나를 입력하세요 : ");
	scanf("%c", &alpha);
	
	if ((alpha >= 'A') && (alpha <= 'Z')) //대문자면
	{
		small = alpha + ('a' - 'A');      //scanf로 alpha값을 받았으므로 조건식 안에서 연산식 정의
		printf("소문자로 변환 : %c", small);
	}
	else if ((alpha >= 'a') && (alpha <= 'z'))//소문자면
	{
		big = alpha - 32;
		printf("대문자로 변환 : %c", big);
	}
	else //알파벳 외에 문자를 입력했을 때
	{
		printf("알파벳으로 다시 입력해주세요!");
	}

	return 0;
}