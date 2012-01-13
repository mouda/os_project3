#include "syscall.h"
main()
{
    int n;
    for( n = 1 ; n < 20 ; n++ )
    {
        if( n%5 == 3 ) Sleep(3);
        else PrintInt(5);
    }
}
