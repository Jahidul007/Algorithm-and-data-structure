#include<bits/stdc++.h>
using namespace std;

#define inf 10000000
#define MAX 5000

vector<int>matrix[MAX];


queue<int >q;

int visited[MAX],parent[MAX],level[MAX];
void BFS(int n,int src)
{
    q.push(src);
    visited[src]=1;
    level[src]=0;
    parent[src]=0;
    while(!q.empty())
    {
        int u=q.front();
        for (int i=0;i<matrix[u].size();i++)
        {
            int v = matrix[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                parent[v]=u;
                q.push(v);
            }
        }
        q.pop();
    }
    cout<<"Distance from source("<<src<<")\n"<<endl;
    for(int i=1;i<=n;i++)
        cout<<"to "<<i<<" is: "<<level[i]<<" and parent: "<<parent[i]<<endl;
}

int main()
{
    int node,edge;
    cin>>node>>edge;

    while(edge--)
    {
        int x,y;
        cin>>x>>y;
        matrix[x].push_back(y);
        matrix[y].push_back(x);
    }
    int source;
    cin>>source;
    BFS(node,source);
    return 0;
}



















