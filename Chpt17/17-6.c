#include<stdio.h>

struct score //����ü ����
{
	int kor;
	int eng;
	int math;
};

int main()
{
	struct score yuni = { 90, 80, 70 }; //����ü ���� ����
	struct score* ps = &yuni;           //����ü �����Ϳ� �ּ� ����

	printf("���� : %d\n", (*ps).kor);   //����ü �����ͷ� ��� ���� : �����Ϳ� ����
	printf("���� : %d\n", ps -> eng);   // -> : ���ο� ������, (*ps).kor = ps -> kor
	printf("���� : %d\n", ps -> math);

	return 0;
}