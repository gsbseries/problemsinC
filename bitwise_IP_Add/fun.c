#include "fun.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int tobit(char *IPadd)
{
    char n[16], a[16];
    static long int ans=0;
     char* Ipline;
    strncpy(n,a,16);
    char* tok=strtok(n,".");
    char chr[sizeof(tok)];
    while( tok != NULL)
    {
        strncpy(chr,tok,sizeof(tok));
        ans = ans << 8;
        ans |= atoi(chr);   
        tok=strtok(NULL,".");
    }
    return ans;

}