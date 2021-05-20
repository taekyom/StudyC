/*
	Ʈ��(Tree) : ���� �̷���� �ڷ� ����, ������

	�� : ���, - : ����(link, branch)
	�ܸ���� : �ڽ��� ���� ���
	��Ʈ��� : �θ� ���� ���
	����� ���� : �� ��尡 ���� ������ ��

	����Ʈ��(Binary Tree) : �ڽ��� �ִ� 2�������� ���� �� �ִ� Ʈ��
*/
#include<stdio.h>

typedef struct btnode
{
	char data;
	struct btnode* left; //����Ʈ���̹Ƿ� left, right �ʿ�
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

void makeLeftTree(BTNode* root, BTNode* sub) //�θ� Ʈ���� ���ʿ� �ڽ��� ����
{
	if (root->left != NULL)
	{
		free(root->left);
	}
	root->left = sub; //���ο� ����Ʈ���� ����
}

void makeRightTree(BTNode* root, BTNode* sub) //�θ� Ʈ���� �����ʿ� �ڽ��� ����
{
	if (root->right != NULL)
	{
		free(root->right);
	}
	root->right = sub; //���ο� ����Ʈ���� ����
}

void Preorder(BTNode* root) //������ȸ : ��Ʈ data ó�� �� ���� sub �� ������ sub 
{
	if (root == NULL)
	{
		return;
	}
	printf("%c	", root->data);
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(BTNode* root) //������ȸ : ���� sub �� ��Ʈ data ó�� �� ������ sub
{
	if (root == NULL)
	{
		return;
	}
	Inorder(root->left);
	printf("%c	", root->data);
	Inorder(root->right);
}

void Postorder(BTNode* root) //������ȸ : ���� sub �� ������ sub �� ��Ʈ data ó��
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

	makeLeftTree(b1, b2); //b1�� b2�� ���ʿ� ����
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