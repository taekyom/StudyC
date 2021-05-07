#define _CRT_SECURE_NO_WARNINGS
#include<Stdio.h>
#include<stdlib.h>

void print_str(char **ps);

int main()
{
	char temp[80];
	char* str[21] = { 0 }; //포인터 배열(포인터 2개), 널 포인터로 초기화({ 0 })
	int i = 0;

	while (i < 20)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);                              //gets : 문자열 입력, 띄어쓰기 됨
		if (strcmp(temp, "end") == 0) break;     //end가 입력되면 반복 종료 → while문 탈출(break는 가장 가까운 반복문 탈출)
		str[i] = (char*)malloc(strlen(temp) + 1);//문자열 저장 공간 할당
		strcpy(str[i], temp);                    //동적 할당 영역에 문자열 복사
		i++;
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++) //str에 연결된 문자열이 없을 때까지
	{
		free(str[i]);                //동적 할당 영역 반환(해제)
	}

	return 0;
}

void print_str(char **ps)            //입력O, 출력X, 2중 포인터로(포인터 배열이므로) str[21]을 입력받음
{
	while (*ps != NULL)              //ps : 문자열의 주소값, 포인터 배열의 값이 널 포인터가 아닌 동안 반복
	{
		printf("%s\n", *ps);         //ps : 포인터 배열의 요소
		ps++;                        //ps는 다음 배열 요소를 가리킴
									 //while문을 for문처럼 사용하기 위해서는 증감식이 필요
	}
}