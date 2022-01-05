#include<bits/stdc++.h>
using namespace std;
void replacePI(string a)
{
    if(a.length()==0)
    return;
    if(a[0]=='p' && a[1]=='i')
    {
        cout<<"3.14";
        replacePI(a.substr(2));
    }
    else
    {
        cout<<a[0];
        replacePI(a.substr(1));
    }
}

int main()
{
    char a[]={"pipipipippppipijsdhpipipipppipipipipippipipipipipipi"};
    replacePI(a);
    return 0;
}