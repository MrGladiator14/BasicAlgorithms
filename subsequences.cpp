#include<bits/stdc++.h>
using namespace std;
void subsequence(string a, string answ="")
{
    if(a.length()==0)
    {cout<< answ<<endl;
    return;}
    char ch = a[0];
    string ros = a.substr(1); //ros~= rest of string
    subsequence(ros,answ);
    subsequence(ros,answ+ch);
}

int main()
{
    string a="qwerty;)";
    subsequence(a);
}