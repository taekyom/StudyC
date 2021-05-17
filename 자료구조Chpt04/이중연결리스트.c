/* ���߿��� ����Ʈ : ����ü ��� 3��(data, next, pre), head ���� ������ ������ ���ΰ� ���θ� ����Ŵ */

#include<stdio.h>

typedef struct dlistnode
{
	int data;
	struct dlistnode* next;
	struct dlistnode* prev;
}DListNode;

typedef struct
{
	DListNode* head;
}HeadNode;

HeadNode* createHead()
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL)
	{
		h->head = NULL;
	}
	return h;
}

/* ��� ���� �Լ� */
DListNode* createNode(int data)
{
	DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
	if (newNode == NULL)
	{
		printf("�޸� �Ҵ� ����!");
		exit(1); //��������
	}
	else
	{	//newNode �ʱ�ȭ
		newNode->data = data;
		newNode->next = NULL;
		newNode->prev = NULL;

		return newNode;
	}
}

/* ���� �Լ� */
void insertNode(HeadNode* phead, DListNode* preNode, DListNode* newNode)
{
	//�̹� ���� �Լ����� data�� �ʱ�ȭ�����Ƿ� ���� �ȿ��� ������ �ʿ� X
	if (phead->head == NULL) //1. ���鸮��Ʈ�� ���(1��°�� ���ԵǴ� ���)
	{
		//preNode = NULL;
		phead->head = newNode;
	}
	else                     //2. ���鸮��Ʈ�� �ƴ� ���
	{
		if (preNode->next == NULL)         //2-1. preNode�� ������ ����� ���
		{
			newNode->prev = preNode;
			preNode->next = newNode;
		}
		else if (preNode->next != NULL)    //2-2. preNode�� ������ ��尡 �ƴ� ���
		{
			newNode->prev = preNode;
			newNode->next = preNode->next; //preNode�� next(���� preNode ���� ��� �ּҰ�)�� newNode�� next�� �Ѱ���� ��
			preNode->next = newNode;
			newNode->next->prev = newNode; //newNode next�� prev = newNode ���� ���
		}
	}				
}

/* ��� �Լ� */
void printNode(HeadNode *phead)
{
	int i = 1;
	DListNode* curr = phead->head;

	while (curr != NULL)
	{
		printf("%d��° ����� ������ �� : %d\n", i, curr->data);
		curr = curr->next;
		i++;
	}
}

/* ��ü ��� ���� �Լ� */
void all_deleteNode(HeadNode* phead)
{
	DListNode* curr = phead->head;
	
	while (curr != NULL) //curr�� ������ ��忡 ������ ������
	{
		DListNode* temp; //������ ��� �ּҰ��� ���� ���� ����
		temp = curr->next;
		free(curr);      //����
		curr = temp;     //curr�� ���� ��带 ����Ű�� temp(93��) ����
	}
	//curr�� ������ ����� ��
	phead->head = NULL;
	printf("\n���� �����Ǿ����ϴ�.\n");
}

/* ��� �˻� �Լ� */
DListNode* findNode(HeadNode* phead, int data)
{
	DListNode* find = phead->head;

	while (find != NULL)        //find�� ������ ��忡 ������ ������
	{
		if (find->data == data) //���ϴ� ���� ��ġ�ϴ� ��带 ã���� ��
		{
			printf("��ġ�ϴ� ��带 ã�ҽ��ϴ�.\n");
			return find;
		}
		else //����ġ �� ���� ���� �Ѿ
		{
			find = find->next;
		}
	}
	//find == NULL : find�� ������ ��忡 �������� ��
	printf("��ġ�ϴ� ��尡 �����ϴ�.\n");
}

int main()
{
	HeadNode* head =createHead();    //head ����
	DListNode* one = createNode(10); //������ �Ǵ� ��
	DListNode* two = createNode(20);
	DListNode* three = createNode(30);

	insertNode(head, NULL, one);  //head�� newNode�� �����ϴ� �����Լ�
	insertNode(head, one, two);   //one two����
	insertNode(head, one, three); //three�� one�ڿ� ������ ��, one three ����

	printf("\n");
	printNode(head);
	
	printf("\n");
	findNode(head, 20);
	
	all_deleteNode(head);
	printNode(head);

	return 0;
}