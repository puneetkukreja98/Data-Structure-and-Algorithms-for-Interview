#include <bits/stdc++.h>
using namespace std;
// Time complexity = O(n^2)
void Selection_sort(int A[], int n)
{

    int i,j,k;
    for( i=0; i<n-1; i++)
    {
        for(j=k=i; j<n; j++)
        {
            if(A[j]<A[k])
            {
                k=j;
            }
        }
        swap(A[i],A[k]);
    }
}

int main()
{
    int A[]={8,6,3,2,5};
    int n=5;

    Selection_sort(A,n);
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }


    return 0;
}
