#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 3F");
	int a,b,c,t,i = 1;
	while (i == 1)
	{
		printf("--------- Simple+ ---------\n       By LimaXRomeo       \n\nType two decimal numbers and I'll add them together.\nOctal and hexadecimal numbers of the result will also be shown.\nPress ENTER when you finish every number.\n\n ");
		scanf_s("%d", &a);
		printf("+");
		scanf_s("%d", &b);
		t = a + b;
		printf("------------\n=%d\n\nOct: %o\nHex: %x\n\nPress 0 and ENTER to exit.\nType any other NUMBERS and ENTER to continue.\n", t, t, t);
		scanf_s("%d", &c);
		if (c == 0)
		{
			return 0;
		}
		else
		{
			system("cls");
		}
	}
}