int convertFive(int n) {
    int i=0;
    int ans=n;
    while(n)
    {
        int temp=n%10;
        if(temp==0)
        {
            ans=ans+(5*pow(10,i));
        }
        i++;
        n=n/10;
    }
    return ans;
}