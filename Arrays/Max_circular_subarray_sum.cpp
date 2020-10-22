int normalMaxSum(int arr[], int n)
{
    int res = arr[0];
    int maxending = arr[0];
    
    for(int i=1; i<n; i++)
    {
        maxending = max(maxending+arr[i], arr[i]);
        res = max(res,maxending);
    }
    
    return res;
}
int circularSubarraySum(int arr[], int num){
    
   int max_normal = normalMaxSum(arr,num);
   if(max_normal<0)
   {
       return max_normal;
   }
   int arr_sum=0;
   for(int i=0; i<num; i++)
   {
       arr_sum = arr_sum + arr[i];
       arr[i] = -arr[i];
   }
   int max_circular = arr_sum + normalMaxSum(arr,num);
   
   return max(max_normal,max_circular);
   
}