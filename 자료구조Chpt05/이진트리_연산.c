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

//���� Ž�� Ʈ������ Ű���� x�� ��� ��ġ Ž��
treeNode* searchBST(treeNode* root, char x)
{
	if (root == NULL)
	{
		printf("������ ��尡 �����ϴ�.");
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
		printf("\n ã�� Ű�� �����ϴ�.");
		return p;
	}
}

//������ p�� ����Ű�� ���� ���Ͽ� ��� x�� ����
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
		printf("\n �̹� ���� Ű�� �ֽ��ϴ�.");
	}
	return p;
}

//��Ʈ ������ Ž���ؼ� Ű ���� ���� ��带 ã�� ����
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

	//������ ��尡 ���� ���
	if (p == NULL)
	{
		printf("\n ã�� Ű�� ���� Ʈ���� �����ϴ�!");
		return;
	}

	//������ ��尡 �ܸ������ ���
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

	//������ ��尡 �ڽ� ��带 1���� ���� ���
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

		//������ ��尡 �ڽ� ��带 2�� ���� ���
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

//���� Ž�� Ʈ���� ���� ��ȸ�ϸ鼭 ���
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

//#pragma region ���� ����
//	treeNode* root = NULL;
//	treeNode* foundedNode = NULL;
//	char choice, key;
//
//	//�ʱ� ���� Ž�� Ʈ�� ����, ��� G�� ��Ʈ ��� �������� root�� ����
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
//		case1:printf("\t[����Ʈ�� ���]");
//			displayInorder(root);
//			printf("\n");
//			break;
//		case2:printf("������ ���ڸ� �Է��ϼ��� : ");
//			scanf(" %c", &key);
//			insertNode(root, key);
//			break;
//		case3:printf("������ ���ڸ� �Է��ϼ��� : ");
//			scanf(" %c", &key);
//			deleteNode(root, key);
//			break;
//		case4:printf("ã�� ���ڸ� �Է��ϼ��� : ");
//			scanf(" %c", &key);
//			foundedNode = searchBST(root, key);
//			if (foundedNode != NULL)
//			{
//				printf("\n %c�� ã�ҽ��ϴ�.\n", foundedNode->key);
//			}
//			else
//			{
//				printf("\n ���ڸ� ã�� ���߽��ϴ�.\n");
//			}
//			break;
//		case5:return 0;
//
//		default:printf("���� �޴��Դϴ�. �޴��� �ٽ� �����ϼ���!\n");
//			break;
//		}
//	}
//#pragma endregion
	return 0;
}