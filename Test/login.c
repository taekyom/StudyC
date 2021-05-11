/*
	로그인 프로그램 만들기

	date : 2021-05-11
	Author : 이태경
	description : 
	1. 메모장에 아이디와 패스워드 저장(파일명 : password.txt)
	2. 구조체 Login 변수에 id, password 멤버를 각각 저장
	3. 키보드로 입력받은 id와 pw를 비교하여 로그인 유무 판별 메시지 출력

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;

typedef struct 
{
	char ID[20];
	char Password[20];
}Info;

int main()
{
	Info Login;

	FILE *fp;
	int res;
	char id[20], password[20];

	fp = fopen("password.txt", "r"); //password.txt 파일 읽기전용으로 오픈
	if (fp == NULL)                  //파일 포인터가 널이면(파일 개방유무 확인)
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}

	while(1)
	{
		res = fscanf(fp, "%s %s", &Login.ID, &Login.Password); //password.txt파일에서 Login.ID과 Login.Password로 데이터를 읽어옴
		if (res == EOF)                                        //파일 데이터를 전부 읽으면 EOF 반환
		{
			break;
		}
	}
	//printf("%s %s\n", Login.ID, Login.Password);
	
	while(1)
	{
		printf("아이디와 패스워드를 입력하세요 : ");
		scanf("%s %s", id, password);

		if (strcmp(id, Login.ID) == 0)                 //아이디가 일치하면
		{
			if (strcmp(password, Login.Password) == 0) //아이디와 패스워드가 모두 일치하면
			{
				printf("로그인되었습니다.");
				break;
			}
			else                                       //아이디 O, 패스워드 X
			{
				printf("패스워드가 일치하지 않습니다.");
			}
		}
		else                                           //아이디X
		{
			printf("사용자를 찾을 수 없습니다. 다시 입력해주세요.");
		}
	}
	
	fclose(fp);
	
	return 0;
}