#include <stdio.h>

int main()
{
	char small, cap = 'G';

	if((cap >= 'A')&& (cap <= 'Z'))
	{
		small = cap + ('a' - 'A'); //대/소문자의 차이를 더해 소문자로 변환함
		//small = cap +('a' - 65);와 같음
	}
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);

	return 0;
}