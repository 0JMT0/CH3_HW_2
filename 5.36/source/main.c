#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int time = 0;

int main(void)
{
	int n = 64;

	hanoi(n, 'A', 'B', 'C');
	printf("���� %d �h�e����@�ݲ��� %d ��\n", n, time);
	system("pause");
	return 0;
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", time++, n, A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", time++, n, A, C);
		hanoi(n - 1, B, A, C);
	}
}