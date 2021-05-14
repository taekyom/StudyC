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
	newNode->link = target->link;   //node2�� ���� ���� head->link = node1�� �ּ�
	target->link = newNode;			//head->link ���� node2�� �ּ�
}

int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;   //�ʱ�ȭ �ȵ��� �� head�� link���� �����Ⱚ �� NULL�� �ʱ�ȭ
	
	Node* curr = (Node*)malloc(sizeof(Node)); //curr(���� ���) ����

	addNode(head, 10);   //node1 ����
	addNode(head, 20);   //node2 ����
	addNode(head, 30);   //node3 ����

	// data ���
	curr = head->link;   //curr�� head�� link�� ����Ű�Ƿ� curr = NULL
	while (curr != NULL) //3,2,1 ������ ���(������������ ���ٰ� ��������)
	{
		printf("%d\n", curr->data);
		curr = curr->link;
	}

	// ���� �Ҵ� ��ȯ
	Node* tmp;
	curr = head->link;
	while (curr != NULL)  //3,2,1 ������ ��ȯ
	{
		tmp = curr->link;
		free(curr);
		curr = tmp;
	}
	free(head);

	//for (i = 1; i < 10; i++) //���ο� ��� ���� �� ������ ���
	//{
	//	printf("\n %d��° ����� �� :", i); addNode(head, n);
	//	n++;
	//}
	//printf("\n");

	////printf("\n %d��° ����� �� :", i); addNode(head, 10);

	return 0;
}
