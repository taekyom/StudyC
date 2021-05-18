/* 
	스택구조를 순차 자료구조로 표현
    스택 : 브라우저 통해 인터넷에 접속 후 열려있는 창을 닫으면 현재 창이 닫히고 하는 일련의 과정
*/

#include<stdio.h>
#include<stdbool.h>  //이 전처리가 있으면 5, 6행 불필요

#define STACK_SZ	3
//#define TRUE	1
//#define FALSE	2

//상태확인이 우선(Empty or Full)
int isEmpty();		 //공백체크
int isFull();		 //포화체크

void push(int);	     //스택에 입력
int pop();		     //스택에서 출력
int peek();		     //맨 위의 스택 확인(맨 위의 값이 출력되므로 pop 함수로 출력하면 맨 위 값이 삭제되기 때문에 값을 확인할 필요 有)
void printStack();   //맨 위의 스택 확인

int stack[STACK_SZ]; //배열의 이름은 stack, 크기는 3
int top = -1;	     //현재 스택의 위치 확인(일반적으로 -1), 항상 스택의 맨 위를 가리킴

int main()
{
	push(10);
	push(11);
	push(12);

	pop();           //삭제
	push(13);

	printStack();
	return 0;
}

int isEmpty()
{
	if (top <= -1) return true;
	else return false;
}

int isFull()
{
	if (top >= STACK_SZ - 1) return true; //top >= STACK_SZ -1일 때 → 스택이 비어있음(공백)
	else return false;
}

void push(int data)
{
	if(isFull())						  //isFull 자체가 에러이므로~
	{
		printf("STACK overflow!\n");
		return;							  //다음 명령을 실행하지 않기 위해 반환
	}
	else
	{
		stack[++top] = data;			  //top = -1
	}
}

//스택에서 자료 삭제
int pop()
{
	if(isEmpty())            //스택이 공백인지 아닌지 ck
	{
		printf("STACK underflow!\n");
		return;
	}
	else
	{
		return stack[top--]; //삭제할 top(맨 마지막 값)을 반환, 삭제되므로 --
	}
}

//스택 확인
int peek()
{
	if(isEmpty())
	{
		printf("STACK underflow!\n");
		exit(1);
	}
	else
	{
		return stack[top];  //확인만 하므로 증감 불필요
	}
}

void printStack()
{
	int i;
	if(!isEmpty())		    //공백이 아닐 때~
	{
		for (i = 0; i <= top; i++)
		{
			printf("%d  ", stack[i]);
		}
	}
}
