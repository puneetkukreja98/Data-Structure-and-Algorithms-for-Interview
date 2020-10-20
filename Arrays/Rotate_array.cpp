//arr={1,2,3,4,5} n=5 d=2
//Space Complexity = O(n)
void rotateArr(int arr[], int d, int n){
    int temp[d];
    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];    //temp = {1,2} copy
    }
    for(int i=d; i<n; i++)
    {
        arr[i-d]=arr[i];   //arr = {3,4,5,4,5}
    }
    for(int i=0; i<d; i++)
    {
        arr[n-d+i] = temp[i]; //arr = {3,4,5,1,2}
    }
}

//Space Complexity = O(1)
void rotateArr(int arr[], int d, int n){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

void reverse(int arr[], int low, int high){
    while(low<high)
   {
     swap(arr[low],arr[high]);
     low++;
     high--;
   }
}
