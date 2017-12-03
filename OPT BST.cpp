#include<bits/stdc++.h>
using namespace std;

#define max 5000
#define inf 1000000

double e[max][max],w[max][max];
int root[max][max];
void OPT_BST(double p[],double q[],int n)
{
    for(int i=1;i<=n+1;i++)
        e[i][i-1]=w[i][i-1]=q[i-1];
    for(int l=1;l<=n;l++)
        for(int i=1;i<=(n-l+1);i++)
        {
            int j=i+l-1;
            e[i][j]=inf;
            w[i][j]=w[i][j-1]+p[j]+q[j];
            for(int r=i;r<=j;r++)
            {
                double t=e[i][r-1]+e[r+1][j]+w[i][j];

                if(t<e[i][j])
                {
                    e[i][j]=t;
                    root[i][j]=r;
                }
            }
        }
}

int main()
{
    double p[]={0.0,.15,.10,.05,.10,.20};
    double q[]={.05,.10,.05,.05,.05,.10};

    int n=5;

    OPT_BST(p,q,n);
    cout<<"Optimal BST: "<<e[1][n]<<endl;
    return 0;
}
