#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s = " dfgvrcesdfzfxzfcdfssdafcdvzxcfdffhjhujokopjkm";
    int a[26];
    for(int i=0;i<26;i++)
    a[i]=0;
    for(int i=0;i<26;i++)
    a[s[i]-'a']++;
    char f;
    int max=0;
    for(int i=0;i<26;i++)
    {
        if(a[i] > max )
        {
            max=a[i];
            f = i+'a';

        }
    }
    cout<<f<< " : "<< max ;    

    return 0;
}    