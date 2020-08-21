#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;++i)
	    cin>>a[i];
	    ll sum1=0;
	    sort(a,a+n,greater<int>());
	    for(i=0;i<n;)
	    {
	        if(i<n-1)
	        sum1+=a[i]+a[i+1];
	        else
	        sum1+=a[i];
	        i+=4;
	    }
	    cout<<sum1<<"\n";
	    
	    
	}
	return 0;
}
