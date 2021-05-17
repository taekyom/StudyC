/* 이중연결 리스트 : 구조체 멤버 3개(data, next, pre), head 제외 나머지 노드들은 서로가 서로를 가리킴 */

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

/* 노드 생성 함수 */
DListNode* createNode(int data)
{
	DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
	if (newNode == NULL)
	{
		printf("메모리 할당 실패!");
		exit(1); //강제종료
	}
	else
	{	//newNode 초기화
		newNode->data = data;
		newNode->next = NULL;
		newNode->prev = NULL;

		return newNode;
	}
}

/* 삽입 함수 */
void insertNode(HeadNode* phead, DListNode* preNode, DListNode* newNode)
{
	//이미 생성 함수에서 data값 초기화했으므로 여기 안에서 선언할 필요 X
	if (phead->head == NULL) //1. 공백리스트인 경우(1번째로 삽입되는 경우)
	{
		//preNode = NULL;
		phead->head = newNode;
	}
	else                     //2. 공백리스트가 아닌 경우
	{
		if (preNode->next == NULL)         //2-1. preNode가 마지막 노드인 경우
		{
			newNode->prev = preNode;
			preNode->next = newNode;
		}
		else if (preNode->next != NULL)    //2-2. preNode가 마지막 노드가 아닌 경우
		{
			newNode->prev = preNode;
			newNode->next = preNode->next; //preNode의 next(원래 preNode 다음 노드 주소값)를 newNode의 next로 넘겨줘야 함
			preNode->next = newNode;
			newNode->next->prev = newNode; //newNode next의 prev = newNode 다음 노드
		}
	}				
}

/* 출력 함수 */
void printNode(HeadNode *phead)
{
	int i = 1;
	DListNode* curr = phead->head;

	while (curr != NULL)
	{
		printf("%d번째 노드의 데이터 값 : %d\n", i, curr->data);
		curr = curr->next;
		i++;
	}
}

/* 전체 노드 삭제 함수 */
void all_deleteNode(HeadNode* phead)
{
	DListNode* curr = phead->head;
	
	while (curr != NULL) //curr이 마지막 노드에 도달할 때까지
	{
		DListNode* temp; //삭제할 노드 주소값을 담을 변수 선언
		temp = curr->next;
		free(curr);      //삭제
		curr = temp;     //curr에 다음 노드를 가리키는 temp(93행) 대입
	}
	//curr이 마지막 노드일 때
	phead->head = NULL;
	printf("\n전부 삭제되었습니다.\n");
}

/* 노드 검색 함수 */
DListNode* findNode(HeadNode* phead, int data)
{
	DListNode* find = phead->head;

	while (find != NULL)        //find가 마지막 노드에 도달할 때까지
	{
		if (find->data == data) //원하는 값과 일치하는 노드를 찾았을 때
		{
			printf("일치하는 노드를 찾았습니다.\n");
			return find;
		}
		else //불일치 → 다음 노드로 넘어감
		{
			find = find->next;
		}
	}
	//find == NULL : find가 마지막 노드에 도달했을 때
	printf("일치하는 노드가 없습니다.\n");
}

int main()
{
	HeadNode* head =createHead();    //head 생성
	DListNode* one = createNode(10); //생성만 되는 거
	DListNode* two = createNode(20);
	DListNode* three = createNode(30);

	insertNode(head, NULL, one);  //head랑 newNode를 연결하는 삽입함수
	insertNode(head, one, two);   //one two연결
	insertNode(head, one, three); //three를 one뒤에 삽입할 때, one three 연결

	printf("\n");
	printNode(head);
	
	printf("\n");
	findNode(head, 20);
	
	all_deleteNode(head);
	printNode(head);

	return 0;
}