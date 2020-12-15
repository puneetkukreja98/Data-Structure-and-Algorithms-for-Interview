vector<int> find3Numbers(vector<int> arr, int N) {
    
    int left[N];
    int right[N];
    
    left[0]=arr[0];
    for(int i=1; i<N; i++)
    {
        left[i] = min(arr[i], left[i-1]);
    }
    
    right[N-1]=arr[N-1];
    for(int i=N-2;i>=0;i--)
    {
         right[i]= max(arr[i],right[i+1]);
    }
    vector<int> v;
    
    for(int i=1; i<N-1; i++)
    {
        if(left[i-1]<arr[i] && right[i+1]>arr[i])
        {
            v.push_back(left[i-1]);
            v.push_back(arr[i]);
            v.push_back(right[i+1]);
            
            return v;
        }
    }
    return v;
      
}