
int thirdLargest(int a[], int n)
{
      if(n<3)
      {
          return -1;
      }
      else
      {
          sort(a,a+n);
          return a[n-3];
      }
     
}
