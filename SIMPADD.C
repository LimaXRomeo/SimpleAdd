#include <stdio.h>
int main()
{
    int a,b,c,t;
    int i=1;
    printf("--------- Simple+ ---------\n");
    printf("       By LimaXRomeo       \n\n");
    printf("Type two demical numbers and I'll add them together.\n");
    printf("Octal and hexadecimal numbers of the result will also be shown.");
    printf("\nPress ENTER when you finish every number.\n\n ");
    while (i==1)
    {
	scanf("%d",&a);
	printf("+");
	scanf("%d",&b);
	t=a+b;
	printf("\n----------\n=%d\n\nOct: %o\nHex: %x\n\n",t,t,t);
	printf("Press 0 and then ENTER to exit.\n");
	printf("Type any other NUMBERS then ENTER to continue.\n");
	scanf("%d",&c);
	if (c==0)
	{
	    return 0;
	}
	else
	{
	    printf("\nPlease continue.\n ");
	}
    }
return 0;
}