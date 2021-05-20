#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef char element;
typedef struct treeNode
{
	char key;
	struct treeNode* left;
	struct treeNode* right;
}treeNode;

//이진 탐색 트리에서 키값이 x인 노드 위치 탐색
treeNode* searchBST(treeNode* root, char x)
{
	if (root == NULL)
	{
		printf("생성된 노드가 없습니다.");
	}
	else
	{
		treeNode* p;
		p = root;
		while (p != NULL)
		{
			if (x < p->key)
			{
				p = p->left;
			}
			else if (x == p->key)
			{
				return p;
			}
			else
			{
				p = p->right;
			}
		}
		printf("\n 찾는 키가 없습니다.");
		return p;
	}
}

//포인터 p가 가리키는 노드와 비교하여 노드 x를 삽입
treeNode* insertNode(treeNode *p, char x)
{
	treeNode* newNode;
	if (p == NULL)
	{
		newNode = (treeNode*)malloc(sizeof(treeNode));
		newNode->key = x;
		newNode->left = NULL;
		newNode->right = NULL;
		return newNode;
	}
	else if (x < p->key)
	{
		p->left = insertNode(p->left, x);
	}
	else if (x > p->key)
	{
		p->right = insertNode(p->right, x);
	}
	else
	{
		printf("\n 이미 같은 키가 있습니다.");
	}
	return p;
}

//루트 노드부터 탐색해서 키 값과 같은 노드를 찾아 삭제
void deleteNode(treeNode* root, element key)
{
	treeNode * parent, * p, * succ, * succ_parent;
	treeNode * child;
	parent = NULL;
	p = root;

	while ((p != NULL) && (p->key != key))
	{
		parent = p;
		if (key < p->key)
		{
			p = p->left;
		}
		else
		{
			p = p->right;
		}
	}

	//삭제할 노드가 없는 경우
	if (p == NULL)
	{
		printf("\n 찾는 키가 이진 트리에 없습니다!");
		return;
	}

	//삭제할 노드가 단말노드인 경우
	if ((p->left == NULL) && (p->right == NULL))
	{
		if (parent != NULL)
		{
			if (parent->left == p)
			{
				parent->left = NULL;
			}
			else
			{
				parent->right = NULL;
			}
		}
		else
		{
			root = NULL;
		}
	}

	//삭제할 노드가 자식 노드를 1개만 가진 경우
	else if ((p->left == NULL) || (p->right == NULL))
	{
		if (p->left != NULL)
		{
			child = p->left;
		}
		else
		{
			child = p->right;
		}
		
		if (parent != NULL)
		{
			if (parent->left == p)
			{
				parent->left = child;
			}
			else
			{
				root = child;
			}
		}

		//삭제할 노드가 자식 노드를 2개 가진 경우
		else
		{
			succ_parent = p;
			succ = p->left;

			while (succ->right != NULL)
			{
				succ_parent = succ;
				succ = succ->right;
			}
			if (succ_parent->left == succ)
			{
				succ_parent->left = succ->left;
			}
			else
			{
				succ_parent->right = succ->left;
			}
			p->key = succ->key;
			p = succ;
		}
		free(p);
	}
}

//이진 탐색 트리를 중위 순회하면서 출력
void displayInorder(treeNode* root)
{
	if (root)
	{
		displayInorder(root->left);
		printf("%c_", root->key);
		displayInorder(root->right);
	}
}

int main()
{
	treeNode* root = NULL;
	//searchBST(root, 'k');
	root = insertNode(root, 'k');
	insertNode(root, 'i');
	insertNode(root, 'c');
	insertNode(root, 'j');
	insertNode(root, 'j');
	insertNode(root, 'b');
	insertNode(root, 'z');
	insertNode(root, 'o');

	displayInorder(root);

//#pragma region 교재 내용
//	treeNode* root = NULL;
//	treeNode* foundedNode = NULL;
//	char choice, key;
//
//	//초기 이진 탐색 트리 생성, 노드 G를 루트 노드 포인터인 root로 지정
//	root = insertNode(root, 'G');
//	insertNode(root, 'I');
//	insertNode(root, 'H');
//	insertNode(root, 'D');
//	insertNode(root, 'B');
//	insertNode(root, 'M');
//	insertNode(root, 'N');
//	insertNode(root, 'A');
//	insertNode(root, 'J');
//	insertNode(root, 'E');
//	insertNode(root, 'Q');
//
//	while (1)
//	{
//		scanf(" %c", &choice);
//
//		switch (choice - '0')
//		{
//		case1:printf("\t[이진트리 출력]");
//			displayInorder(root);
//			printf("\n");
//			break;
//		case2:printf("삽입할 문자를 입력하세요 : ");
//			scanf(" %c", &key);
//			insertNode(root, key);
//			break;
//		case3:printf("삭제할 문자를 입력하세요 : ");
//			scanf(" %c", &key);
//			deleteNode(root, key);
//			break;
//		case4:printf("찾을 문자를 입력하세요 : ");
//			scanf(" %c", &key);
//			foundedNode = searchBST(root, key);
//			if (foundedNode != NULL)
//			{
//				printf("\n %c를 찾았습니다.\n", foundedNode->key);
//			}
//			else
//			{
//				printf("\n 문자를 찾지 못했습니다.\n");
//			}
//			break;
//		case5:return 0;
//
//		default:printf("없는 메뉴입니다. 메뉴를 다시 선택하세요!\n");
//			break;
//		}
//	}
//#pragma endregion
	return 0;
}