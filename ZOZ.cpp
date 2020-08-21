#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    long long int a[n],k,sum1=0,count=0;
	    cin>>k;
	    for(i=0;i<n;i++)
	    {
	    cin>>a[i];
	    sum1+=a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if((sum1-a[i])<a[i]+k)
	        count++;
	    }
	    cout<<count<<"\n";
	    
	}
	return 0;
}
