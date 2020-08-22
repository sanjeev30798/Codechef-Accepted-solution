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
		//ll a[n];
		map<ll,ll> m;
		int i;
		ll max1=INT_MIN;
		ll arr[n];
		bool b=true,b1=false,b2=false;
		for(i=0;i<n;i++)
		{
			ll h;
			cin>>h;
			if(m.find(h)!=m.end())
			m[h]++;
			else
			m[h]=1;
			if(h>max1)
			max1=h;
			arr[i]=h;
			if(m[h]>2)
			b1=true;
			if(m[h]==2)
			b2=true;
		}
		map<ll,ll>:: iterator itr;
		if(m[max1]==1)
		{
		    b=true;
		}
		else
		b=false;
		if(b==false || b1==true)
		cout<<"NO\n";
		else
		{
		    cout<<"YES\n";
			sort(arr,arr+n);
			if(b2==true)
			{
			    vector<ll> d;
			    if(n%2==0)
			    {
			        for(i=0;i<n;i+=2)
			        d.push_back(arr[i]);
			        for(i=n-1;i>=1;i-=2)
			        d.push_back(arr[i]);
			    }
			    else
			    {
			        for(i=0;i<n;i+=2)
			        d.push_back(arr[i]);
			        for(i=n-2;i>=1;i-=2)
			        d.push_back(arr[i]);
			    }
			    for(i=0;i<d.size();i++)
			    cout<<d[i]<<" ";
			    cout<<"\n";
			    
			}
			else
			{
			    for(i=0;i<n;i++)
			    cout<<arr[i]<<" ";
			    cout<<"\n";
			}
		}
		
	}
	
	
	return 0;
}
