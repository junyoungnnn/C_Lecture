#include <stdio.h>
#include <math.h>

#pragma region ����ü
	// �������� ������ �ϳ��� ��������
	// ����ȭ �� ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�.
/*
struct GameObject
{
	// int health; // 4
	// char grade; // 1
	// Padding  // 3
	// double x;   // 8

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ �� �� �����ϴ�.
};
*/
#pragma endregion

struct Player
{
	float x;
	float y;
};

struct Enemy
{
	float x;
	float y;
};

int main()
{
#pragma region ����ü ����

	// struct GameObject gameObect;
	// 
	// gameObect.health = 100;
	// gameObect.x = 3.45;
	// 
	// printf("gameObect.health�� �� : %d\n", gameObect.health);
	// printf("gameObect.x�� �� : %lf\n", gameObect.x);
	// 
	// struct GameObject gameObect1 = { 50, 2.14 };
	// printf("gameObect1.health�� �� : %d\n", gameObect1.health);
	// printf("gameObect1.x�� �� : %lf\n", gameObect1.x);

#pragma endregion
#pragma region ����Ʈ �е�
	// �ɹ� ������ �޸𸮿��� CPU�� ���� �� �ѹ��� ���� �� �ֵ���,
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ��
	// �е� ���ִ� ����ȭ �۾��Դϴ�.

	// printf("GameObject�� ũ�� : %d", sizeof(struct GameObject));
	
	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.

#pragma endregion
#pragma region  ������ �Լ�

	// int result = pow(10, 2);
	// float decimal = 100.0f;
	// 
	// // sqrt : ��ȯ�ϴ� ������ long double, double, float.
	// decimal = sqrt(decimal);
	// 
	// printf("result ������ ��� : %d\n", result);
	// printf("decimal ������ ��� : %f\n", decimal);
#pragma endregion
#pragma region �� �� ������ �Ÿ�
	struct Player player1 = { 2.0f,4.0f };
	struct Enemy monster = { 4.0f,9.0f };
	
	float x = monster.x - player1.x;
	float y = monster.y - player1.y;

	double distance = sqrt(pow(x, 2) + pow(y, 2));

	printf("�� ������Ʈ ������ �Ÿ� : %lf", distance);
#pragma endregion

	
	return 0;
}