#include <stdio.h>
#include <stdlib.h>

int LCM(int,int);

int main(void)
{
	int num1,num2;
	printf("叫块璶―ぇ程そ计ㄢ计:");
	scanf_s("%d%d", &num1,&num2);
	printf("程そ计:%d\n", LCM(num1, num2));
	system("pause");
}

int LCM(int x,int y)
{
	int greater,lcm;
	if (x > y)
		greater = x;
	else
		greater = y;

	while (1)
	{
		if ((greater % x == 0) && (greater % y == 0))
		{
			lcm = greater;
			break;
		}
		else
			greater += 1;
	}	
	return lcm;
}