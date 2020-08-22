#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    ll a;
	    cin>>a;
	    ll i,j;
	    if(a%2==1)
	    {
	        cout<<a/2<<"\n";
	    }
	    else 
	    {
	        ll c=0,k;
	        for(k=2;k<=a;k*=2)
	        {
	            if(a%k!=0)
	            {
	                c=a/k;
	                break;
	            }
	        }
	        cout<<c<<"\n";
	    }
	}
	return 0;
}
