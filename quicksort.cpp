#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int l, int r)
{
    int pivot=arr[r];//pivot's the last element
    int i=l-1;
    for(int j=l;j<r;j++)//put pivot in the middle wrt its value
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);//gets pivot in the middle
    return i+1;
}

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {int pi= partition (arr,l,r);
    quicksort(arr,l,pi-1);
    quicksort(arr,pi+1,r);}
}

int main()
{
    int arr[1000];
    for(int i=0; i<1000;i++)
    arr[i]=1000-i;
    quicksort(arr,0,999);
    for(int i=0;i<999;i++)
    cout<<arr[i]<<'\t';
    cout<<endl;

    return 0;
}