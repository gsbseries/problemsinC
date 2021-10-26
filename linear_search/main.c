#include"fun.h"

int main()
{
    int n;
    printf("how many elements");
    scanf("%d",&n);
    bool out;
    out= linear(n);
    if(out)
    {
        printf("elements found");

    }
    else
    {
        printf("elements not found");
    }
}