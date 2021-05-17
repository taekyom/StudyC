/* �ܹ��� ����Ʈ */
#include<stdio.h>

typedef struct node
{
	int data;
	struct node* next;  //���� ����ü�� ����Ű�� next��� ����ü ���
} Node;

typedef struct 
{
	Node* head;         //node�� ����ų �� �ִ� Ÿ���̾�� �� �� nodeŸ���� ����ü ������ �;� node�� ����ų �� ����
} HeadNode;

/* ����� �����ϴ� �Լ� */
HeadNode* createHead()   //�Է��� ���� �Լ�(���޹��� ���� ����, �� �Լ� ��ü���� �����Ҵ� �� ��ȯ�ϹǷ�), ����� ������(�ڷ��� ��ü�� ������)
{
	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
	if (h != NULL)
	{
		h->head = NULL; //h�� �������̹Ƿ� ����Ű�� head�� NULL�� �ִ°� ����(head ��带 NULL�� �ʱ�ȭ�ϱ� ����)
	}

	return h;
}

/* ������ ��带 �����ϴ� �Լ� : head ���� 1��°�� ��ġ */
void pre_insertNode(HeadNode* h, int data)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	if (newnode != NULL)		 //newnode �ּҰ��� NULL�� �ƴ� ��
	{  
		newnode->data = data;
		newnode->next = h->head; //head�� newnode�� �ּҰ��� �����Ѿ� 1��°�� ��ġ�ϴ� ��尡 �ǹǷ�
		h->head = newnode;       //head�� newnode�� �����Ѿ� ���� ������ �ǹǷ�
	}
}

/* ������ ��带 �����ϴ� �Լ� */
void post_insertNode(HeadNode* h, int data)
{
	Node* lastnode = (Node*)malloc(sizeof(Node));
	if (lastnode != NULL)
	{
		lastnode->data = data;
		lastnode->next = NULL;     //������ ��� �ּҰ� : NULL
	}

	Node* curr = h->head;          //cur : ó������ ��ȸ�ϴ� ������ �� ù ��� �ּҰ�, ���� newnode�� �ּҰ��� h->head�� ����
								   //�����Լ� �ȿ����� ����� ���̹Ƿ� �����Ҵ� ���ʿ�

	if(h->head == NULL)            //���Ḯ��Ʈ�� head�� �ִ� ���(head�� ������ node�� ��� head�� �ּҰ��� NULL)
	{
		h->head = lastnode;
	}
	else                           //head�� �ٸ���尡 �ִ� ��� 
	{
		while (curr->next != NULL) //curr�� ������ ����� �ּ�
		{
			curr = curr->next;     //curr�� ���� ����� �ּҷ� �ٲ�(�����İ� ����)
		}
		curr->next = lastnode;     //curr�� ������ ����� �� �� �ڿ� ���ο� ��带 �߰�
	}
}

/* ��� ��� �Լ� */
void print_node(HeadNode* h)
{
	int i = 1;

	Node* curr = h->head;
	if (curr == NULL) printf("��尡 �����ϴ�.\n");  //curr == NULL : ��� ��尡 �����ǰ� head���� NULL���� �ִ� ���

	while(curr != NULL)    //curr�� ������ ��忡 ������ ������ �ݺ�
	{
		printf("%d��° ����� ������ : %d\n", i, curr->data); //���⼭ ��� ����Ʈ �� ��
		curr = curr->next; //���� ��� �ּҷ� curr�� �ٲ�
		i++;
	}
	//curr�� ����������� ���� data�� ��� �� curr->next�� NULL�� �ǹǷ� Ż��
}

