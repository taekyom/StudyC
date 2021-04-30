#include<stdio.h>

int main()
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초기값 a = %d, b = %d\n", a, b);
	printf("전위형 : (++a) * 3 = %d\n, 후위형 : (b++) * 3 = %d\n", pre, post);

	return 0;
}
//(++a) + a + (++a)와 같은 수식은 정답이 없음 : 하나의 수식에서 같은 변수를 두 번 이상 사용할 때는 증감연산자 사용X 