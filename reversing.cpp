#include<bits/stdc++.h>
using namespace std;
void reverse(string a)
{
    if(a.length()==0)
    return;
    string ros=a.substr(1); //ros ~= reversal of strings
    reverse(ros);
    cout<<a[0];
}

int main()
{
    char a[]={"mynameis"};
    reverse(a);
    return 0;
}