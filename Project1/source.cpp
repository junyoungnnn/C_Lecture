#include <stdio.h>


int main()
{
#pragma region ���� ������
	// ptr2�� ptr�� ���� �ּҸ� ����Ű��
	// ptr�� data�� �ּҸ� ����Ų��.
	// *ptr �� data�� ���� ����Ű��
	// **ptr2�� *ptr�� ����Ű�� ���� data�� ���� ����Ų��.

	// int data = 300;
	// int* ptr = &data;
	// int** ptr2 = &ptr;
	// printf("**ptr2�� ��: %d\n", **ptr2);
	// **ptr2 = 999;
	// printf("data�� ��: %d\n", data);
	// printf("**ptr2�� ��: %d\n", **ptr2);

	// int a = 10;
	// int b = 20;
	// int* aPtr1 = &b;
	// int* bPtr1 = &a;
	// int** aPtr2 = &aPtr1;
	// int** bPtr2 = &bPtr1;
	// printf("**aPtr2�� ����Ű�� ��: %d\n", **aPtr2);
	// printf("**bPtr2�� ����Ű�� ��: %d\n", **bPtr2);

	/*
	int a = 10;
	int b = 20;

	int* aPtr1 = &a;
	int* bPtr1 = &b;

	int** aPtr2 = &aPtr1;
	int** bPtr2 = &bPtr1;

	printf("**aPtr2�� ����Ű�� ��: %d\n", **aPtr2);
	printf("**bPtr2�� ����Ű�� ��: %d\n", **bPtr2);

	int* temp = *bPtr2;
	*bPtr2 = *aPtr2;
	*aPtr2 = temp;

	printf("**aPtr2�� ����Ű�� ��: %d\n", **aPtr2);
	printf("**bPtr2�� ����Ű�� ��: %d\n", **bPtr2);
	*/
#pragma endregion

#pragma region ������ ������

	// printf("1�� 3���� ���� ������ : %d\n", 1 % 3);
	// printf("2�� 3���� ���� ������ : %d\n", 2 % 3);
	// printf("4�� 3���� ���� ������ : %d\n", 4 % 3);

#pragma endregion

#pragma region ���
	
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}

#pragma endregion


	return 0;
}

