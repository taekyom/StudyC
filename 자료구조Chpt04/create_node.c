#include <stdio.h>

typedef struct
{
	int data; 
	struct node* link; //���� ����� �ּҸ� ������ ���, �ڱ����� ����ü
} Node;

int main()
{
	int i = 1;

	Node* head = (Node*)malloc(sizeof(Node));  //header node ����(header node�� ���Ḯ��Ʈ�� 1��)
	head->link = NULL;

	Node* node1 = (Node*)malloc(sizeof(Node)); //�޸� �����Ҵ�, ��� ����
	if (node1 == NULL) return;                 //�����Ҵ翡 �����ϸ� NULL������ ��ȯ �� ���α׷� ����
	node1->data = 10;
	node1->link = NULL; 
	head->link = node1;  //header node�� ù��° ����� �ּҰ� �Ҵ�

	Node* node2 = (Node*)malloc(sizeof(Node));
	if (node2 == NULL) return;
	node2->data = 20;
	node2->link = NULL;  //��������� �ϸ� node1�� node2�� ������ �ȵǰ�, ������ �� ����
	node1->link = node2; //node1�� ��ũ�� node2�� �����Ѿ� node�� ���� ����

	Node* node3 = (Node*)malloc(sizeof(Node));
	if (node3 == NULL) return;
	node3->data = 30;
	node3->link = NULL;
	node2->link = node3;

	Node* node4 = (Node*)malloc(sizeof(Node));
	if (node4 == NULL) return; 
	node4->data = 40;
	node4->link = NULL;
	node3->link = node4;

	Node* node5 = (Node*)malloc(sizeof(Node));
	if (node5 == NULL) return;
	node5->data = 50;
	node5->link = NULL;  //������ node�� link���� NULL
	node4->link = node5;

	Node* curr = head->link;
	while(curr != NULL)
	{
		printf("%d��° ��� ������ : %d\n", i, curr->data);
		curr = curr->link;
		i++;
	}

	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
	free(head);

	return 0;
}