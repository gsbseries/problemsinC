#include<iostream>
#include<cstring>
#include<vector>

//#include "search.h"

using namespace std;

int search(int n, int ele, vector<int> array)
{
    int loc=-1;
    for(int i=0; i<n; i++)
    {
        if(memcmp(&array[i], &ele, sizeof(int)) == 0)
        {
            loc = i;
            break;
        }
    }

return loc;
}

int main()
{
    /*std::cout<<memcmp("hi","Hi",2)<<endl;
    std::cout<<memcmp("hi","hi",2)<<endl;*/

    vector<int> arr;

    int n,temp,ele;
    std::cout<<"Num : ";
    std::cin>>n;
    for(int i=0; i<n;i++)
    {
        std::cin>>temp;
        arr.push_back(temp);
    }

    std::cout<<"Element : ";
    std::cin>>ele;

    std::cout<<"Element at : "<<search(n, ele, arr);    
}