#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("��J�r��:");
	char c;
	int ascii;
	scanf_s("%c", &c);
	ascii = c;
	if (ascii >= 65 && ascii <= 90)//A~Z
	{
		ascii = ascii + 32;
	}
	else if(ascii >= 97 && ascii <= 122)//a~z
	{
		ascii = ascii - 32;
	}
	c = ascii;
	printf("�r���ഫ:%c\n",c);
	return 0;
}