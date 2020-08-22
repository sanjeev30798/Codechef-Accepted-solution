#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		int i;
		for(i=0;i<n;++i)
		{
			cin>>a[i];
		}
		ll c1=0;
		for(i=1;i<n;i++)
		{
			int d1=abs(a[i]-a[i-1])-1;
			int d2=abs(a[i-1]-a[i])-1;
			c1+=min(d1,d2);	
		}	
		cout<<c1<<"\n";
	}
	
	
	return 0;
}
