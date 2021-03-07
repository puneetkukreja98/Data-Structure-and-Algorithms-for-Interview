#include <bits/stdc++.h>
using namespace std;

void find_max(queue<int> q)
{
	int max=0;
	while(!q.empty())
	{
		if(q.front()>max)
		{
			max=q.front();
		}
		q.pop();
	}
	cout<<max<<" ";
	return;
}
void window_max(int arr[], int size, int window_size)
{	
	queue<int> q;
	for(int i=0; i<size; i++)
	{	
		if(i<window_size)
		{
			q.push(arr[i]);
		}

		else
		{
			find_max(q);
			q.pop();
			q.push(arr[i]);
		}

	}

	//for last window
	find_max(q);
	return;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int A[n];
	for (int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	window_max(A,n,k);


	return 0;
}