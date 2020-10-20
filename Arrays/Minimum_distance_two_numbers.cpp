int minDist(int a[], int n, int x, int y) {
    int m = n;
    int k,l;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
            k=i;
        if(a[i]==y)
            l=i;
        m=min(m,abs(l-k));
    }
    if(m==n)
        return -1;
    else
        return m;
}