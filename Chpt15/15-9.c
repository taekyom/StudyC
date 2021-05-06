#include<stdio.h>

int main()
{
	int a = 10;
	double b = 3.5;
	void* vp; //void 포인터

	vp = &a;
	printf("a : %d\n", *(int*)vp); //*(int*)vp : vp를 int형으로 강제형변환 → void 포인터일 때는 데이터를 읽어올 때 크기를 정확하게 지정해야 함

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}
//void포인터는 모든 자료형에 사용 가능