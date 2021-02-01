#include <bits/stdc++.h>
using namespace std;


// Time complexity = O(n^2)
void Bubble_sort(int A[], int n)
{

    for(int i=0; i<n-1; i++)
    {
        int flag=0;
        for(int j=0; j<n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {

                swap(A[j],A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

int main()
{

    int A[]={8,5,7,3,2};
    int n=5;
    Bubble_sort(A,n);

    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }




    return 0;
}
