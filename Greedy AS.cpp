#include<iostream>
using namespace std;
#define MAX 500

int s[MAX],f[MAX],st_time[MAX],fn_time[MAX],n,m,sz,k;
void GREEDY_AS()
{
    st_time[sz]=s[1];
    fn_time[sz++]=f[1];
    k=1;
    for(m=2; m<=n; m++)
    {
        if(f[k]<=s[m])
        {
            st_time[sz]=s[m];
            fn_time[sz++]=f[m];
            k=m;
        }
    }

}
int main()
{
    cout<<"Enter no of activity: "<<endl;
    cin>>n;
    cout<<"Enter start & finising time"<<endl;;
    for(int i=1; i<=n; i++)
        cin>>s[i]>>f[i];

    for(int i=1; i<n; i++)
        for(int j=1; j<=n-i; j++)
        {
            if(f[j]>f[j+1])
            {
                swap(f[j], f[j+1]);
                swap(s[j], s[j+1]);
            }
        }

    GREEDY_AS();
    cout<<"Maximum activities : "<<sz<<endl;
    cout<<"Starting time & finished time"<<endl;

    for(int i=0; i<sz; i++)
        cout<<st_time[i]<<" \t\t"<<fn_time[i]<<endl;

    return 0;
}
