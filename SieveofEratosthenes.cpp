#include<bits/stdc++.h>
#include<climits>
#include<string>
#include<algorithm>
#include<conio.h>

using namespace std;

void prime(int n)
{
    int prime[100000]={0};
    for(int i=2;i<=n; i++)
    {
        if(prime[i]==0)
        {
            for(int j = i*i; j<=n; j+=i)
            if (j%i ==0)
             prime[j]=1;

        }
    }

    for(int i=2;i<=n; i++)
    {
        if(prime[i]==0)
        cout<<i<<"\t";
    }


}

int main()
{
    int x;
    cin>>x;
    prime(x);
    getch();
    return 0;
}
