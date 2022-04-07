#include<iostream>

using namespace std;
int main()
{
    int x,r,c,k,m,n;
    
    cin>>n>>m;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    r=0;
    c=n-1;
    cin>>x;
    while(r<m && c>=0)
    {
    if(a[r][c] == x)
    {
        cout<<" element present\n";
        k=1;
        break;
    }
    
    else if( x < a[r][c] )
    c--;
    else
    r++;
    }
    
    if(k !=1)
    cout<<" element isn't present\n";

    return 0;

}