#include<stdio.h>

int main()
{
	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin); //stdin : 입력에 관련된 filestream, fgets : 최대 배열의 크기까지만 문자열을 입력(배열 크기 확인 함수)
	//나중에 입력할 공간입니다.
	printf("입력된 문자열은 %s입니다.\n", str);
	return 0;
}