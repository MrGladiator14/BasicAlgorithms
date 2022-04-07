#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int n,arr[20];
    cin>> n;
    for(int i=0;i<n;i++)
    cin>> arr[i];

    int currsum[n+1];
    currsum[0]=0;
    for(int i=1;i<=n;i++)
    currsum[i]=currsum[i-1]+arr[i-1]; //sum of array till that element

    int maxsum = INT_MIN;
    for(int i=1; i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=i;j++)
        sum=currsum[i]-currsum[j-1];  //subtracting the 1st elements from individual subarray
        maxsum = max(sum,maxsum);
    }
    cout<<maxsum;
    return 0;
}
int max (int x, int y)
{
    return (x >= y) ? x :  y;
}

