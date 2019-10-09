#include <stdio.h>
int main()
{
    int a,b,c,d,e,i=1,k=1,t,o=0;
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
	e=a+b;
	while(e)
	{
	    d=e%2;
	    e=e/2;
	    o=o+d*k;
	    k=k*10;
	}
	printf("\n----------\n=%d\n\nOct: %#o\nHex: %#x\n\n",t,t,t);
	printf("Press 0 and then ENTER to exit.\n");
	printf("Type 1 then ENTER to continue.\n");
    loop:scanf("%d",&c);
	if (c==0)
	{
	    return 0;
	}
	else if (c==1)
	{
	    printf("\nPlease continue.\n ");
	}
	else
	{
	    printf("Invalid!\n");
	    goto loop;
	}
    }
return 1;
}