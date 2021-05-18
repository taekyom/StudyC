#include<stdio.h>
#include<stdbool.h>
#define SIZE 6       //ũ�� 5

int isEmpty();
int isFull();
void enQueue(int);  //Q�� ����
int deQueue();	    //Q���� ����

int rear = 0;		//�Ա�
int front = 0;		//�ⱸ
int queue[SIZE];	//ũ�� 6�� queue �迭 ����

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