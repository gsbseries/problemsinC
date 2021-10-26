#include"fun.h"

    
int hcf(int n1,int n2)
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}