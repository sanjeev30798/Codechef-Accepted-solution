#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,m;
	    cin>>n>>m;
	    int a[n]={0};
	    long long int sum1=0;
	    int min1=INT_MAX;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum1+=a[i];
	        min1=min(min1,a[i]);
	    }
	    int k=sum1%m;
	    if(k>=min1)
	    {
	        cout<<"-1\n";
	    }
	    else
	    cout<<sum1/m<<"\n";
	}
	return 0;
}
