#include<bits/stdc++.h>
using namespace std;

#define inf 1000000
#define MAX 5000

struct edge
{

    int u,v,cost;
    bool operator <(const edge &p) const
    {
        return cost<p.cost;
    }
};

int parent[MAX];
vector<edge>vt;
vector<edge>tree;

int find (int r)
{
    if(parent[r]==r) return r;
    return find(parent[r]);
}
int mst(int n)
{
    sort(vt.begin(),vt.end());
    for(int i=1; i<=n; i++) parent[i]=i;
    int cnt=0,sum=0;
    for(int i=0; i<vt.size(); i++)
    {
        int u = find(vt[i].u);
        int v = find(vt[i].v);
        if(u!=v)
        {
            parent[u]=v;
            sum+=vt[i].cost;
            tree.push_back(vt[i]);
            cnt++;
            if(cnt==n-1) break;
        }
        cout<<"cnt"<<cnt<<endl;
    }
    return sum;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        edge input;
        cin>>input.u>>input.v>>input.cost;
        vt.push_back(input);

    }
    cout<<"sum= "<<mst(n)<<endl;
    cout<<"Edge are"<<endl;
    for(int i= 0;i<tree.size();i++)
        cout<<tree[i].u<<">"<<tree[i].v<<endl;
    return 0;

}














