#include <stdio.h>

int main()
{
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:      //rank 1이면 m = 300 수행 후 switch문 탈출
		m = 300;
		break;
	case 2:      //rank = 2이므로 case 2 수행 후 m = 200으로 switch문 탈출 
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:     //rank와 일치하는 case가 없으면 default 수행
		m = 10;
		break;
	}
	printf("m : %d\n", m);

	return 0;
}
//break문이 없으면 계속 실행
//default는 생략 가능