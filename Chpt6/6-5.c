#include <stdio.h>

int main()
{
	int i;        //반복횟수 카운트
	int sum = 0;  //1~10까지 합 누적

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break; //합이 30을 넘으면 중단(break)하고 for문 탈출
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}
//1~10까지 합을 구하는 도중 합이 30을 넘으면 중단
