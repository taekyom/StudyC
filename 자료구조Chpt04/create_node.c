#include <stdio.h>

typedef struct
{
	int data; 
	struct node* link; //다음 노드의 주소를 저장할 멤버, 자기참조 구조체
} Node;

int main()
{
	int i = 1;

	Node* head = (Node*)malloc(sizeof(Node));  //header node 생성(header node는 연결리스트당 1개)
	head->link = NULL;

	Node* node1 = (Node*)malloc(sizeof(Node)); //메모리 동적할당, 노드 생성
	if (node1 == NULL) return;                 //동적할당에 실패하면 NULL포인터 반환 후 프로그램 종료
	node1->data = 10;
	node1->link = NULL; 
	head->link = node1;  //header node에 첫번째 노드의 주소값 할당

	Node* node2 = (Node*)malloc(sizeof(Node));
	if (node2 == NULL) return;
	node2->data = 20;
	node2->link = NULL;  //여기까지만 하면 node1과 node2가 연결이 안되고, 생성만 된 상태
	node1->link = node2; //node1의 링크가 node2를 가리켜야 node간 연결 가능

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
	node5->link = NULL;  //마지막 node의 link값은 NULL
	node4->link = node5;

	Node* curr = head->link;
	while(curr != NULL)
	{
		printf("%d번째 노드 데이터 : %d\n", i, curr->data);
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