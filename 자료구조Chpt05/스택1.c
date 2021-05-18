/* 
	���ñ����� ���� �ڷᱸ���� ǥ��
    ���� : ������ ���� ���ͳݿ� ���� �� �����ִ� â�� ������ ���� â�� ������ �ϴ� �Ϸ��� ����
*/

#include<stdio.h>
#include<stdbool.h>  //�� ��ó���� ������ 5, 6�� ���ʿ�

#define STACK_SZ	3
//#define TRUE	1
//#define FALSE	2

//����Ȯ���� �켱(Empty or Full)
int isEmpty();		 //����üũ
int isFull();		 //��ȭüũ

void push(int);	     //���ÿ� �Է�
int pop();		     //���ÿ��� ���
int peek();		     //�� ���� ���� Ȯ��(�� ���� ���� ��µǹǷ� pop �Լ��� ����ϸ� �� �� ���� �����Ǳ� ������ ���� Ȯ���� �ʿ� ��)
void printStack();   //�� ���� ���� Ȯ��

int stack[STACK_SZ]; //�迭�� �̸��� stack, ũ��� 3
int top = -1;	     //���� ������ ��ġ Ȯ��(�Ϲ������� -1), �׻� ������ �� ���� ����Ŵ

int main()
{
	push(10);
	push(11);
	push(12);

	pop();           //����
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
	if (top >= STACK_SZ - 1) return true; //top >= STACK_SZ -1�� �� �� ������ �������(����)
	else return false;
}

void push(int data)
{
	if(isFull())						  //isFull ��ü�� �����̹Ƿ�~
	{
		printf("STACK overflow!\n");
		return;							  //���� ����� �������� �ʱ� ���� ��ȯ
	}
	else
	{
		stack[++top] = data;			  //top = -1
	}
}

//���ÿ��� �ڷ� ����
int pop()
{
	if(isEmpty())            //������ �������� �ƴ��� ck
	{
		printf("STACK underflow!\n");
		return;
	}
	else
	{
		return stack[top--]; //������ top(�� ������ ��)�� ��ȯ, �����ǹǷ� --
	}
}

//���� Ȯ��
int peek()
{
	if(isEmpty())
	{
		printf("STACK underflow!\n");
		exit(1);
	}
	else
	{
		return stack[top];  //Ȯ�θ� �ϹǷ� ���� ���ʿ�
	}
}

void printStack()
{
	int i;
	if(!isEmpty())		    //������ �ƴ� ��~
	{
		for (i = 0; i <= top; i++)
		{
			printf("%d  ", stack[i]);
		}
	}
}
