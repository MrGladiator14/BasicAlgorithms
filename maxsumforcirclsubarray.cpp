#include<bits/stdc++.h>
#include<climits>
using namespace std;

int kadane (int a[20] , int t)
{
    int currsum=0;
    int maxsum = INT_MIN;
    for(int i=0;i<t;i++)
    {
        currsum+= a[i];
        if(currsum<0)
        currsum=0;
        maxsum = max( maxsum , currsum );
    }
    return maxsum;

}

int main()
{
    int n,arr[20];
    cin>> n;
    for(int i=0;i<n;i++)
    cin>> arr[i];
    int wrapsum, nonwrapsum;
    nonwrapsum = kadane ( arr, n );
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum+= arr[i];
       arr[i]=-arr[i];
    }
    wrapsum= sum +  kadane ( arr, n );
    cout<< max( wrapsum , nonwrapsum );

    return 0;
}
