#include <bits/stdc++.h>
using namespace std;

int partition_hoares(int A[], int l, int h)
{
    int pivot=A[l];
    int i=l-1;
    int j=h+1;

    while(true)
    {
        do{
        i++;
        }while(A[i]<pivot);

        do{
        j--;
        }while(A[j]>pivot);

        if(i>=j) return j;

        swap(A[i],A[j]);
    }
}

void qsort(int A[],int l, int h)
{
    if(l<h)// we need max 2 elements
    {
        int p=partition_hoares(A,l,h);
        qsort(A,l,p);
        qsort(A,p+1,h);
    }
}

int main()
{
    int A[]={8,4,7,9,3,10,5};
    int n=7;
    qsort(A,0,6);

    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }


    return 0;
}
