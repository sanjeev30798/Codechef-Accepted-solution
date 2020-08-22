#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i;
	    cin>>n>>k;
	    int a[n];
	    long long int sum1=0,sum2=0;
	    for(i=0;i<n;++i)
	    {
	       cin>>a[i];
	       sum1+=a[i];
	       if(a[i]>k)
	       sum2+=k;
	       else
	       sum2+=a[i];
	    }
	    cout<<sum1-sum2<<"\n";
	}
	return 0;
}
