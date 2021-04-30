#include <stdio.h>

int a = 10, b = 20;
void swap();

int main()
{
   printf("바꾸기 전 a,b : %d, %d\n", a, b);
	//temp = a;
	//a = b;
	//b = temp;
   
   swap();
   printf("바꾸기 후 a,b : %d, %d\n", a, b);
   return 0;
}

void swap()
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}

//두 값을 바꾸기 위해서 전역 변수 글로벌로 사용했는데 가급적 사용 하지 않는 것이 좋음
//언제든지 사용 가능하기에 값이 언제든 변할 수 있음