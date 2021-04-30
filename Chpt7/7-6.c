#include <stdio.h>

void fruit(int count);

int main()
{
	fruit(1); //처음 호출하므로 1 줌 

	return 0;
}

void fruit(int count)       //호출 횟수를 count에 저장
{
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);       //재호출할 때 호출 횟수 +1
}
//apple이 3번만 출력되는 재귀 호출 함수