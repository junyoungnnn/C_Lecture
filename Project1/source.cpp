#include <stdio.h>
#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여
	// 작업을 수행하는 함수입니다.
void Function() {

	// 재귀함수는 함수를 계속 호출하기 때문에
	// 스택영역에 메모리가 계속 쌓이게 되므로
	// 스택 오버플로우가 발생합니다.
	printf("함수 호출\n");
	Function();
}

#pragma endregion

// 팩토리얼
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
	// 방어 코드
	if (count <= 0)
	{
		return;
	}

	printf("count의 값: %d\n", count);
	CountDown(count - 1);
	printf("CountDown(%d)함수 종료\n", count);
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

	// 빅 엔디안 방식
	// 네트워크에서는 빅 엔디안 방식으로 통일함.

	// 리틀 엔디안 방식
	// 뒤부터 읽음
	// 값이 작으면 조금만 읽으면 되기 때문.
	// 낮은 주소에 데이터의 낮은 바이트(LSB)부터 저장하는 방법입니다.
	

	// 프로그램이 정상적으로 종료되었을 때
	// 0이라는 값을 반환합니다.
	return 0;
}
