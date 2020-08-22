#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		int s1=0;
		while(a>1 && b>0)
		{
			s1+=a/b;
			a%=b;
			ll u=b;
			if(a%2==0)
			b=a;
			else
			b=a-1;
		}
		if(a==1)
		s1++;
		cout<<s1<<"\n";
	}
	
	
	return 0;
}
