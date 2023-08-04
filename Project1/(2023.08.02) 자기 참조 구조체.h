#include <stdio.h>

#pragma region typedef

typedef int int16_m;

typedef struct Node
{
	int data;
	char name[10];
	Node* next;
}Node;
#pragma endregion


int main()
{
	int data = 100;

	int16_m value = 200;

	// size_t // 배열의 크기를 정할때 사용

#pragma region typedef
	Node node1 = { 100, NULL };
	Node node2 = { 200, NULL };
	Node node3 = { 300, NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;
	node1.next->next->data = 500;


	// printf("%d", node3.data);
	// printf("node1.next : %p\n", node1.next);
	// printf("node1.next -> next : %p\n", node1.next->next);
	// printf("node1.next -> next -> next : %p\n", node1.next->next->next);

	/*
	Node currentNode;
	currentNode.next = &node1;

	while (currentNode.next != NULL)
	{
		printf("currentNode의 값 : %d\n", currentNode.next->data);
		currentNode.next = currentNode.next ->next;
	}
	*/

	Node* currentNode = &node1;
	while (currentNode != NULL)
	{
		printf("currentNode의 값 : %d\n", currentNode->data);
		currentNode = currentNode->next;
	}


#pragma endregion


	return 0;
}