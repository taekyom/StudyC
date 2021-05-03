#include<stdio.h>

int main()
{
	char str[80] = "apple juice";
	char* ps = "banana"; 

	puts(str);         //puts : apple juice 출력하고 자동 개행
	fputs(ps, stdout); //fputs : 자동 개행X, 해당되는 파일스트림 입력 필수
	puts("milk");

	return 0;
}
//예약어 const : 원본 훼손없이 그대로 출력하기 위함(출력할 때만 사용, 입력시에는 사용X)