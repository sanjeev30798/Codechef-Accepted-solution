#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	cin>>t;
	while(t--)
	{
	    int i;
	    ll n,k;
	    cin>>n>>k;
	    ll a[n],b[n];
	    ll max1=INT_MIN;
	    for(i=0;i<n;++i)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;++i)
	    {
	        cin>>b[i];
	        ll h=floor(k/a[i]);
	        max1=max(max1,(h*b[i]));
	        
	    }
	    cout<<max1<<"\n";
	}
	return 0;
}
