#include <stdio.h>
#include <math.h>

float dec_bin()
{
    int x,y;
    printf("Enter a decimal number: ");
    scanf("%d", &x);
    y=x;
    long long bin = 0;
    int rem, i = 1, step = 1;

    while (x != 0) {
        rem = x % 2;
        x /= 2;
        bin += rem * i;
        i *= 10;
    }
    printf("%d in decimal = %lld in binary", y, bin);
    return bin;
}

int bin_dec()
{
 long long y,x;
    printf("Enter a binary number: ");
    scanf("%lld", &y);
    int dec = 0, i = 0, rem;
    x=y;
    while (y != 0) {
        rem = y % 10;
        y/= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    printf("%lld in binary = %d in decimal", x, dec);

    return dec;
}




void decimal_binary_conversion()
{
     int c;
    printf("Welcome to binary<--->decimal Conversion");
   
    
        printf("\nEnter your choice\n"
        "1. dec to bin\n"
        "2. bin to dec\n");

        scanf("%d",&c);
        switch(c)
        {
            case 1: 
                 dec_bin();
                 break;
            case 2: 
                 bin_dec();
                 break;
            default:
                 printf("Invalid input");
                 break;
          
        }
    
    
}
