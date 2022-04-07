#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<  " enter number ";
    int n,x;
    cin>>x>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<x<<"^"<<i<<" = "<<pow(x,i)<<endl;
    }
    return 0;
}
