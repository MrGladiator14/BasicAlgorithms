#include<iostream>
using namespace std;
void primefact(int n)
{
    int spf[100000]={0};
    for(int i=2;i<=n;i++)
     spf[i]=i;

    for(int i = 2; i<=n; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                 spf[j]=i;
            }
        }
    } 
    while(n!=1)
    {
        cout<<spf[n]<<"\t";
        n=n/spf[n];
    }
}

int main()
{
    int x;
    cin>>x;
    primefact(x);
    return 0;
}