#include <bits/stdc++.h>
using namespace std;

// Time complexity = O(n^2)
void Insertion_sort(int A[], int n)
{

    for(int i=1; i<n; i++)
    {
        int j=i-1;
        int x=A[i];

        while(A[j]>x && j>-1)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main()
{

    int A[]={8,5,7,3,2};
    int n=5;
    Insertion_sort(A,n);
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}
