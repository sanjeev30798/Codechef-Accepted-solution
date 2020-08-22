#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j;
	    ll n;
	    cin>>n;
	    ll n1=n*n;
	    ll c1=0;
	    if(n==1)
	    {
	        cout<<1<<"\n";
	        continue;
	    }
	    int k;
	    for(i=1;i<=n;)
	    {
	        for(j=1;j<=n;++j)
	        {
	            ++c1;
	            cout<<c1<<" ";
	        }
	        cout<<"\n";
	        ++i;
	        if(i<=n)
	        {
	        for(k=c1+n;k>c1;--k)
	        {
	            cout<<k<<" ";
	        }
	        cout<<"\n";
	        c1+=n;
	        }
	        ++i;
	    }
	}
	return 0;
}
