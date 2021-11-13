#include <stdio.h>
#include <stdlib.h>

int recursive_eponent(int x, int y);

int main(void)
{
	int num1;
	int num2;
	printf("Enter base and exponent:");
	scanf_s("%d%d", &num1,&num2);
	printf("%d^%d = %d\n", num1, num2, recursive_eponent(num1,num2));
	system("pause");
	return 0;
}

int recursive_eponent(int x, int y)
{
	int result;
	if (y == 1)
		result = x;
	else if (y == 0)
		result = 1;
	else
		result = x * recursive_eponent(x, y-1);
	return result;
}