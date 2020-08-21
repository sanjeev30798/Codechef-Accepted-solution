#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,k;
	    cin>>a>>b>>k;
	    int diff=abs(a-b);
	    diff=max(0,diff-k);
	    cout<<diff<<'\n';
	}
	return 0;
}
