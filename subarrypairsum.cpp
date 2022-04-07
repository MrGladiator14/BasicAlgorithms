#include<bits/stdc++.h>
#include<climits>
using namespace std;

bool pairsum (int a[20] , int t, int s)
{
    int l = 0;
    int h = t-1;


    while(l < h)
    {
        if(s== a[l] + a[h])
        {cout<< a[l] <<" + "<< a[h] <<" = "<< s<<endl ;
        return true;}
        
        else if( s > a[l] + a[h] )
        l++;
        else
        h--;
      
    }
    return false;

}

int main()
{
    int n,k,arr[20];
    cin>> n >> k ;
    
    for(int i=0;i<n;i++)
    cin>> arr[i];
    if ( pairsum ( arr , n , k ) == true)
    cout<<" pair exists ";
    else
    cout << " pair does not exist " ;
    return 0;
}