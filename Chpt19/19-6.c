#include<stdio.h>
#define VER 7 //치환될 부분이 있는 매크로 정의
#define BIT16 //치환될 부분이 없는 매크로 정의

int main()
{
	int max;

#if VER >= 6                         //매크로명 VER이 6이상이면~
	printf("버전 %d입니다.\n", VER); //이 문장 컴파일
#endif

#ifdef BIT16                         //매크로명 BIT16이 정의되어 있으면~
	max = 32767;                     //이 문장 컴파일
#else
	max = 2147483647;
#endif 

	printf("int형 변수의 최대값 : %d\n", max);

	return 0;
}