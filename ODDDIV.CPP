#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    ll sum1=0;
	    int i,j;
	    for(i=a;i<=b;++i)
	    {
	        ll sum2=0;
	        for(j=1;j<=sqrt(i);++j)
	        {
	            if(i%j==0)
	            {
	                if(j*j==i)
	                {
	                    if(j%2==1)
	                    sum2+=j;
	                }
	                else
	                {
	                    if(j%2==1)
	                    sum2+=j;
	                    if((i/j)%2==1)
	                    sum2+=i/j;
	                }
	            }
	        }
	        sum1+=sum2;
	        
	    }
	    cout<<sum1<<"\n";
	}
	return 0;
}
