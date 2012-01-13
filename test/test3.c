#include "syscall.h"

main()
{
    int n ;
    for( n = 1 ; n < 50 ; ++n ){
        if( n%13 == 0 ) Sleep(5);
        else PrintInt(3); // to indicate this is test3 runing
    }
}
