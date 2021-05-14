#include <stdio.h>

typedef struct
{
	int data;
	struct node* link;
} Node;

void addNode(Node* target, int data) //��� ���� �Լ�(�����Լ�)
{
	Node* newNode = malloc(sizeof(Node));
	newNode->data = data;
	newNode->link = target->link;
	target->link = newNode;

	printf("%d", data);
}

int main()
{
	int i = 1, n = 10; 
	
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;
	
	for (i = 1; i < 10; i++) //���ο� ��� ���� �� ������ ���
	{
		printf("\n %d��° ����� �� :", i); addNode(head, n);
		n++;
	}
	printf("\n");

	//printf("\n %d��° ����� �� :", i); addNode(head, 10);

	return 0;
}
