#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <.../Inc/generic_swap.h>

int main()
{
int a = 5;
int b= 3;
genericSwap (&a,&b, sizeof(int));
printf("a = %d b = %d \n",a,b);

char Name [20] = "TONYSTARK";
char nickName [20] = "IRONMAN";

genericSwap (Name, nickName, sizeof(Name));
printf("Name =%s nickName=%s \n", Name, nickName);
}
