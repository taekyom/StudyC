/* 
	STACK(LIFO) 연결자료구조 : 
	맨 마지막 자료부터 아래로(처음 입력한 자료로) 가리키는(화살표) 형태 
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
	newNode->link = ptstack->topsk; //ptstack = head라고 생각
	ptstack->topsk = newNode;	    //topsk은 항상 맨 위에 있는 자료(가장 마지막에 입력된 자료)
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
	pop(h);       //맨 마지막에 들어간 자료 삭제
	printStack(h);
	return 0;
}