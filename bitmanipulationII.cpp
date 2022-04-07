#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>

using namespace std;
int poweroftwo( int n)
{
    return(n && !(n & (n-1))); // so as to return 1 === true
}

int numofones( int n) //setbits
{
    int count = 0;
    while(n)
    {
        n=(n & (n-1)); 
        count++;
    }  
    return count;  
}

int numofzeros( int n) //unsetbits
{
    int count = 0;
    for( int i =1; i<= n; i= i<<1)
    {
        if( (n & i) == 0) 
        count++;
    }  
    return count;  
}

int substs( int arr[], int n)
{
    for(int i=0; i<(1<<n);i++)
    {
        for(int j = 0; j<n; j++)
        {
            if( i & (1<<j))
            {
                cout<< arr[j]<<" ";
            }
        }
        cout<< endl;
    }    
    
}

int poweroffour( int n)
{
    return(n && !(n & (n-1)) && (numofones(n-1)%2==0)); // so as to return 1 === true
}


int main()
{
    int arr[4]={1,2,3,4};
    cout<< poweroftwo(8)<<endl;
    cout<< numofones(7)<<endl;
    cout<< substs(arr,4)<< endl;
    cout<< poweroffour(64)<<endl;
    cout<< numofzeros(8)<<endl;
    
    return 0;
}    