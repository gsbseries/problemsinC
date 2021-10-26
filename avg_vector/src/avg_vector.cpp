#include<iostream>
#include<vector>

//#include "avg_vector.h"

using namespace std;

int avg(vector<int> arr)
{
    int sum=0;

    for(int i=0; i<arr.size(); i++)
    {
        sum = sum+arr[i];
    }
    return (sum/arr.size());
}

int main()
{
    int c,num; 
    vector<int> arr;
    std::cin>>c;
    for(int i=0; i<c; i++)
    {
        std::cin>>num;
        arr.push_back(num);
    }

    std::cout<<"Average = "<<avg(arr)<<endl;

    return 0;
}