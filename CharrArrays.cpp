#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    int n;
    cin>> n;
    cin.ignore(); //to solve buffer issue
    cin.getline(arr,n);
    cin.ignore();
    int i=0,currlen=0,maxlen=0,maxw=0,w=0;
    while(i>=0)
    {
        if (arr[i] == ' '|| arr[i]== '\0')
        {
            if(currlen > maxlen)
            {
                maxw=w;
                maxlen=currlen;
            }
            w=i+1;
            currlen=0;


        }
        else
        currlen++;
        if(arr[i] == '\0')
        break;
        i++;
    }
    cout<< arr << endl;
    cout<< maxlen << endl;
    for(int i=0;i<maxlen;i++)
    cout<< arr[maxw+i];
    return 0;
}