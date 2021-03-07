#include <bits/stdc++.h>
using namespace std;

int main()
{	
	int n,k;
	cin>>n>>k;
	int A[n];
	for(int m=0; m<n; m++)
	{
		cin>>A[m];
	}

	list<int> li;
	vector <int> v;

	int i,j;
	i=j=0;
	while(j<n)
	{
		if(A[j]<0)
		{
			li.push_back(A[j]);
		}
		if(j-i+1<k)
		{
			j++;
		}
		else if(j-i+1==k)
		{
			if(li.size()==0)
			{
				v.push_back(0);
			}
			else
			{
				v.push_back(li.front());
				if(A[i]==li.front())
				{
					li.pop_front(); 
				}
				
			}
			i++;
			j++;
			
		}
	}

	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";



	return 0;
}