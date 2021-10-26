#include"fun.h"

    
int GCD(int val1,int val2)
{
    int gcd;
    for(int i=1; i <= val1 && i <= val2; ++i)
    {
    
        if(val1%i==0 && val2%i==0)
            gcd = i;
    }

return gcd;
}

int LCM(int val1,int val2)
{
    int lcm;
    int val3 = GCD(val1,val2);
    lcm = (val1 * val2)/ val3;
    return lcm;

}
