#include "fun.h"

char isPalindrome(char *str)
{

    int l=0;
    int h=strlen(str) -1;

    while(h>l)
    {
        if(str[l++] != str[h--])
        {
            printf("%s is not a palindrome.",str);
            return;
        }
        else
        {
            printf("%s is clear a palindrome.",str);

        }
    }
}