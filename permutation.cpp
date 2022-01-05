#include<bits/stdc++.h>
using namespace std;
void permutation(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i< s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1); 
        //ros~= rest of string excluding s[i] ;)        //keep ith char in answer and then
        //do the same for remaining n-1 charactres one by one
        permutation(ros, ans + ch);
    }
}
int main()
{
    permutation("abcd","");
    return 0;
}