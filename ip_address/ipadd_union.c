#include <stdio.h>
#include <string.h>
 
union Data {
   long int num;
   char ipadd[20];
};
 
int charToInt(char c)
{
	int num = 0;

	num = c - '0';

	return num;
}
 
int main( ) {

   union Data data;        

   long int val = 0;
   
   strcpy( data.ipadd, "192.58.265.25");
    printf( "data.str : %s\n", data.ipadd);
   for(int i=0; data.ipadd[i] != '\0'; i++)
    {
        if(data.ipadd[i] != '.')
        {
            val = val*10 + charToInt(data.ipadd[i]);
            printf("%c\t%d\t%d\n", data.ipadd[i], charToInt(data.ipadd[i]), val);
        }
    }  
    
    printf("%ld\n", val);
   printf( "data.str : %s\n", data.ipadd);

   return 0;
}

