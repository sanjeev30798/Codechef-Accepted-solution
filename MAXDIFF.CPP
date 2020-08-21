#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll a[n],i;
	    ll sum1=0,sum3=0,sum2=0;
	    for(i=0;i<n;++i)
	    {
	        cin>>a[i];
	        sum3+=a[i];
	    }
	    sort(a,a+n);
	    for(i=0;i<k;++i)
	    sum2+=a[i];
	    reverse(a,a+n);
	    for(i=0;i<k;i++)
	    sum1+=a[i];
	    ll min1=max(abs(sum1-(sum3-sum1)),abs(sum2-(sum3-sum2)));
	    cout<<min1<<"\n";
	}
	return 0;
}
