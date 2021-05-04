#include<stdio.h>

int main()
{
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]); //배열 요소를 사용해서 모든 문자열 출력
	}

	return 0;
}