#include <stdio.h>
#include <stdlib.h>

int LCM(int,int);

int main(void)
{
	int num1,num2;
	printf("�п�J�n�D���̤p�����ƪ����:");
	scanf_s("%d%d", &num1,&num2);
	printf("�̤p�����Ƭ�:%d\n", LCM(num1, num2));
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