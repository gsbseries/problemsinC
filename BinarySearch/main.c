#include "fun.h"

int main()
{
    int key,size,i;

    int list[25];

    printf("Enter the size of list : ");
    scanf("%d",&size);

    printf("Enter elements \n");

    for(i=0;i<size;i++)
    {
        scanf("%d",&list[i]);
    }
    printf("Enter the key to Search : \n");
    scanf("%d",&key);

    BinarySearch(list,0,size,key);
}