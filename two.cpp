#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,k,l,g,x=0,y=0,t=0;
    while((t<=200000) && (x<=1000000000) && (y<=1000000000))
    {
        cin>>t;
        cin>>x>>y>>g;
        while(g>0)
        {if(x>y)
        {    s=y;
             l=x;}
        else
        {    s=x;
             l=y;}
        while(g>0)
        {
            k=l-s;
            s+=s;
            g--;
        }
        x=k;
        y=s;}
        cout<<k;
    }

    return 0;
}