#include "fun.h"

int BinarySearch(int list[],int first,int last ,int search)
{
    int middle;

    if(first>last)
    {
        printf("Key not found\n");
        return;
    }
    middle=(first+last)/2;
    if(list[middle]==search)
    {
        printf("key found  at %d th position \n",middle);
    }
    else if(list[middle]>search)
    {
        BinarySearch(list,first,middle-1,search);
    }
    else if(list[middle]<search)
    {
        BinarySearch(list,middle+1,last,search);
    }

    



}