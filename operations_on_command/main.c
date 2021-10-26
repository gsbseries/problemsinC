#include "fun.h"
int main()
{
    int num=0,array[100], choice,output=0;
    printf("Enter the operation\n 1.sum \n 2.average \n 3.min \n 4.max");
    scanf("%d", &choice);
    printf("enter no of elements");
    scanf("%d",&num);
    printf("enter the elements");
    for(int i=0;i<num;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d",&array[i]);
    }
    switch(choice)
    {
        case 1:
            output = SUM(array,num);
            printf("sum =%d", output);
            break;
        case 2:
            output = AVG(array,num);
            printf("average =%d", output);
            break; 
        case 3:
            output = MIN(array,num);
            printf("%d",output);
            break;
        case 4:
            output = MAX(array,num);
            printf("%d",output);
            break;
        default:
            printf("INVALID");
            break;
    }
     return 0;
    }