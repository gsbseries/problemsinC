#include<stdio.h>
#include<string.h>

int charToInt(char c)
{
	int num = 0;

	num = c - '0';

	return num;
}

int main( ) {

    char ipadd[20];

   long int val = 0;
   
   strcpy( ipadd, "192.58.265.25");
    printf( "ip add : %s\n", ipadd);
   for(int i=0; ipadd[i] != '\0'; i++)
    {
        if(ipadd[i] ^ '.')
        {
            val = val*10 + charToInt(ipadd[i]);
            printf("%c\t%d\t%d\n", ipadd[i], charToInt(ipadd[i]), val);
        }
    }  
    
    printf("%ld\n", val);
   

   return 0;
}