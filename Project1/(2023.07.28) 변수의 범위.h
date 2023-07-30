#include <stdio.h>
#include "SoundManager.h"
#include "ControlSound.h"

// 파일 전처리문이란?
// 현재 소스 파일에 외부에 있는 파일을 포함하여
// 외부에 있는 함수를 사용할 수 있도록 설정하는 것입니다.

// 피일 처리 전처리문의 경우 라이브러리 파일을 참조할 때는
// <외부파일.h>로 가져오며, 현재 경로에서 외부 파일을
// 참조할 때는 "외부 파일.h"로 가져옵니다.

#pragma region 전역 변수
	// 함수 외부에 선언된 벼수로 어디에서든지
	// 접근할 수 있으며, 프로그램이 종료되어야만,
	// 메모리에서 해제되는 변수입니다.
int level;	// 초기화가 되어있지 않은 (BSS 영역)

int stage = 1; // 초기화가 이루어진 전역변수 (.data 영역)

#pragma endregion
#pragma region 정적 변수
	// 지역 변수와 전역 변수의 특성을 동시에 가지고 있으며,
	// 프로그램이 종료되어야만 메모리에서 해제되는 변수입니다.

void ShowStat()
{	// 단 한번만 초기화가 이루어집니다.
	// static int score = 0;
	// 
	// score++;
	// 
	// int count = 0;
	// 
	// count++;
	// level++;
	// 
	// printf("count : %d\n", count);
	// printf("level : %d\n", level);
}
#pragma endregion

int main()
{
#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로 함수 내에서만
	// 사용이 가능하며, { }를 벗어나게 되면
	// 메모리에서 해제되는 변수입니다.

	//	int data = 100; // A지역에 있는 data 변수
	//	
	//	{
	//		int data = 200; // B 지역에 있는 data 변수
	//	}
	//
	// printf("data 변수의 값: %d\n", data);

#pragma endregion
	// ShowStat();
	// ShowStat();

#pragma region 단축 평가 (Short- curcuit)
	// 첫 번째 인수가 값을 경정하기에 충분하지 않은 경우에만
	// 두 번째 인수가 평가되는 일부 프로그래밍 언어의 일부 논리 연산자입니다.

	//	int i = 1;
	//	int j = 0;
	//	
	//	if (i > j || j++)
	//	{
	//		printf("j의 값 : %d\n", j);
	//	}
	//	
	//	if (i > j && j++)
	//	{
	//		printf("j의 값 : % d\n", j);
	//	}
	//	else printf("j의 값 : % d\n", j);

#pragma endregion

	Play();

	return 0;
}
