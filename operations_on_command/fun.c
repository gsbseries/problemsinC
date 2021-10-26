#include"fun.h"

int SUM(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int AVG(int arr[],int n)
{
    int avg=0,sum=0;
    sum= SUM(arr,n);
    avg=sum/n;
    return avg;
}
int MIN(int arr[],int n)
{
    int min;
    min =arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        else
        {
            continue;
        }
    }
    return min;

}
int MAX(int arr[],int n)
{
    int max;
    max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max =arr[i];
        }
        else
        {
            continue;
        }
    }
    return max;
}

