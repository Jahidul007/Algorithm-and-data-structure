#include<bits/stdc++.h>
using namespace std;

#define inf 10000000
#define MAX 5000




int A[MAX],B[MAX],C[MAX],range,length;
void Counting_sort(void)
{
    for(int i =1; i<=length; i++)
        C[A[i]]++;
    for(int i =1; i<=range; i++)
        C[i]=C[i]+C[i-1];
    for(int i=length; i>=1; i--)
    {
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
}
int main()
{
    cout<<"Enter data Range: ";
    cin>>range;
    cout<<"Enter array length: ";
    cin>>length;
    cout<<"Enter those element: ";
    for(int i =1; i<=length; i++)
        cin>>A[i];
    Counting_sort();
    cout<<"Sorted array: ";
    for(int i =1; i<=length; i++)
        cout<<B[i]<<" ";
    return 0;
}
