#include <stdio.h>
#include "SoundManager.h"
#include "ControlSound.h"

// ���� ��ó�����̶�?
// ���� �ҽ� ���Ͽ� �ܺο� �ִ� ������ �����Ͽ�
// �ܺο� �ִ� �Լ��� ����� �� �ֵ��� �����ϴ� ���Դϴ�.

// ���� ó�� ��ó������ ��� ���̺귯�� ������ ������ ����
// <�ܺ�����.h>�� ��������, ���� ��ο��� �ܺ� ������
// ������ ���� "�ܺ� ����.h"�� �����ɴϴ�.

#pragma region ���� ����
	// �Լ� �ܺο� ����� ������ ��𿡼�����
	// ������ �� ������, ���α׷��� ����Ǿ�߸�,
	// �޸𸮿��� �����Ǵ� �����Դϴ�.
int level;	// �ʱ�ȭ�� �Ǿ����� ���� (BSS ����)

int stage = 1; // �ʱ�ȭ�� �̷���� �������� (.data ����)

#pragma endregion
#pragma region ���� ����
	// ���� ������ ���� ������ Ư���� ���ÿ� ������ ������,
	// ���α׷��� ����Ǿ�߸� �޸𸮿��� �����Ǵ� �����Դϴ�.

void ShowStat()
{	// �� �ѹ��� �ʱ�ȭ�� �̷�����ϴ�.
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
#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ �Լ� ��������
	// ����� �����ϸ�, { }�� ����� �Ǹ�
	// �޸𸮿��� �����Ǵ� �����Դϴ�.

	//	int data = 100; // A������ �ִ� data ����
	//	
	//	{
	//		int data = 200; // B ������ �ִ� data ����
	//	}
	//
	// printf("data ������ ��: %d\n", data);

#pragma endregion
	// ShowStat();
	// ShowStat();

#pragma region ���� �� (Short- curcuit)
	// ù ��° �μ��� ���� �����ϱ⿡ ������� ���� ��쿡��
	// �� ��° �μ��� �򰡵Ǵ� �Ϻ� ���α׷��� ����� �Ϻ� �� �������Դϴ�.

	//	int i = 1;
	//	int j = 0;
	//	
	//	if (i > j || j++)
	//	{
	//		printf("j�� �� : %d\n", j);
	//	}
	//	
	//	if (i > j && j++)
	//	{
	//		printf("j�� �� : % d\n", j);
	//	}
	//	else printf("j�� �� : % d\n", j);

#pragma endregion

	Play();

	return 0;
}
