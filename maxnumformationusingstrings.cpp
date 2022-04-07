#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s = " 42312314245098500192348";
    sort(s.begin(),s.end(), greater<int>());
    cout<< s << endl;
    return 0;
}    