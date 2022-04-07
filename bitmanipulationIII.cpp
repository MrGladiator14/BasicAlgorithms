#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>

using namespace std;
int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum ^ arr[i];
    } 
    return xorsum;
}

int setBit(int n, int pos)
{
    return ((n & (1<<pos)) !=0);
}

void unique2( int arr[],int n)
{
    int tempxor = unique(arr,n);
    int setbit=0;
    int pos=0;
    int xorsum = unique(arr,n);
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor =0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout<< newxor <<endl;
    cout<<(tempxor^newxor)<<endl;
}

bool getBit( int n,int pos)
{
    return (( n & (1<<pos))!=0);
}

int unique3 (int arr[], int n)
{
    int result =0;
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j],i))
            sum++;
        }
        if(sum%3!=0)
        {
            result= setBit(result,i);
        }
    }
    return result;    
}

int main()
{
    int arr1[]={1,2,3,4,3,2,1};
    int arr2[] = {1,2,3,4,6,3,2,1};
    int arr3[] = {1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr1,7)<<endl;
    unique2(arr2,8);
    cout<<unique(arr3,10)<<endl;
    return 0;
}