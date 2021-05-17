/* 원형 리스트 : 마지막 노드 → 1번째 노드, head → 마지막 노드 
   생성할 때는 개별로 만들어짐, insert함수에서 head노드가 마지막 노드로 되는 과정이 생김 → head노드 = 마지막 노드
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

/* 노드 생성 함수 */
ListNode* createNode(HeadNode* phead, int data)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("메모리 할당 실패!");
		return;
	}
	else
	{
		newNode->data = data;
		newNode->link = NULL;
		return newNode;
	}
}

/* 노드를 1번째로 삽입하는 함수*/
void insertFirstNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)     //공백리스트일 때
	{
		phead->head = newNode;
		newNode->link = newNode; //공백리스트이므로 주소값은 자기자신을 가리킴
	}
	else						 //공백리스트가 아닐 때(head 외 다른 노드가 있을 때)
	{
		newNode->link = phead->head->link; //head노드를 마지막 노드라고 생각
		phead->head->link = newNode;
	}
}

/* 노드를 마지막으로 삽입하는 함수 */
void insertLastNode(HeadNode* phead, ListNode* newNode)
{
	if (phead->head == NULL)     //공백리스트일 때
	{
		phead->head = newNode;
		newNode->link = newNode; //공백리스트이므로 주소값은 자기자신을 가리킴
	}
	else						 //공백리스트가 아닐 때(head 외 다른 노드가 있을 때)
	{
		newNode->link = phead->head->link; //head노드를 마지막 노드라고 생각
		phead->head->link = newNode;
		phead->head = newNode;   //마지막 노드 = head 노드가 되는 과정
	}
}

/* 출력 함수 */
void printNode(HeadNode* phead)
{
	int i = 1;

	ListNode* curr = phead->head;
	do
	{
		printf("%d번째 노드의 데이터 값 : %d\n", i, curr->data);
		curr = curr->link; //다음 노드로 넘어감
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