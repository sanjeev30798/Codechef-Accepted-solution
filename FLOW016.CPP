#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b,g;
	    cin>>a>>b;
	     g=__gcd(a,b);
	    cout<<g<<" "<<(long long int)((a*b)/g)<<"\n";
	}
	return 0;
}
