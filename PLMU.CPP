#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int a[n];
	    int c1=0,c2=0,i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        c1++;
	        else if(a[i]==2)
	        c2++;
	    }
	
	long long int sum1=0;
	sum1+=c1*(c1-1)/2;
	sum1+=c2*(c2-1)/2;
	cout<<sum1<<"\n";
	}
	return 0;
}
