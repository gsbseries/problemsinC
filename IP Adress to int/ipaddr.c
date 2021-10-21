#include"ipaddr.h"

int conv(char ipadr[])
{
    int num=0,val;
    int p=24;
    char *tok,*ptr;
    tok=strtok(ipadr,".");
    while( tok != NULL)
    {
        val=strtol(tok,&ptr,10);
        num+=  val * (long)pow(2,p);
        p=p-8;
        tok=strtok(NULL,".");
    }
    return num;
}