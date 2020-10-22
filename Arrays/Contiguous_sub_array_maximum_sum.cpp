// KADANES ALGORITHM...
int maxSubarraySum(int arr[], int n){
    
    int res = arr[0];
    int maxending = arr[0];
    for(int i=1; i<n; i++)
    {
        maxending = max(maxending+arr[i], arr[i]);
        res=max(res,maxending);
    }
    return res;
    
}