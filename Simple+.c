#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 3F");
	int a, b, c, t, i = 1;
	while (i == 1)
	{
		printf("--------- Simple+ ---------\n       By LimaXRomeo       \n\nType two decimal numbers and I'll add them together.\nOctal and hexadecimal numbers of the result will also be shown.\nPress ENTER when you finish every number.\n\n ");
		scanf_s("%d", &a);
		printf("+");
		scanf_s("%d", &b);
		t = a + b;
		void dectobin(int n);
		{
			int d, e, o = 0, k = 1;
			e = a + b;
			while (e)
			{
				d = e % 2;
				e = e / 2;
				o = o + d * k;
				k = k * 10;
			}
			printf("------------\n=%d\n\nBin: %d\nOct: %#o\nHex: %#x\n\nType 0 and ENTER to exit.\nType 1 and ENTER to continue.\n", t, o, t, t);
		loop:scanf_s("%d", &c);
			if (c == 0)
			{
				return 0;
			}
			else if (c == 1)
			{
				system("cls");
			}
			else
			{
				printf("Invalid!\n");
				goto loop;
			}
		}
	}
}