/* ��ü ��带 �����ϴ� �Լ� */
void all_deletenode(HeadNode *h)
{
	Node* curr = h->head;
	while (curr != NULL)  //curr�� ������ ��忡 ������ ������ �ݺ�
	{
		Node* tmp;        //������ ����� �ּҸ� ��Ƶ� ����
		tmp = curr->next;
		free(curr);       //�����Ҵ� ��ȯ�ϸ� ��� ����
		curr = tmp;		  //curr�� ���� ��带 ����Ŵ
	}
	h->head = NULL;       //��� ��带 �����ϰ� ���������� head�� ������ ����� �ּҰ��� ����(��ǻ� ���ʿ�)��head==NULL�� �������
}

/* ��� �˻� �Լ� */
Node* searchnode(HeadNode* h, int data)
{
	Node* search = h->head;
	while (search != NULL)        //search�� ������ ��忡 ������ ������ �ݺ�
	{
		if (search->data == data) //�����Ͱ� ��ġ�� ��
		{
			printf("��ġ�ϴ� ��带 ã�ҽ��ϴ�.\n");
			return search;
		}
		else  //�����Ͱ� ��ġ���� �ʾƼ� ���� ���� �Ѿ ��
		{
			search = search->next; //������� �ּҰ��� search�� ��� �̵�
		}
	} //search == NULL�� ��(������ ������ ���� ��)
	printf("��ġ�ϴ� ��尡 �����ϴ�.\n");
}

/* (�˻���)��� 1���� �����ϴ� �Լ� */
void removeNode(HeadNode* h, Node* d)  //Node* d : ������ ���
{
	if (d == NULL)
	{
		printf("error : ã������ ��尡 �������� �ʽ��ϴ�.\n");
		return;
	}

	if (h->head == NULL)
	{
		printf("error : ��尡 ����ֽ��ϴ�.\n");
		return;
	}

	Node* curr = h->head; //������ ���

	if (curr == d) //ù��° ��带 ������ ��
	{
		h->head = d->next;
	}
	else //ù��° ������ ��带 ������ ��
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
	free(d); //������ ����� �����Ҵ� ����
}

/* �߰� ��� ���� �Լ� */
void midInsert_node(HeadNode* h, Node* pn, int data) 
{
	Node* mid = (Node*)malloc(sizeof(Node));
	
	if (mid != NULL)         //mid�� ������ ��尡 �ƴ� ��
	{
		mid->data = data;
		mid->next = NULL;    //mid�� data�� next���� �Ҵ� �� �ʱ�ȭ�ϰ� ���� ���� ����

		if (h->head == NULL) //��尡 �ϳ��� ���� ��� : ���鸮��Ʈ�� ��
		{
			h->head = mid;
			mid->data = data;
		}				     //���鸮��Ʈ�� �ƴ� ���
		else if (pn == NULL) //���� ��尡 �������� �ʰų� ���� �߸� ���޵��� ��
		{
			printf("������ ��ġ�� ã�� �� �����ϴ�.");
		}
		else                      //pn != NULL
		{	                      //168/169�� ���� �ٲ�� X!(�߿�)
			mid->next = pn->next; //������ ����� �ּҰ��� pn�� �ּҰ�(���� pn�ڿ� �ִ� ���)�� �ְ� 
			pn->next = mid;	      //�� �� ���� pn�� next�� ������ ��� �ּҰ� ����
		}
	}
}

int main()
{
	HeadNode* had = createHead();  //createHead�� h�� ���� ���� had����(���� �Լ��� �ڷ����� �����ϰ� ����), ������� �Լ� ȣ��
	post_insertNode(had, 25);      //1��° ��� ����
	post_insertNode(had, 35);      //1��° ��� ����
	post_insertNode(had, 45);      //1��° ��� ����

	print_node(had);			   //node�� �����Ͱ� ��� �Լ� ȣ��
	printf("\n");

	searchnode(had, 45);

	/*all_delete(had);
	print_node(had);*/			    //���� �� Ȯ���� ���� ���

	Node* d = searchNode(had, 9);
	removeNode(had, d);

	printNode(had);				    //���� �� ���� ����Ʈ

	return 0;
}