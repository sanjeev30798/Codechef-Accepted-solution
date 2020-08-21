#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[6]={100,50,10,5,2,1};
	    int c=0,i=0,h;
	    while(n!=0)
	    {
	        if(n>=a[i])
	        {
	            h=n/a[i];
	            n=n-h*a[i];
	            c+=h;
	        }
	        i++;
	        
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
