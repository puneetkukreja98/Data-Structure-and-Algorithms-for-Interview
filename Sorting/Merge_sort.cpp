#include <bits/stdc++.h>
using namespace std;
int B[100];

void merging(int A[],int l, int mid, int h)
{
    int i,j,k;
    i=l; j=mid+1; k=l;
    while(i<=mid && j<=h)
    {
       if(A[i]<A[j])
       {
           B[k++]=A[i++];
       }
       else
       {
           B[k++]=A[j++];
       }
    }
    for(; i<=mid; i++)
    {
        B[k++]=A[i];
    }
    for(; j<=h; j++)
    {
        B[k++]=A[j];
    }

    for(i=l; i<=h; i++)
    {
        A[i]=B[i];
    }
}

void rec_merge_sort(int A[],int l, int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        rec_merge_sort(A,l,mid);
        rec_merge_sort(A,mid+1,h);
        merging(A,l,mid,h);
    }
}

int main()
{
    int A[]={10,2,9,6,5,3,7,1};
    int n=8;
    //merging(A,l,mid,h);
    rec_merge_sort(A,0,7);

    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }



    return 0;
}
