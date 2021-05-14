#include <stdio.h>

void main()
{
	int i, n = 0, * ptr;                       //2차원 배열인데 배열포인터를 쓰지 않고 일반 포인터(*ptr) 사용 → 가능하지만 비추
	int (* pptr)[4];						   //2차원 배열이므로 배열포인터 선언(배열을 가리키는 포인터) : 자료형 (*포인터)[열]
	int sale[2][4] = { {63, 84, 140, 130},
					   {157, 209, 251, 312} }; //2차원 배열
	pptr = sale;                               //배열명은 주소 → 포인터는 주소를 가리키므로 배열명만 쓰면 됨
	ptr = &sale[0][0];
	for (i = 0; i < 8; i++)
	{
		printf("\n address : %u sale %d = %d", ptr, i, *ptr);
		ptr++;							       //포인터 변수 증가(4byte증가 : int형의 포인터)
	}
	printf("\n %d", pptr[1][1]);
	printf("\n %u", pptr + 1);				   //배열포인터 + 1된 주소값 출력
	getchar();
}