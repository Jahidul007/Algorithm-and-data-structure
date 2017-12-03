#include<bits/stdc++.h>
using namespace std;

#define max 5000
int c[max][max];
char b[max][max];

int LCS_LENGTH(string X,string Y)
{
    int m,n,i,j;
    m=X.length();
    n=Y.length();
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
        {
            if(X[i-1]==Y[j-1])
                {
                    c[i][j]=c[i-1][j-1]+1;
                    b[i][j]='d';
                }
            else if(c[i-1][j]>=c[i][j-1])
            {
                    c[i][j]=c[i-1][j];
                    b[i][j]='u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                    b[i][j]='l';
            }
        }
        return c[m][n];
}
void PRINT_LCS(string X,int i,int j)
{
    if(i==0 or j==0)
        return;
    if(b[i][j]=='d')
    {
        PRINT_LCS(X, i-1, j-1);
        cout<<X[i-1];
    }
    else if(b[i][j]=='u')
        PRINT_LCS(X,i-1, j);
    else
        PRINT_LCS(X,i, j-1);
}

int main()
{
    string X,Y;
    cout<<"Enter String X:";
    cin>>X;
    cout<<"Enter String Y:";
    cin>>Y;

    cout<<"LCS length: "<<LCS_LENGTH(X,Y)<<endl;
    cout<<"LCS is: ";
    PRINT_LCS(X,X.length(),Y.length());
    cout<<endl;
    return 0;
}
