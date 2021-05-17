/* 단방향 리스트 */
#include<stdio.h>

typedef struct node
{
	int data;
	struct node* next;  //다음 구조체를 가리키는 next라는 구조체 멤버
} Node;

typedef struct 
{
	Node* head;         //node를 가리킬 수 있는 타입이어야 함 → node타입의 구조체 변수가 와야 node를 가리킬 수 있음
} HeadNode;

/* 헤더를 생성하는 함수 */
HeadNode* createHead()   //입력이 없는 함수(전달받을 값이 없음, 이 함수 자체에서 동적할당 후 반환하므로), 출력은 포인터(자료형 자체가 포인터)
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL)
	{
		h->head = NULL; //h는 포인터이므로 가리키는 head에 NULL을 넣는게 맞음(head 노드를 NULL로 초기화하기 위해)
	}

	return h;
}

/* 전위에 노드를 삽입하는 함수 : head 다음 1번째로 위치 */
void pre_insertNode(HeadNode* h, int data)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	if (newnode != NULL)		 //newnode 주소값이 NULL이 아닐 때
	{  
		newnode->data = data;
		newnode->next = h->head; //head가 newnode의 주소값을 가리켜야 1번째로 위치하는 노드가 되므로
		h->head = newnode;       //head가 newnode를 가리켜야 전위 삽입이 되므로
	}
}

/* 후위에 노드를 삽입하는 함수 */
void post_insertNode(HeadNode* h, int data)
{
	Node* lastnode = (Node*)malloc(sizeof(Node));
	if (lastnode != NULL)
	{
		lastnode->data = data;
		lastnode->next = NULL;     //마지막 노드 주소값 : NULL
	}

	Node* curr = h->head;          //cur : 처음부터 순회하는 포인터 → 첫 노드 주소값, 현재 newnode의 주소값이 h->head에 있음
								   //후위함수 안에서만 사용할 것이므로 동적할당 불필요

	if(h->head == NULL)            //연결리스트에 head만 있는 경우(head가 유일한 node인 경우 head의 주소값은 NULL)
	{
		h->head = lastnode;
	}
	else                           //head외 다른노드가 있는 경우 
	{
		while (curr->next != NULL) //curr이 마지막 노드의 주소
		{
			curr = curr->next;     //curr을 다음 노드의 주소로 바꿈(증감식과 같음)
		}
		curr->next = lastnode;     //curr이 마지막 노드일 때 그 뒤에 새로운 노드를 추가
	}
}

/* 노드 출력 함수 */
void print_node(HeadNode* h)
{
	int i = 1;

	Node* curr = h->head;
	if (curr == NULL) printf("노드가 없습니다.\n");  //curr == NULL : 모든 노드가 삭제되고 head에는 NULL값만 있는 경우

	while(curr != NULL)    //curr이 마지막 노드에 도달할 때까지 반복
	{
		printf("%d번째 노드의 데이터 : %d\n", i, curr->data); //여기서 모든 프린트 다 함
		curr = curr->next; //다음 노드 주소로 curr을 바꿈
		i++;
	}
	//curr이 마지막노드일 때는 data값 출력 후 curr->next가 NULL이 되므로 탈출
}

/* 전체 노드를 삭제하는 함수 */
void all_deletenode(HeadNode *h)
{
	Node* curr = h->head;
	while (curr != NULL)  //curr이 마지막 노드에 도달할 때까지 반복
	{
		Node* tmp;        //삭제할 노드의 주소를 담아둘 변수
		tmp = curr->next;
		free(curr);       //동적할당 반환하면 노드 삭제
		curr = tmp;		  //curr가 다음 노드를 가리킴
	}
	h->head = NULL;       //모든 노드를 삭제하고 마지막에는 head에 삭제된 노드의 주소값이 있음(사실상 불필요)→head==NULL로 만들어줌
}

/* 노드 검색 함수 */
Node* searchnode(HeadNode* h, int data)
{
	Node* search = h->head;
	while (search != NULL)        //search가 마지막 노드에 도달할 때까지 반복
	{
		if (search->data == data) //데이터가 일치할 때
		{
			printf("일치하는 노드를 찾았습니다.\n");
			return search;
		}
		else  //데이터가 일치하지 않아서 다음 노드로 넘어갈 때
		{
			search = search->next; //다음노드 주소값을 search에 줘야 이동
		}
	} //search == NULL일 때(마지막 노드까지 갔을 때)
	printf("일치하는 노드가 없습니다.\n");
}

/* (검색한)노드 1개를 삭제하는 함수 */
void removeNode(HeadNode* h, Node* d)  //Node* d : 삭제할 노드
{
	if (d == NULL)
	{
		printf("error : 찾으려는 노드가 존재하지 않습니다.\n");
		return;
	}

	if (h->head == NULL)
	{
		printf("error : 노드가 비어있습니다.\n");
		return;
	}

	Node* curr = h->head; //삭제할 노드

	if (curr == d) //첫번째 노드를 삭제할 때
	{
		h->head = d->next;
	}
	else //첫번째 이후의 노드를 삭제할 때
	{
		while (curr != NULL)
		{
			if (curr->next == d)
			{
				curr->next = d->next;
			}
			curr = curr->next;
		}
	}
	free(d); //삭제할 노드의 동적할당 해제
}

/* 중간 노드 삽입 함수 */
void midInsert_node(HeadNode* h, Node* pn, int data) 
{
	Node* mid = (Node*)malloc(sizeof(Node));
	
	if (mid != NULL)         //mid가 마지막 노드가 아닐 때
	{
		mid->data = data;
		mid->next = NULL;    //mid에 data와 next값을 할당 및 초기화하고 다음 과정 생각

		if (h->head == NULL) //노드가 하나도 없는 경우 : 공백리스트일 때
		{
			h->head = mid;
			mid->data = data;
		}				     //공백리스트가 아닌 경우
		else if (pn == NULL) //전위 노드가 존재하지 않거나 값이 잘못 전달됐을 때
		{
			printf("삽입할 위치를 찾을 수 없습니다.");
		}
		else                      //pn != NULL
		{	                      //168/169행 순서 바뀌면 X!(중요)
			mid->next = pn->next; //삽입할 노드의 주소값에 pn의 주소값(원래 pn뒤에 있던 노드)을 넣고 
			pn->next = mid;	      //→ 그 다음 pn의 next에 삽입할 노드 주소값 대입
		}
	}
}

int main()
{
	HeadNode* had = createHead();  //createHead의 h를 받을 변수 had생성(원래 함수의 자료형과 동일하게 선언), 헤더생성 함수 호출
	post_insertNode(had, 25);      //1번째 노드 생성
	post_insertNode(had, 35);      //1번째 노드 생성
	post_insertNode(had, 45);      //1번째 노드 생성

	print_node(had);			   //node의 데이터값 출력 함수 호출
	printf("\n");

	searchnode(had, 45);

	/*all_delete(had);
	print_node(had);*/			    //삭제 후 확인을 위해 출력

	Node* d = searchNode(had, 9);
	removeNode(had, d);

	printNode(had);				    //삭제 후 남은 리스트

	return 0;
}