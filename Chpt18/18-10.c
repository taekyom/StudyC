#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);
	while (fgetc(fp) != '\n');
	fgets(name, sizeof(name), fp); //띄어쓰기 적용해서 출력

	printf("나이 : %d, 이름 : %s", age, name);
	fclose(fp);

	return 0;
}