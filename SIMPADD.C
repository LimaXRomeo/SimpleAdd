#include <stdio.h>
int main()
{
    int c,i=1;
    printf("--------- Simple+ ---------\n");
    printf("       By LimaXRomeo       \n\n");
    printf("Type two demical numbers and I'll add them together.\n");
    printf("Octal and hexadecimal numbers of the result will also be shown.");
    printf("\nPress ENTER when you finish every number.\n\n ");
    while (i==1)
    {
	long long a,b,d,e,k=1,o=0,t;
	scanf("%ld",&a);
	printf("+");
	scanf("%ld",&b);
	t=a+b;
	if(t<1024)
	{
	    e=a+b;
	    while(e!=0)
	    {
		d=e%2;
		printf("d=%ld e=%ld o=%ld k=%ld",d,e,o,k);
		e=e/2;
		o=o+d*k;
		k=k*10;
	    }
	    printf("\n----------\n=%ld\n\nBin:%ld\nOct: %#lo\nHex: %#lx\n\n",t,o,t,t);
	}
	else
	{
	    printf("\n----------\n=%ld\n\nBin: N/A\nOct: %#lo\nHex: %#lx\n\n",t,t,t);
	}
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