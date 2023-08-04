#include <stdio.h>


int main()
{
#pragma region 이중 포인터
	// ptr2는 ptr의 시작 주소를 가르키고
	// ptr은 data의 주소를 가르킨다.
	// *ptr 은 data의 값을 가르키고
	// **ptr2는 *ptr이 가르키는 값인 data의 값을 가르킨다.

	// int data = 300;
	// int* ptr = &data;
	// int** ptr2 = &ptr;
	// printf("**ptr2의 값: %d\n", **ptr2);
	// **ptr2 = 999;
	// printf("data의 값: %d\n", data);
	// printf("**ptr2의 값: %d\n", **ptr2);

	// int a = 10;
	// int b = 20;
	// int* aPtr1 = &b;
	// int* bPtr1 = &a;
	// int** aPtr2 = &aPtr1;
	// int** bPtr2 = &bPtr1;
	// printf("**aPtr2이 가르키는 값: %d\n", **aPtr2);
	// printf("**bPtr2이 가르키는 값: %d\n", **bPtr2);

	/*
	int a = 10;
	int b = 20;

	int* aPtr1 = &a;
	int* bPtr1 = &b;

	int** aPtr2 = &aPtr1;
	int** bPtr2 = &bPtr1;

	printf("**aPtr2이 가르키는 값: %d\n", **aPtr2);
	printf("**bPtr2이 가르키는 값: %d\n", **bPtr2);

	int* temp = *bPtr2;
	*bPtr2 = *aPtr2;
	*aPtr2 = temp;

	printf("**aPtr2이 가르키는 값: %d\n", **aPtr2);
	printf("**bPtr2이 가르키는 값: %d\n", **bPtr2);
	*/
#pragma endregion

#pragma region 나머지 연산자

	// printf("1을 3으로 나눈 나머지 : %d\n", 1 % 3);
	// printf("2를 3으로 나눈 나머지 : %d\n", 2 % 3);
	// printf("4를 3으로 나눈 나머지 : %d\n", 4 % 3);

#pragma endregion

#pragma region 약수
	
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}

#pragma endregion


	return 0;
}

