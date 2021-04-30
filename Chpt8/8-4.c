#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char str[80] = "applejam"; //={a, p, p, l, e, j, a, m}, char형 크기 = 1바이트 → sizeof(str)=80

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	return 0;
}

//배열은 문자를 저장하기 위한 가장 좋은 방법
//한글 : 2바이트, 영어 : 1바이트
//배열의 끝을 알려주는 것 : null문자(마침표역할) → 문장/단어의 끝에 null문자가 들어갈 자리가 하나 더 필요