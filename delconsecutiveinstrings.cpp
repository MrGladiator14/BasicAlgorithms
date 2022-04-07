#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s = " dfgvrcesdfzfxzfcdfssdafcdvzxcfdffhjhujokopjkm";
    char ans[100];
    ans[0]=s[0];
    int count;
    for(int i=0;i<s.size();i++)
    {
        if( s[i] != s[i-1])
        ans[count]=s[i],count++;
    }
    cout<< ans ;    

    return 0;
}    