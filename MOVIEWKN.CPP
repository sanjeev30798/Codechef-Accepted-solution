#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    int ind=-1,rat=-1,i;
	    long long int p=0,p1=0;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	        p1=a[i]*b[i];
	        if(p1>p)
	        {
	            p=a[i]*b[i];
	            rat=b[i];
	            ind=i;
	        }
	        else if(p1==p)
	        {
	            if(b[i]>rat)
	            {
	                rat=b[i];
	                ind=i;
	            }
	            
	        }
	    
	    }
	    cout<<ind+1<<"\n";
	}
	return 0;
}
