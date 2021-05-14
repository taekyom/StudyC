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
	newNode->link = target->link;   //node2의 다음 값은 head->link = node1의 주소
	target->link = newNode;			//head->link 값은 node2의 주소
}

int main()
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->link = NULL;   //초기화 안됐을 때 head의 link값은 쓰레기값 → NULL로 초기화
	
	Node* curr = (Node*)malloc(sizeof(Node)); //curr(현재 노드) 생성

	addNode(head, 10);   //node1 생성
	addNode(head, 20);   //node2 생성
	addNode(head, 30);   //node3 생성

	// data 출력
	curr = head->link;   //curr이 head의 link를 가리키므로 curr = NULL
	while (curr != NULL) //3,2,1 순서로 출력(마지막노드까지 갔다가 빠져나감)
	{
		printf("%d\n", curr->data);
		curr = curr->link;
	}

	// 동적 할당 반환
	Node* tmp;
	curr = head->link;
	while (curr != NULL)  //3,2,1 순서로 반환
	{
		tmp = curr->link;
		free(curr);
		curr = tmp;
	}
	free(head);

	//for (i = 1; i < 10; i++) //새로운 노드 생성 및 데이터 출력
	//{
	//	printf("\n %d번째 노드의 값 :", i); addNode(head, n);
	//	n++;
	//}
	//printf("\n");

	////printf("\n %d번째 노드의 값 :", i); addNode(head, 10);

	return 0;
}
