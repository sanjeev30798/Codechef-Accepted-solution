#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    if(n==1)
	    {
	        cout<<a[0]<<"\n";
	        continue;
	    }
	    sort(a,a+n);
	    if(n!=1)
	    cout<<a[0]+a[1]<<"\n";
	}
	return 0;
}
