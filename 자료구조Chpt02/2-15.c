#include<stdio.h>

void hanoi(int n, int start, int work, int target);

void main()
{
	hanoi(5, 'A', 'B', 'C'); //함수호출(원반의 개수, 봉1, 봉2, 봉3)
	getchar();
}

void hanoi(int n, int start, int work, int target)
{
	if (n == 1)
	{
		printf(" %c에서 원반 %d을(를) %c로 옮김 \n", start, n, target);
	}
	else
	{
		hanoi(n - 1, start, target, work); //함수 재귀호출
		printf(" %c에서 원반 %d(을)를 %c로 옮김 \n", start, n, target);
		hanoi(n - 1, work, start, target);
	}
}