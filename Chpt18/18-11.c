#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt"); //�ؽ�Ʈ ���� ��� ���� ����
	fprintf(afp, "%d", num);    //num ���� ���ڷ� ��ȯ�Ͽ� ���

	bfp = fopen("b.txt", "wb");        //���̳ʸ� ���� ��� ���� ����
	fwrite(&num, sizeof(num), 1, bfp); //num ���� �״�� ���Ͽ� ���

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");       //���̳ʸ� ���� �Է� ���� ����
	fread(&res, sizeof(res), 1, bfp); //������ �����͸� �״�� ������ �Է�
	printf("%d", res);

	fclose(bfp);

	return 0;
}