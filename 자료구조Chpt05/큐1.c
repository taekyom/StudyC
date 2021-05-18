/* 순차 자료 구조 Queue(원형 큐) */
#include<stdio.h>
#include<stdbool.h>
#define SIZE 6       //크기 5

int isEmpty();
int isFull(); 
void enQueue(int);  //Q에 삽입
int deQueue();	    //Q에서 제거

int rear = 0;		//입구
int front = 0;		//출구
int queue[SIZE];	//크기 6인 queue 배열 선언

int main()
{
	enQueue(10);
	enQueue(20);
	enQueue(30);

	printf("%d\n", deQueue());
	printf("%d\n", deQueue()); 
	printf("%d\n", deQueue()); //입력된 순서대로 출력

	return 0;
}

int isEmpty()
{
	if (rear == front) //조건 중요!
	{
		return true;
	}
	else
	{
		return false;
	}
}
int isFull()
{
	if (front == (rear + 1) % SIZE) return true;  //조건 중요!
}											      //rear가 0~6까지만 반복하게 하기 위해서 SIZE로 나눈 나머지로 표현

void enQueue(int data) //Q에 삽입
{
	if (isFull())
	{
		printf("Queue overflow!\n");
	}
	else
	{
		rear = rear % SIZE;
		queue[rear] = data;
		rear++;
	}
}
int deQueue() //Q에서 제거
{
	if(isEmpty())
	{
		printf("Queue underflow!\n");
		exit(1);
	}
	else
	{
		return queue[front++ % SIZE];
	}
}

