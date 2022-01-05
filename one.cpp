#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,t=1;
    char s[200000];
    while((t<=100) && (p<=1000000))
    {
        cin>>n>>p;
        for(int i=0; i<n; i++)
        cin>>s[i];
        t++;
        for(int i=0;i<n; i++)
        {s[i]=s[i]+p;}
        for(int i=0; i<n; i++)
        cout<<s[i];
    }

    return 0;
}