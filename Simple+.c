#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 3F");
	long a, b, t;
	int i = 1;
	while (i == 1)
	{
		printf("--------- Simple+ ---------\n       By LimaXRomeo       \n\nType two decimal numbers and I'll add them together.\nBinary, octal and hexadecimal numbers of the result will also be shown.\nPress ENTER when you finish every number.\n\n ");
		scanf_s("%ld", &a);
		printf("+");
		scanf_s("%ld", &b);
		t = a + b;
		if (t < 1024)
		{
		    long d, e, o = 0, k = 1;
			e = a + b;
			while (e)
			{
				d = e % 2;
				e = e / 2;
				o = o + d * k;
				k = k * 10;
			}
			printf("------------\n=%ld\n\nBin: %ld\nOct: %#lo\nHex: %#lx", t, o, t, t);
		}
		else
		{
			printf("----------\n=%ld\n\nBin: N/A\nOct: %#lo\nHex: %#lx", t, t, t);
		}
		printf("\n\nType 0 and ENTER to exit.\nType 1 and ENTER to continue.\n");
		int c;
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