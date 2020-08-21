#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n],c1=0,i;
	    
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]!=1)
	        c1++;
	    }
	    if(k>=c1)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
