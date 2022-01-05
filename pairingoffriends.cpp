//There are n friends, we have to find all the pairings possible. Each person can be
//paired with only one person or does not pair with anyone.
//Idea: we have two options, i’th friend does not get paired or we have n-1 options
//to pair it with anyone.
#include<bits/stdc++.h>
using namespace std;
int pairingoffriends(int n)
{
    if(n==0||n==1||n==2)
    return n;//obviously:)
    return pairingoffriends(n-1)+pairingoffriends(n-2)*(n-1);//to be paired with n-1 people & n-2 people need to be taken care of
}
int main()
{
    cout<<pairingoffriends(10);
    return 0;
}