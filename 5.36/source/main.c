#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int time = 0;

int main(void)
{
	int n = 64;

	hanoi(n, 'A', 'B', 'C');
	printf("移動 %d 層河內塔共需移動 %d 次\n", n, time);
	system("pause");
	return 0;
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", time++, n, A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", time++, n, A, C);
		hanoi(n - 1, B, A, C);
	}
}