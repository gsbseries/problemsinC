#include"fun.h"

int num(int n)
{
    if(n!=0)
    {
        return n +num(n-1);
    }
    else return 0;
}