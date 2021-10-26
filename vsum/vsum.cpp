#include<iostream>
#include<vector>
#include "vsum.h"

using namespace std;

int vsum(int n, vector<int> arr)
{
    int sum=0;

    for(int i=0; i<n; i++)
    sum = sum+arr[i];

    return sum;
}

int main()
{
    int n,a;
    vector<int> arr;

    std::cin>>n;

    for(int i=0;i<n;i++)
    {
        std::cin>>a;
        arr.push_back(a);
    }

    std::cout<<"SUM = "<<vsum(n,arr);
    return 0;
}