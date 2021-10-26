#include "fun.h"

int C(int N)
{
    int count=0;
 
    while (N > 0) {
 
        if (N & 1) {
            count++;
        }

        else {
            count=0;
        }
 
        N = N >> 1;
        return count;
    }
}