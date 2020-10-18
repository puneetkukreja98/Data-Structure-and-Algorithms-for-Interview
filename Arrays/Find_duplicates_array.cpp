vector<int> duplicates(int a[], int n) {
   int m = *max_element(a,a+n);
   int H[m+1] = {0};
   vector<int> v;
   vector<int> d;
   d.push_back(-1);
   for(int i=0; i<n; i++)
   {
       H[a[i]]++;
   }
   for(int i=0; i<m+1; i++)
   {
       if(H[i]>1)
       {
           v.push_back(i);
       }
   }
   if(v.size()>0)
   {
       return v;
   }
   else
   {
       return d;
   }
   
}