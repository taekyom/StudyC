#include <stdio.h>
#define MAX(a, b) ((a>b)?a:b)
#define MAX_DEGREE 50

typedef struct  //구조체 선언
{
	int degree;
	float coef[MAX_DEGREE];
} polynomial;

polynomial addPoly(polynomial, polynomial);
void printPoly(polynomial);

void main()
{
	polynomial A = { 3, { 4, 3, 5, 0 } };
	polynomial B = { 4, { 3, 1, 0, 2, 1 } };

	polynomial C;
	C = addPoly(A, B); //다항식 A, B에 대한 덧셈을 수행하기 위한 addPoly함수 호출

	printf("\n A(x) ="); printPoly(A); //printPoly함수 호출로 다항식 A 출력
	printf("\n B(x) ="); printPoly(B); 
	printf("\n C(x) ="); printPoly(C);

	getchar();
}

polynomial addPoly(polynomial A, polynomial B)
{
	polynomial C; //다항식 덧셈의 결과 다항식을 저장할 polynomial 구조체 변수 선언
	int A_index = 0, B_index = 0, C_index = 0;
	int A_degree = A.degree, B_degree = B.degree;
	C.degree = MAX(A.degree, B.degree);

	while (A_index <= A.degree && B_index <= B.degree)
	{
		if (A_degree > B_degree)
		{
			C.coef[C_index++] = A.coef[A_index++];
			A_degree--;
		}
		else if (A_degree == B_degree)
		{
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index];
			A_degree--;
			B_degree--;
		}
		else
		{
			C.coef[C_index++] = B.coef[B_index++];
			B_degree--;
		}
	}
	return C; //다항식 덧셈의 결과인 다항식 C를 반환
}

void printPoly(polynomial P)
{
	int i, degree;
	degree = P.degree;

	for (i = 0; i <= P.degree; i++)
	{
		printf("%3.0fx^%d", P.coef[i], degree--);
		if (i < P.degree) 
		{
			printf(" +");
		}
	}
	printf("\n");
}


