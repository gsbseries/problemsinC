#include "fun.h"

int main()
{
    int v1,v2,lcm,gcd;
    scanf("%d%d",&v1,&v2);
    lcm=LCM(v1,v2);
    gcd=GCD(v1,v2);
    printf("LCM=%d,GCD=%d",lcm,gcd);
    return 0;
    }