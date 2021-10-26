#include "fun.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char *Adr = "a.b.c.d";
    printf("a.b.c.d\n");
    printf(" 32 bit integer %ld\n",tobit("a.b.c.d"));
    return 0;
}
