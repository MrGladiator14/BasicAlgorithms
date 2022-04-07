#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>

using namespace std;
int getbit( int n, int pos)
{
    return((n & (1<<pos))!=0);
}

int setbit( int n, int pos)
{
    return(n |(1<<pos));
}

int clearbit( int n, int pos)
{
    int  mask = ~(1<<pos); // mask is a technical term
    return n & mask;
}

int updatebit( int n, int pos, int value)
{
    int  mask = ~(1<<pos); // mask is a technical term
    n = n & mask;
    return (n | (value << pos));
}

int togglebit( int n, int pos)
{
    
    return (n xor (1<<pos));
}

int reversebit( int n)
{
    int k=0;
    int x=0;
    int t=0;
    for(int i=0; i<n; i++)
    {
        
        t=1<<i;
        if(n<t)
        break;
        x++;
    }
    for(int i=0; i<n; i++)
    {
        
        k=updatebit(k,i,getbit(n,x-i-1));
    }
    return k;

}

int main()
{
    cout<< getbit(5,2)<<endl;//returns 2nd index of 5 in binary    
    cout<< setbit(5,1)<<endl;//places 1 at index 2 of 5 in binary
    cout<< clearbit(5,2)<<endl;//clears 1 at index 2 of 5 in binary
    cout<< updatebit(5,1,1)<<endl;
    cout<< togglebit(5,2)<<endl;
    cout<< reversebit(15)<<endl;
    int num = 0b011;  //binary to decimal
    cout<<num;

    return 0;
}    