//there are 2*n sized floor & tile of 2*1
//if tile is placed horizontally n-2 columns need to be covered
//if placed vertically then n-1

#include<bits/stdc++.h>
using namespace std;
int tilingways(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return tilingways(n-1) + tilingways(n-2);
}
int main()
{
    cout<<tilingways(9);
    return 0;
}