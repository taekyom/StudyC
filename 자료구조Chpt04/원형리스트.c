/* ���� ����Ʈ : ������ ��� �� 1��° ���, head �� ������ ��� 
   ������ ���� ������ �������, insert�Լ����� head��尡 ������ ���� �Ǵ� ������ ���� �� head��� = ������ ���
*/
#include <stdio.h>

typedef struct listnode
{
	int data;
	struct listnode* link;
}ListNode;

typedef struct
{
	ListNode* head;
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
ListNode* createNode(HeadNode* phead, int data)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("�޸� �Ҵ� ����!");
		return;
	}
	else
	{
		newNode->data = data;
		newNode->link = NULL;
		return newNode;
	}
}

/* ��带 1��°�� �����ϴ� �Լ�*/
void insertFirstNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)     //���鸮��Ʈ�� ��
	{
		phead->head = newNode;
		newNode->link = newNode; //���鸮��Ʈ�̹Ƿ� �ּҰ��� �ڱ��ڽ��� ����Ŵ
	}
	else						 //���鸮��Ʈ�� �ƴ� ��(head �� �ٸ� ��尡 ���� ��)
	{
		newNode->link = phead->head->link; //head��带 ������ ����� ����
		phead->head->link = newNode;
	}
}

/* ��带 ���������� �����ϴ� �Լ� */
void insertLastNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)     //���鸮��Ʈ�� ��
	{
		phead->head = newNode;
		newNode->link = newNode; //���鸮��Ʈ�̹Ƿ� �ּҰ��� �ڱ��ڽ��� ����Ŵ
	}
	else						 //���鸮��Ʈ�� �ƴ� ��(head �� �ٸ� ��尡 ���� ��)
	{
		newNode->link = phead->head->link; //head��带 ������ ����� ����
		phead->head->link = newNode;
		phead->head = newNode;   //������ ��� = head ��尡 �Ǵ� ����
	}
}

/* ��� �Լ� */
void printNode(HeadNode* phead)
{
	int i = 1;

	ListNode* curr = phead->head;
	do
	{
		printf("%d��° ����� ������ �� : %d\n", i, curr->data);
		curr = curr->link; //���� ���� �Ѿ
		i++;
	} while (curr != phead->head);
}

int main()
{
	HeadNode* head = createHead();
	/*insertFirstNode(head, createNode(head, 5));
	insertFirstNode(head, createNode(head, 15));
	insertFirstNode(head, createNode(head, 25));*/
	
	insertLastNode(head, createNode(head, 35));
	insertLastNode(head, createNode(head, 45));
	insertLastNode(head, createNode(head, 55));


	printNode(head);

	return 0;
}