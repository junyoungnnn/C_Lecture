#include <stdio.h>

void main()
{
#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	// switch 문의 경우 조건에 해당하는 값에 따라 조건의 위치로 이동합니다.

	//	int input = 7;
	//	char grade = 'A';
	//	float exp = 5.75f;
	//	// float는 실수라서 부동소수점 오차때문에 값을 정확하게 비교할 수 없음.
	//	// switch 문은 조건식으로 실수형 변수와 실수형 상수를
	//	// 사용할 수 없습니다.
	//	switch (grade)
	//	{
	//		// break 문이란?
	//		// 특정한 지점에서 분기를 탈출하는 제어문입니다.
	//	case 'A': printf("case 1\n");
	//		break;
	//	case 'B': printf("case 2\n");
	//		break;
	//	case 'C': printf("case 3\n");
	//		break;
	//	default: printf("알 수 없는 값입니다.");
	//		break;
	//	}
	//	
	// switch 문은 해당 조건이 완료되었을 때,
	// break문이 없으면 나머지 밑에 있는 case문까지 계속 실행되다가 종료합니다.
#pragma endregion
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문입니다.

	// 증감 연산자?
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자입니다.

	// // 전위 증감 연산자
	// // 변수의 값을 증감 시킨 후에 연산을 수행합니다.
	// 
	// // int x = 0;
	// // int y = 0;
	// // x = ++y;
	// printf("x의 값 : %d, y의 값 %d\n", x, y);
	// 
	// // 후위 증감 연산자
	// // 대입 연산을 수행한 다음 변수의 값을 증감시킵니다.
	// 
	// int damage = 10;
	// int health = damage--;
	// 
	// printf("health의 값: %d\n", health);
	// printf("damage의 값: %d\n", damage);
	// 
	// // 후위 증감 연산자의 경우 변화되는 값을 나중에
	// // 가지고 오기 때문에 추가적인 메모리가 필요합니다.

	// for 문이란?
	/*
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 흿수만큼
	// 반복하는 반복문입니다.

	// 1. (초기식) int i = 0;
	// 2. (조건식) i < 5
	// 3. (반복할 내용) printf("for문\n");
	// 4. (증감식) i++;

	for (int i = 0; i < 5; i++)
	{
		printf("for문\n");
	}

	// for문의 경우 조건이 끝나는 형태와 반대로 초기식을
	// 연산하게 되면 조건이 일치하지 않아 계속
	// 반복적으로 실행행되는 문제가 발생합니다.
	*/

	// for문을 이용하여 초기식으로 1 ~ 10울 출력해주세요.
	/*
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		printf("%d\n",i);
	//	}
	*/

	// 복합 대입 연산자
	/*
	// +=, -=, , =, %=

	int data = 10;

	data += 10;
	printf("data에 '+=' 한 결과 : %d\n", data);

	data -= 5;
	printf("data에 '-=' 한 결과 : %d\n", data);

	data *= 3;
	printf("data에 '*=' 한 결과 : %d\n", data);

	data /= 5;
	printf("data에 '/=' 한 결과 : %d\n", data);
	*/

	// 2중 for문
	/*
	for (int i = 0; i < 3; i++)
	{
		printf("밖에 있는 for문\n");
		for (int j = 0; j < 3; j++)
		{
			printf("안에 있는 for문\n");
		}
	}
	*/

	// 숙제 구구단 만들기
	/*
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
	*/

	// while 문
	/*
	// 특정 조건을 만족할 떄까지 계속해서 주어진
	// 명령을 반복하는 명령문입니다.

	int count = 5;

	while (count)
	{
		printf("실행중...\n");
		count--;
	}

	while (1)
	{
		// 키 입력

		// 시간에 따라 자동으로 움직이는 오브젝트
	}
	*/

	// do-while문
	/*
	// 로그인시스템만들때 사용했었음.
	// 조건과 상관없이 한 번의 작업을 수행한 다음
	//조건에 따라 명령문을 실행하는 반복문입니다.
	do
	{
		printf("게임 시작\n");
	} while (10 > 20);
	*/
#pragma endregion

}