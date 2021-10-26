#include "fun.h"

int main()
{
    int v1,v2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &v1, &v2);
    printf("G.C.D of %d and %d is %d.", v1, v2, hcf(v1, v2));
    return 0;
}