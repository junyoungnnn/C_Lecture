#include <stdio.h>

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.
	// �Ϲ� �Լ��� ������� ������ �ֱ� ������ ������ �Լ��� 
	// �ζ��� �Լ��� ó���ϴ°� ����.
inline void Information()
{
	// ����
}
	
#pragma endregion

int main()
{
#pragma region �ζ��� �Լ�

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ���
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
	//Information();

	// �ζ��� �Լ��� ��� ������ ������ Ȯ���Ǹ�, ������ �� �ζ��� �Լ���
	// �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ��� ��ȯ�Ǳ⵵ �մϴ�.
#pragma endregion
#pragma region ������ �°�
	// �Ϲ������� CPU�� ó���ϱ⿡ *���� ������*
	// ũ���� ���� �ڷ����� int �̹Ƿ�, int�� ����
	// ���� �ڷ����� int �ڷ������� ��ȯ�ϴ� ���Դϴ�.

	// char a = 10;  // 1 byte
	// short b = 20; // 2 byte
	// 
	// printf("a ������ b ������ ���� �޸� ũ�� : %d\n", sizeof(a + b));


#pragma endregion
#pragma region ��ȣ���� �ڷ���
	// char alphabet = 128; // -128 ~ 127
	// unsigned char unAlphabet = 255; // 0 ~ 255

	// printf("alphabet ������ �� : %d\n", alphabet);
	// printf("unAlphabet ������ �� : %u\n", unAlphabet);
	// char a = -5;
	// unsigned char b = -5;
	// 
	// int data1 = a; // 4byte [1111 1111][1111 1111][1111 1111][1111 1011] <- 1byte
	// int data2 = b; // 4byte [0000 0000][0000 0000][0000 0000][1111 1011] <- 1byte
	// 
	// printf("data1 : %d, data2�� �� : %d\n", data1, data2);
	// printf("data1 : %u, data2�� �� : %u\n", data1, data2);

	// unsigned -> "%u" 
#pragma endregion


	return 0;
}