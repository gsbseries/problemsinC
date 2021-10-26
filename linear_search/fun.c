#include"fun.h"

bool linear(int num)
{   int i;
    int arr[100];
    printf("Enter array elements");
    for(int i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;

    printf("enter element to search\n");
    scanf("%d",&x);
       for(int i=0;i<num;i++)
       {
           if(arr[i]==x)
           {
               break;
           }
       }

       if(i<num) 
       {
           return true;
       }
       else 
       {
           return false;
       }
}