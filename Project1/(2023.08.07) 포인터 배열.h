#include <stdio.h>


int main()
{

#pragma region ������ �迭
	// �����͸� ��� �迭
	// int a = 10;
	// int b = 20;
	// int c = 30;
	// 
	// int* arrayPtr[3] = { &a, &b, &c };
	// 
	// printf("arrayPtr[1]�� �� : %p\n", arrayPtr[1]);
	// printf("b�� �ּ� : %p\n", &b);
	// printf("b�� �� : %d\n", b);
	// printf("arrayPtr[1]�� ����Ű�� �� : %d\n", *arrayPtr[1]);
	// 
	// *arrayPtr[1] = 200;
	// printf("arrayPtr[1]�� ����Ű�� �� : %d\n", *arrayPtr[1]);

#pragma endregion
#pragma region ¦���� Ȧ��
	//	int n;
	//	scanf_s("%d", &n);
	//	
	//	if (n % 2 == 0)
	//	{
	//		printf("%d�� ¦�� �Դϴ�", n);
	//	}
	//	else
	//		printf("%d�� Ȧ�� �Դϴ�", n);

#pragma endregion
#pragma region 2���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	// 2���� �迭 ���� �������� �޸� ������ ���·� ��¡�Ǹ�,
	// 2���� �迭�� ũ�⸦ ������ �� �迭�� ���� ũ�⸸ ������ �� �ֽ��ϴ�.

	// int array2D[3][3] =
	// {
	// 	{0,1,2},
	// 	{3,4,5},
	// 	{6,7,8},
	// };
	// 
	// //printf("array2D[1][1]�� �� : %d", array2D[1][1]);
	// 
	// // 2���� �迭�� ��� ���� ���еǸ� �տ� �ִ� �迭��
	// // ���� �ǹ��ϰ�, �ڿ� �ִ� �迭�� ���� �ǹ��մϴ�.
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("array2D[%d][%d]�� �� : %d\n", i , j, array2D[i][j]);
	// 	}
	// }
	// 
	// int(*ptr)[3] = array2D;
	// 
	// printf("ptr�� �� : %p\n", ptr);
	// printf("array2D�� ���� �ּ� : %p\n", array2D);
	// 
	// printf("ptr + 1�� �� : %p\n", ptr + 1);
	// printf("array2D + 1�� ���� �ּ� : %p\n", array2D+1);

#pragma endregion
#pragma region ���μ� ����

	int n;
	int c = 2;
	scanf_s("%d", &n);

	while (1)
	{
		if (n % c == 0)
		{
			printf("%d ", c);
			n /= c;
		}
		else
			c++;
		if (n == 1) break;
	}
#pragma endregion


	return 0;
}

