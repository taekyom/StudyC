/* 
	STACK(LIFO) �����ڷᱸ�� : 
	�� ������ �ڷ���� �Ʒ���(ó�� �Է��� �ڷ��) ����Ű��(ȭ��ǥ) ���� 
*/

#include<stdio.h>
#include<stdbool.h>

typedef struct snode
{
	int data;
	struct snode* link;
}sNode;

typedef struct
{
	sNode* topsk;
}TStack;

TStack* createHead()
{
	TStack* t = (TStack*)malloc(sizeof(TStack));
	if (t != NULL)
	{
		t->topsk = NULL;
	}
	return t;
}

int isEmpty(TStack* ptstack)
{
	if (ptstack->topsk == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void push(TStack* ptstack, int data)
{
	sNode* newNode = (sNode*)malloc(sizeof(sNode));
	if (newNode == NULL)
	{
		return;
	}
	newNode->data = data;
	newNode->link = ptstack->topsk; //ptstack = head��� ����
	ptstack->topsk = newNode;	    //topsk�� �׻� �� ���� �ִ� �ڷ�(���� �������� �Էµ� �ڷ�)
}

int pop(TStack* ptstack)
{
	int data;
	sNode* temp;
	if (isEmpty(ptstack))
	{
		printf("STACK is EMPTY!\n");
		return;
	}
	else
	{
		data = ptstack->topsk->data;
		temp = ptstack->topsk;
		ptstack->topsk = ptstack->topsk->link;
		free(temp);
		return data;
	}
}

int peek(TStack* ptstack)
{
	if (isEmpty(ptstack))
	{
		printf("STACK is EMPTY!\n");
		return;
	}
	else
	{
		return ptstack->topsk->data;
	}
}

void printStack(TStack* ptstack)
{
	sNode* curr = ptstack->topsk;
	while (curr != NULL)
	{
		printf("%d	", curr->data);
		curr = curr->link;
	}
	printf("\n");
}

int main()
{
	TStack* h = createHead();
	push(h, 10);
	push(h, 20);
	push(h, 30);
	push(h, 40);
	
	printStack(h);
	pop(h);       //�� �������� �� �ڷ� ����
	printStack(h);
	return 0;
}