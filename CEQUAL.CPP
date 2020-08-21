#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    int h=1;
	    for(i=1;i<n;i++)
	    {
	        if(a[i]==a[i-1])
	        {
	            h=-1;
	            break;
	        }
	    }
	    if(h==1)
	    cout<<"No\n";
	    else{
	       cout<<"Yes\n";
	    }
	}
	return 0;
}
