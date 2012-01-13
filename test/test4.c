#include "syscall.h"
main()
{
    int n ;
    for( n = 1; n < 80 ; ++n ){
        if( n%11 == 0 ) Sleep(4);
        else PrintInt(4); // indicate this is test4 running
    }
}
