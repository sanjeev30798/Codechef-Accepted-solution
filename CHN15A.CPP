#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,c=0;
	    cin>>n>>a;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if((arr[i]+a)%7==0)
	        c+=1;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
