#include <stdio.h>
#include <limits.h>

#pragma region ������
	// ���� ������ ����� �����Դϴ�.
	
enum State
{
	IDLE,
	ATTACK = 100,
	DIE

	// enum�� ������ ���� ������ �� ������,
	// �߰��� ���� �������� �� �״������� ������ ����
	// ������ ���� +1�� �����˴ϴ�.
};
#pragma endregion


int main()
{
#pragma region ������

	enum State state;

	// state = IDLE;
	// printf("state�� IDLE ��: %d\n", state);
	// state = ATTACK;
	// printf("state�� ATTACK ��: %d\n", state);

	//	state = DIE;
	//	switch (state)
	//	{
	//	case IDLE: printf("��� ����\n");
	//		break;
	//	case ATTACK: printf("���� ����\n");
	//		break;
	//	case DIE: printf("���� ����\n");
	//		break;
	//	default:
	//		break;
	//	}
#pragma endregion
#pragma region �� ����ϱ�
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/

#pragma endregion
#pragma region 1~10������ ��
	/*
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	 }
	printf("%d\n", sum);
	*/
#pragma endregion
#pragma region ASCII �ڵ�
	// 1963�� �̱� ANSI���� ǥ��ȭ�� ������ȯ�� 7��Ʈ ��ȣü���̴�.
	// 128���� ����, ����, Ư������, ����ڰ� ǥ���˴ϴ�.

	// char alphabet = 65;
	// printf("alphabet ������ ASCII �ڵ��� �� : %c\n", alphabet);
	// printf("alphabet ������ �� : %d\n", alphabet);

	//	for (int i = 65; i < 91; i++)
	//	{
	//		printf("%c", i);
	//	}

#pragma endregion
#pragma region �ּڰ��� �ִ�

	// [10] [5] [11] [1] [3]
	int max = 0;
	int min = INT_MAX;

	int arr[5] = { 10,5,11,1,3 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);
#pragma endregion



	return 0;
}