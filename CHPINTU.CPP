#include <iostream>
#include<algorithm>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,i;
	    cin>>n>>m;
	    int a[n]={0},b[n]={0},c[m]={0},d[m]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        d[a[i]-1]=1;
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        c[a[i]-1]+=b[i];
	    }
	    int min=777777;
	    for(i=0;i<m;i++)
	    {
	        if(d[i]==1)
	        {
	            if(min>c[i])
	            min=c[i];
	        }
	    }
	    cout<<min<<"\n";
	    
	}
	return 0;
}
