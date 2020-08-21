#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    long long int a[n],sum=0;
	    for(i=0;i<n;i++)
	     cin>>a[i];
	    sort(a,a+n,greater<int>());
	    for(i=0;i<n;i+=2)
	    {
	        sum+=a[i];
	    }
	    cout<<sum<<"\n";
	    
	}
	return 0;
}
