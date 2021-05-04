#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("앞에서 3개의 문자만 비교하면?\n");

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0) //→ str1이 나중에 나오면~
		printf("%s\n", str1);   //str1 출력
	else						//→ str1이 먼저 나오면~
		printf("%s\n", str2);   //str2 출력

	return 0;
}
//strcmp(str1, str2) : str1이 나중에 → 1(양수)
//                     str1이 먼저 → -1(음수)
//					   str1 = str2 → 0