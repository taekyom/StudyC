#include<stdio.h>

int main()
{
	int a = 10;
	int* pa = &a; //a의 주소값 저장
	printf("%p %p\n", &a, pa);
	printf("------------------------------------\n");
	int ary1[2] = { 1, 2 };
	int* pary1 = ary1; //선언한 배열과 포인터의 자료형은 같은 형태여야 함 
	                   //→ 다른 자료형으로 선언 시 빌드는 가능,
	                   //but 실제로 가리키는 데이터의 주소가 달라지므로 데이터 값도 달라짐
	printf("%p %p\n", ary1, pary1);
	printf("%p %p\n", ary1 + 1, pary1 + 1); //ary1 + 1와 pary1 + 1의 값이 같아야 함 
	printf("-------------------------------------\n");
	
	char ary2[2] = { 'a', 'b' };
	char* pary2 = ary2;
	printf("%p %p\n", ary2, pary2);
	printf("%p %p\n", ary2 + 1, pary2 + 1);
	printf("-------------------------------------\n");


	int ary3[][2] = { {1, 2}, {3, 4} };
	//int* pary3 = ary3;    //2차원 배열일 때 단일포인터를 쓰면 시작주소는 같지만 그 뒤 주소값이 달라짐 → 2중 포인터 사용
	int (*pary3)[2] = ary3; //(2중 포인터)배열 포인터 사용!
	printf("%p %p\n", ary3, pary3);
	printf("%p %p\n", ary3 + 1, pary3 + 1); 
	printf("-------------------------------------\n");

	char* ary4[2] = { "Hi", "Good" }; //문자열로 배열 선언할 때는 포인터 배열 사용
	char* *pary4 = ary4;              //배열과 포인터 주소값을 동일하게 받기 위해 2중 포인터 사용
	printf("%p %p\n", ary4, pary4);
	printf("%p %p\n", ary4 + 1, pary4 + 1);
	printf("-------------------------------------\n");

	return 0;
}