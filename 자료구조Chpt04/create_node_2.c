#include <stdio.h>

typedef struct
{
	int data;
	struct node* link;
} Node;

void addNode(Node* target, int data) //노드 생성 함수(전위함수)
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
	
	for (i = 1; i < 10; i++) //새로운 노드 생성 및 데이터 출력
	{
		printf("\n %d번째 노드의 값 :", i); addNode(head, n);
		n++;
	}
	printf("\n");

	//printf("\n %d번째 노드의 값 :", i); addNode(head, 10);

	return 0;
}
