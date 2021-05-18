/* ���� �ڷ� ���� Queue(���� ť) */
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

int main()
{
	enQueue(10);
	enQueue(20);
	enQueue(30);

	printf("%d\n", deQueue());
	printf("%d\n", deQueue()); 
	printf("%d\n", deQueue()); //�Էµ� ������� ���

	return 0;
}

int isEmpty()
{
	if (rear == front) //���� �߿�!
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
	if (front == (rear + 1) % SIZE) return true;  //���� �߿�!
}											      //rear�� 0~6������ �ݺ��ϰ� �ϱ� ���ؼ� SIZE�� ���� �������� ǥ��

void enQueue(int data) //Q�� ����
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
int deQueue() //Q���� ����
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

