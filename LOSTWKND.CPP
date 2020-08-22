#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a[5]={0},p,i;
	    ll sum1=0;
	    for(i=0;i<5;++i)
	    {
	        cin>>a[i];
	        sum1+=a[i];
	    }
	    cin>>p;
	    if(sum1*p>120)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    cout<<"No\n";
	}
	return 0;
}
