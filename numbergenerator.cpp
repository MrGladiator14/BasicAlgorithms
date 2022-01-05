#include<bits/stdc++.h>
using namespace std;
void ascending(int n)
{
    if (n==1)
    {cout<<n<<'\t';
    return;}
    ascending(n-1);
    cout<<n<<'\t';
}
void descending(int n)
{
    if (n==1)
    {cout<<n<<'\t';
    return;}
    cout<<n<<'\t';
    descending(n-1);
}
int main()
{
    ascending(23);
    cout<<endl;
    descending(23);
    cout<<endl;
    return 0;
}