#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    int b[100000]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[a[i]]++;
	    }
	    int g=0;
	    for(i=0;i<n;i++)
	    {
	        if(b[a[i]]%2==1)
	        {
	            g=a[i];
	        }
	        
	    }
	    cout<<g<<"\n";
	}
	return 0;
}
