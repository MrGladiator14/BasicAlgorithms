#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int n,arr[20];
    cin>> n;
    for(int i=0;i<n;i++)
    cin>> arr[i];
    int currsum=0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+= arr[i];
        if(currsum<0)
        currsum=0;
        maxsum = max( maxsum , currsum );
    }
    cout<<maxsum;
    return 0;
}
