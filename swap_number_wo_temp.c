// SWAP TWO NUMBER WITHOUT USING TEMP VARIABLE
/* 
XOR OPERATION
Same value = 0
Different value = 1
*/

#include <stdio.h>

int main()
{
    int a=10,b=20;
    
    a ^= b;
    b ^= a;
    a ^= b;
    printf("%d %d",a,b);

    return 0;
}
