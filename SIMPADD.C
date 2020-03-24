#include <stdio.h>
void main()
{
    unsigned long a,b,d,e,k=1,o=0,t;
    printf("----------- Simple+ -----------\n");
    printf("       By LimaXRomeo       \n");
    do{
	printf("Please enter your data:\n ");
	k=1,o=0;
	scanf("%lu",&a);
	printf("+");
	scanf("%lu",&b);
	t=a+b;
	if(t<1024)
	{
	    e=t;
	    while(e)
	    {
		d=e%2;
		e=e/2;
		o=o+d*k;
		k=k*10;
	    }
	    printf("\n----------\n=%lu\n\nBin: %lu\nOct: %#lo\nHex: %#lx\n\n",t,o,t,t);
	}
	else
	{
	    printf("\n----------\n=%lu\n\nBin: N/A\nOct: %#lo\nHex: %#lx\n\n",t,t,t);
	}
	printf("Press 1 to continue.\nPress ENTER to exit.\n\n");
    }while(getch()=='1');
}