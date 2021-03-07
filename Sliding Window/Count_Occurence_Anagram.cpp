#include <bits/stdc++.h>
using namespace std;
int main()
{

	string s, pattern;
	cin>>s>>pattern;
	int k= pattern.size();
	

	unordered_map<char, int> mp;
	for(int i=0; i<pattern.size(); i++)
	{
		mp[pattern[i]]++;
	}
	

	int count = mp.size();
	int ans = 0;
	int i,j;
	i=j=0;
	while(j<s.size())
	{
		if(mp.find(s[j])!=mp.end())
		{	
			mp[s[j]]--;

			if(mp[s[j]]==0)
			{
				count--;
			}
		}
		if(j-i+1<k)
		{
			j++;
		}
		else if(j-i+1==k)
		{
			if(count==0)
			{
				ans++;
			}
			if(mp.find(s[i])!=mp.end())
			{
				mp[s[i]]++;

				if(mp[s[i]]==1)
				{
					count++;
				}
			}
			i++;
			j++;
		}
	}

	cout<<ans<<"\n";
	return 0;
}