/*Rat In a Maze
Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to
reach (n-1, n-1). If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
You can not move to the walls.
Idea: Try all the possible paths to see if you can reach (n-1,n-1)
Rat In a Maze
Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to
reach (n-1, n-1). If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
You can not move to the walls.
Idea: Try all the possible paths to see if you can reach (n-1,n-1)*/
#include<bits/stdc++.h>
using namespace std;
bool isvalid(int **arr,int x,int y, int n)
{
    if(x<n && y<n && arr[x][y]==1)
    return true;
    return false;
}
bool ratinmaze(int **arr,int x, int y,int n, int** solution)
{
    if(x==(n-1) && y==(n-1))
    {
        solution[x][y]=1;
        return true;
    }
    if(isvalid(arr,x,y,n))
    {
        solution[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solution))
        return true;
        if(ratinmaze(arr,x,y+1,n,solution))
        return true;
        solution[x][y]=0;   //backtracking
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int** arr= new int*[n]; //dynamic array initialization
    for(int i=0;i<n;i++)
    arr[i]=new int[n]; 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }

    int** solution= new int*[n]; //dynamic array initialization
    for(int i=0;i<n;i++)
    solution[i]=new int[n]; 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        solution[i][j]=0;
    }

    if(ratinmaze(arr,0,0,n,solution))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout<<solution[i][j]<<'\t';
            cout<<endl;
        }
    }
    return 0;
}