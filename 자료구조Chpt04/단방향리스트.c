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

void print_node(HeadNode* h)
{
	int i = 1;

	Node* curr = h->head;
	if (curr == NULL) printf("노드가 없습니다.\n");  //curr == NULL : 모든 노드가 삭제되고 head에는 NULL값만 있음

	while(curr != NULL)    //curr이 마지막 노드에 도달할 때까지 반복
	{
		printf("%d번째 노드의 데이터 : %d\n", i, curr->data); //여기서 모든 프린트 다 함
		curr = curr->next; //다음 노드 주소로 curr을 바꿈
		i++;
	}
	//curr이 마지막노드일 때는 data값 출력 후 curr->next가 NULL이 되므로 탈출

}

/* 전체 노드를 삭제하는 함수 */
void all_delete(HeadNode *h)
{
	Node* curr = h->head;
	while (curr != NULL)  //curr이 마지막 노드에 도달할 때까지 반복
	{
		int tmp;          //삭제할 노드의 주소를 담아둘 변수
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
void search_deleteNode(HeadNode* h, Node* d)  //Node* d : 삭제할 노드
{
	
	
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

	return 0;
}