#include <stdio.h>
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ�
	// �۾��� �����ϴ� �Լ��Դϴ�.
void Function() {

	// ����Լ��� �Լ��� ��� ȣ���ϱ� ������
	// ���ÿ����� �޸𸮰� ��� ���̰� �ǹǷ�
	// ���� �����÷ο찡 �߻��մϴ�.
	printf("�Լ� ȣ��\n");
	Function();
}

#pragma endregion

// ���丮��
// !5(120) !4(24) !3(6) !2 !1

int Factorial(int num)
{
	if (num > 0)
	{
		return num * Factorial(num - 1);
	}
	else
		return 1;
}


// CountDown()
void CountDown(int count)
{
	// ��� �ڵ�
	if (count <= 0)
	{
		return;
	}

	printf("count�� ��: %d\n", count);
	CountDown(count - 1);
	printf("CountDown(%d)�Լ� ����\n", count);
}

int main()
{
	// CountDown(3);

	// printf("%d", Factorial(5));

	int data = 10;
	int* ptr = &data;

	// 0a 00 00 00
	// 
	// [] [] [] []

	// �� ����� ���
	// ��Ʈ��ũ������ �� ����� ������� ������.

	// ��Ʋ ����� ���
	// �ں��� ����
	// ���� ������ ���ݸ� ������ �Ǳ� ����.
	// ���� �ּҿ� �������� ���� ����Ʈ(LSB)���� �����ϴ� ����Դϴ�.
	

	// ���α׷��� ���������� ����Ǿ��� ��
	// 0�̶�� ���� ��ȯ�մϴ�.
	return 0;
}
