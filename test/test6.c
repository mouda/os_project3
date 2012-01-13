#include "syscall.h"
main()
{
	int n;
	int m;
	for(n=0;n<10;n++)
	{
		PrintInt(n);
		m++;
		m=m*2;
		m=m/2;
		m--;
	}
}
