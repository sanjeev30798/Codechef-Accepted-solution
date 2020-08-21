#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i;
	    cin>>n>>k;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    int s1=0,s2=0,min1=100,min2=100;
	    for(i=0;i<n;i++)
	    {
	        if(b[i]==0 && min2>a[i])
	        min2=a[i];
	        else if(b[i]==1 && min1>a[i])
	        min1=a[i];
	    }
	    if(k+min2+min1<=100)
	    cout<<"yes\n";
	    else
	    cout<<"no\n";
	}
	return 0;
}
