#include <stdio.h>
#include <math.h>

#pragma region 구조체
	// 여러개의 변수를 하나의 집합으로
	// 구조화 한 다음 하나의 객체를 생성하는 것입니다.
/*
struct GameObject
{
	// int health; // 4
	// char grade; // 1
	// Padding  // 3
	// double x;   // 8

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화 할 수 없습니다.
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
#pragma region 구조체 선언

	// struct GameObject gameObect;
	// 
	// gameObect.health = 100;
	// gameObect.x = 3.45;
	// 
	// printf("gameObect.health의 값 : %d\n", gameObect.health);
	// printf("gameObect.x의 값 : %lf\n", gameObect.x);
	// 
	// struct GameObject gameObect1 = { 50, 2.14 };
	// printf("gameObect1.health의 값 : %d\n", gameObect1.health);
	// printf("gameObect1.x의 값 : %lf\n", gameObect1.x);

#pragma endregion
#pragma region 바이트 패딩
	// 맴버 변수를 메모리에서 CPU로 읽을 때 한번에 읽을 수 있도록,
	// 컴파일러가 레지스터의 블록에 맞추어 바이트를
	// 패딩 해주는 최적화 작업입니다.

	// printf("GameObject의 크기 : %d", sizeof(struct GameObject));
	
	// 구조체의 크기는 구조체를 구성하는 멤버 중에 크기가
	// 가장 큰 자료형의 배수가 되도록 정렬합니다.

#pragma endregion
#pragma region  제곱근 함수

	// int result = pow(10, 2);
	// float decimal = 100.0f;
	// 
	// // sqrt : 반환하는 값으로 long double, double, float.
	// decimal = sqrt(decimal);
	// 
	// printf("result 변수의 결과 : %d\n", result);
	// printf("decimal 변수의 결과 : %f\n", decimal);
#pragma endregion
#pragma region 두 점 사이의 거리
	struct Player player1 = { 2.0f,4.0f };
	struct Enemy monster = { 4.0f,9.0f };
	
	float x = monster.x - player1.x;
	float y = monster.y - player1.y;

	double distance = sqrt(pow(x, 2) + pow(y, 2));

	printf("두 오브젝트 사이의 거리 : %lf", distance);
#pragma endregion

	
	return 0;
}