#include <iostream>
#include <stdlib.h>
using namespace std;
int weight [20][20],i,j,k,n,qu[20],f,r,sv,visit[20],visited[20];
void bfs()
{
    cout<<"enter the value of source vertex";
    cin>>sv;
    //cout<<"Visited vertices\n";
    cout<<sv;
    visited[sv]-1;
    k=1;
    while(k<n)
    {
        for(j=0;j<n;j++)
        if(weight[sv][j]!=0 && visited[j]!=1 && visit[j]!=1)
        {
            visit[j]=1;
            qu[r++]=j;

        }
        sv=qu[f++];
        cout<<sv<<" ";
        k++;
        visit[sv]=0;visited[sv]=1;
    }
}
int main()
{
    int edges;
    cout<<"enter no. of vertices: ";
    cin>>n;
    cout<<"enter number of edges: ";
    cin>>edges;
    cout<<"\n EDGES \n";
    for(k=1;k<=edges;k++)
    {
        int i,j;
        cin>>i>>j;
        weight[i][j]=1;

    }
    bfs();
    return 0;
}
