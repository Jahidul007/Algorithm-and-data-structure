#include<bits/stdc++.h>
using namespace std;

#define MAX 5000
#define inf 10000000
int A[MAX];



void MERGE(int A[],int low,int mid,int high)
{
    int n1= mid-low+1;
    int n2= high-mid;
    int L[n1+2],R[n2+2];


    for (int i=1; i<=n1; i++)
        L[i]=A[low+i-1];
    for(int i=1; i<=n2; i++)
        R[i]=A[mid+i];
    L[n1+1]= inf;
    R[n2+1]= inf;
    int i=1,j=1;
    for(int k=low; k<=high; k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
}
void MerSort(int A[],int low,int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        MerSort(A,low,mid);
        MerSort(A,mid+1,high);
        MERGE(A,low,mid,high);
    }
}
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    cout<<"Enter array element: ";
    for(int i=1; i<=n; i++) cin>>A[i];
    MerSort(A,1,n);
    cout<<"Sorted Array List: ";
    for(int i= 1; i<=n; i++) cout<<A[i]<<" ";
    return 0;
}














