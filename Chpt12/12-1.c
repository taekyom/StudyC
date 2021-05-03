#include<stdio.h>

int main()
{
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");  //"apple"은 사실상 &apple와 같은 의미 → 결국 문자열도 주소를 나타냄
	printf("두번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫번째 문자 : %c\n", *"apple");
	printf("두번째 문자 : %c\n", *("apple" + 1));           //포인터 연산식
	printf("배열로 표현한 세번째 문자 : %c\n", "apple"[2]); //배열 표현식

	return 0;
}
//문자열도 주소 → 포인터로 사용 가능