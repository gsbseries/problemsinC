#include"ipaddr.h"

union iptolint
{
    char ip[16];
    int n;
};

int main()
{
    union iptolint ipl;
    printf("Enter any IP Address to be converted: ");
    scanf("%s",ipl.ip);

    ipl.n=conv(ipl.ip);

    printf("\nEquivalent 32-bit long int is: %lu\n",ipl.n);
}