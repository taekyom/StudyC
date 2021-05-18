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

typedef struct qnode
{
	int data;
	int rear, front;
	//struct qnode* next;

}Qnode;

void initQueue(Qnode* pq)
{
	pq->data = 0;
	pq->front = 0;
	pq->rear = 0;
}

int isEmpty(Qnode* pq)
{
	if (pq->front == pq->rear)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int isFull(Qnode* pq)
{
	if (pq->front == (pq->rear + 1) % SIZE)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enQueue(Qnode* pq, int data)
{
	if (isFull(pq))
	{
		printf("");
		return;
	}
	else
	{
		queue[(pq->rear++) % SIZE] = data;
	}
}

int deQueue(Qnode* pq)
{
	if (isEmpty(pq))
	{
		printf("Queue underflow!\n");
		exit(1);
	}
	else
	{
		return queue[front++ % SIZE];
	}
}

int main()
{
	Qnode* pq;
	initQueue(&pq);

	return 0;
}