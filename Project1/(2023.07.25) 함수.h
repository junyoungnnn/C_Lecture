#include <stdio.h>

// �ڷ��� �Լ��� �̸� (�Ű�����)
void Function()
{
	// ���� �̸��� �Լ��� ������ �� �����ϴ�.
	printf("Function\n");
}

// ��ȯ��
// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������
// ���ϴ� ���� ���� �� �����ϴ�.
char CharFunction()
{
	return 'A';
}

#pragma region �Ű� ����
// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
// �����ϱ� ���� ����ϴ� �����Դϴ�.

void Calculator(int x)
{
	x = 440;
	printf("x�� ��: %d\n", x);
}

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("a��: %d, b��: %d\n", *x, *y);
}

// �Ű������� �Լ� ���ο����� ������ �̷������,
// �Լ��� ����Ǹ� �޸𸮿��� �������, ��������
// �Ű� ������ ������ �� �ֽ��ϴ�.

#pragma endregion


int main()
{
#pragma region ����(void) ������
	// // �ڷ����� �������� ���� ���·� ���
	// // �ڷ����� ������ �� �ִ� �������Դϴ�.
	// 
	// 
	// // int(4 byte)
	// int data = 100;
	// 
	// // float (4byte);
	// float pi = 3.141592f;
	// void* ptr = &data;
	// 
	// // ���� �����ʹ� �޸� �ּҿ� �����ؼ�
	// // ���� ������ �� �����ϴ�.
	// // *ptr = 10; ERROR
	// 
	// *(int*)ptr = 9999;
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *(int*)ptr);
	// printf("data�� ��: %d\n", data);
	// 
	// ptr = &pi;
	// printf("ptr�� ����Ű�� �� : %f\n", *(float*)ptr);
	// printf("data�� ��: %f\n", pi);
#pragma endregion
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// �Լ� ȣ��
	// Function();
	// CharFunction();


	// printf("%c\n", CharFunction());


#pragma endregion
#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű������� ������ ���޵Ǵ� ���Դϴ�.

	// int value = 100;
	// Calculator(value);
	// 
	// printf("value�� ��: %d\n", value);

#pragma endregion

	// ���ٲٱ�
	int a = 10;
	int b = 20;
	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("a��: %d, b��: %d\n", a, b);

	Swap(&a, &b);

}
