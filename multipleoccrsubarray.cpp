#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main()
{
    int n,k,arr[20];
    cin>> n;
    for(int i=0;i<n;i++)
    cin>> arr[i];
    int index[20];
    cin>>k;
    k++;
    for(int i=0;i<k;i++)
    index[i] = 0 ;
    for(int i=0;i<k;i++)
    {
        index[arr[i]]+=1;
    }
    for(int i=0;i<k;i++)
    {
        cout<< i <<":" << index[i] <<endl;
    }
    for(int i=0;i<k;i++)
    {
       if (index[arr[i]] == 2)
       {
           cout<< arr[i];
           break;
           } 
    }
    




}