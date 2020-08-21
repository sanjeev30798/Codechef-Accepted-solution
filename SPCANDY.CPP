#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    if(k!=0)
	    cout<<n/k<<" "<<n%k<<"\n";
	    else
	    cout<<0<<" "<<n<<"\n";
	}
	return 0;
}
