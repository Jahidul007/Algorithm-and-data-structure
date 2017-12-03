#include<bits/stdc++.h>
using namespace std;

#define inf 1000000
#define max 5000

int m[max][max],s[max][max];

void MAT_CHAIN_ORDER(int p[],int len)
{
    int n=len-1;
    for(int i=1; i<=n; i++)
        m[i][i]=0;
    for(int l=2; l<=n; l++)
    {
        for(int i=1; i<=n-l+1; i++)
        {
            int j=i+l-1;
            m[i][j]=inf;
            for(int k=i; k<=j-1; k++)
            {
                int q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
}

void PRINT_OPTIMAL_PARENS(int i,int j)
{
    if(i==j)
        cout<<"A"<<i;
    else
    {
        cout<<"(";
        PRINT_OPTIMAL_PARENS(i,s[i][j]);
        PRINT_OPTIMAL_PARENS(s[i][j]+1,j);
        cout<<")";
    }
}
int main()
{
    int p[100],n;
    cout<<"Enter element number: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    MAT_CHAIN_ORDER(p,n);
    cout<<"Cost = "<<m[2][n-2]<<endl;
    cout<<"Sequence is: ";
    PRINT_OPTIMAL_PARENS(1,n-1);
    cout<<endl;
    return 0;
}
