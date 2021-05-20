/*
	트리(Tree) : 노드로 이루어진 자료 구조, 계층모델

	○ : 노드, - : 간선(link, branch)
	단말노드 : 자식이 없는 노드
	루트노드 : 부모가 없는 노드
	노드의 차수 : 각 노드가 가진 간선의 수

	이진트리(Binary Tree) : 자식을 최대 2개까지만 가질 수 있는 트리
*/
#include<stdio.h>

typedef struct btnode
{
	char data;
	struct btnode* left; //이진트리이므로 left, right 필요
	struct btnode* right;
}BTNode;

BTNode* makeBTNode(data)
{
	BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void makeLeftTree(BTNode* root, BTNode* sub) //부모 트리의 왼쪽에 자식을 생성
{
	if (root->left != NULL)
	{
		free(root->left);
	}
	root->left = sub; //새로운 서브트리로 연결
}

void makeRightTree(BTNode* root, BTNode* sub) //부모 트리의 오른쪽에 자식을 생성
{
	if (root->right != NULL)
	{
		free(root->right);
	}
	root->right = sub; //새로운 서브트리로 연결
}

void Preorder(BTNode* root) //전위순회 : 루트 data 처리 → 왼쪽 sub → 오른쪽 sub 
{
	if (root == NULL)
	{
		return;
	}
	printf("%c	", root->data);
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(BTNode* root) //중위순회 : 왼쪽 sub → 루트 data 처리 → 오른쪽 sub
{
	if (root == NULL)
	{
		return;
	}
	Inorder(root->left);
	printf("%c	", root->data);
	Inorder(root->right);
}

void Postorder(BTNode* root) //후위순회 : 왼쪽 sub → 오른쪽 sub → 루트 data 처리
{
	if (root == NULL)
	{
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	printf("%c	", root->data);
}

int main()
{
	BTNode* b1 = makeBTNode('a');
	BTNode* b2 = makeBTNode('b');
	BTNode* b3 = makeBTNode('c');
	BTNode* b4 = makeBTNode('d');
	BTNode* b5 = makeBTNode('e');
	BTNode* b6 = makeBTNode('f');
	BTNode* b7 = makeBTNode('g');
	BTNode* b8 = makeBTNode('h');

	makeLeftTree(b1, b2); //b1에 b2를 왼쪽에 연결
	makeRightTree(b1, b3);
	makeLeftTree(b2, b4);
	makeRightTree(b2, b5);
	makeLeftTree(b3, b6);
	makeRightTree(b3, b7);
	makeLeftTree(b4, b8);

	Preorder(b1);
	printf("\n");
	Inorder(b1);
	printf("\n");
	Postorder(b1);
	printf("\n");

	return 0;
}