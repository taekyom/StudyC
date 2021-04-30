#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	char b;
	printf("정수 하나를 입력하세요 : $");
	scanf("%d", &a);
	printf("문자 하나를 입력하세요 : $");
	scanf(" %c", &b); //스페이스를 %c앞에 넣으면 됨
	printf("입력된 값은 %d, %c입니다.\n", a, b);

	return 0;
}
//정수입력에서 10입력 후 엔터/스페이스를 누르면 실제로는 10과 엔터/스페이스가 모두 저장되어 문자를 스캔해올 때 엔터/스페이스를 바로 가져오므로 문자를 입력하지 못하고 넘어감 
//그래서 11번째에 %c앞에 스페이스를 넣으면 빈자리에 엔터가 들어가고 다음 문자를 입력할 수 있게 됨