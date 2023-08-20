#include <stdio.h>


int main()
{
	// 메모리의 주소값을 저장할 수 있는 변수입니다.

	int value = 100;

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며
	// 포인터 변수에 변수의 주소를 저장하게 되면
	// 해당 변수의 시작 주소를 가리키게 됩니다.

	int* ptr = &value;

	printf("ptr의 값 : %p\n", ptr);
	printf("value의 주소 값 : %p\n", &value);
	printf("ptr 변수의 고유 주소 : %p\n", &ptr);

	*ptr = 9999;

	// 포인터가 가리키는 메모리 공간의 자료형은
	// 알 수 없으므로 포인터가 가리키는 메모리의
	// 자료형을 선언해주어야 합니다.

	printf("ptr 변수가 가리키는 값 : %d\n", *ptr);
	printf("value 변수의 값 : %d\n", value);

}

