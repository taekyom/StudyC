/* 
	회문 판별하기
	date : 2021.05.04
	author : 이태경

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char word[50]; //단어는 문자열이므로 배열로 선언
	int count;
	int i;

	printf("단어를 입력하세요 : ");
	scanf("%s", &word);
	count = strlen(word); //검사횟수

	for (i = 0; i < count/2; i++)
	{
		if (word[i] != word[count-i-1])
		{
			printf("회문이 아닙니다.");
			break;
		}
		printf("회문입니다.");
	}
	

	return 0;
}
//단어 입력, 입력받은 단어의 길이를 반으로 자름 
//첫글자와 마지막 글자 같은지 ck(1, n/ 2, n-1 ...), 
//첫 글자와 마지막 글자가 다르면 "회문이 아닙니다."