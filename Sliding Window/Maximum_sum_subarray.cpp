#include <bits/stdc++.h>
using namespace std;
int main()
{	


	int n,k;
	cin>>n>>k;
	int A[n];
	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	int i,j;
	i=j=0;
	int sum=0;
	int curr=-1;
	while(j<n)
	{
		sum = sum + A[j];

		if(j-i+1<k)
		{
			j++;
		}
		else if (j-i+1==k)
		{	
			curr = max(curr,sum);
			sum = sum-A[i];
			i++;
			j++;
		}
	}

	cout<<curr<<"\n";
	return 0;
}