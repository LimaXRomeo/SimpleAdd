#include <stdio.h>
#include <stdlib.h>
void main()
{
	unsigned long long a,b,t;
	system("color 3F");
	do{system("cls");
		printf("------------- Simple+ -------------\n       By LimaXRomeo       \n\n"
        "Add two positive decimal numbers together.\nPress ENTER after typing each number.\n\n ");
		scanf("%llu",&a);
		printf("+");
		scanf("%llu",&b);
		t=a+b;
		if(t<1048576)
		{
		    unsigned long long d,e,o=0,k=1;
			e=a+b;
			while(e)
			{
				d=e%2;
				e=e/2;
				o=o+d*k;
				k=k*10;
			}
			printf("------------\n=%llu\n\nBin: %llu\nOct: %#llo\nHex: %#llx",t,o,t,t);
		}
		else
		{
			printf("----------\n=%llu\n\nBin: N/A\nOct: %#llo\nHex: %#llx", t, t, t);
		}
		printf("\n\nPress C to continue, or press other keys to exit.\n");
	}while(getch()=='c'||getch()=='C');
}
