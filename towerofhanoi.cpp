#include<bits/stdc++.h>
using namespace std;
void towerofHanoi(int n,char src, char destn, char helpr)
{
    if(n==0)
    return;
    towerofHanoi(n-1,src,helpr,destn);
    cout<<"move from "<<src<<" to "<<destn<<endl;
    towerofHanoi(n-1,helpr,destn,src);
}
int main()
{
    char S='s',D='d',H='h'; 
    towerofHanoi(3,S,D,H);
    return 0;
}