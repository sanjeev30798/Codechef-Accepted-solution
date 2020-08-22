#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n],i;
	    ll sum1=0,sum2=0;
	    for(i=0;i<n;++i)
	    cin>>a[i];
	    ll sum3=0;
	    for(i=0;i<n;++i)
	    {
	        cin>>b[i];
	        sum1+=a[i];
	        sum2+=b[i];
	        if(sum1==sum2 && a[i]==b[i])
	        sum3+=a[i];
	    }
	    cout<<sum3<<"\n";
	    
	}
	return 0;
}
