#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	
	int t;
	cin>>t;
	cin>>ws;
	while(t--)
	{
	    string s;
	    cin>>s;
	    ll c=0;
	    ll l=s.length(),i;
	    for(i=0;i<l-1;)
	    {
	        if((s[i]=='x' && s[i+1]=='y')||(s[i]=='y' && s[i+1]=='x'))
	        {
	            ++c;
	            i+=2;
	        }
	        else
	        i+=1;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
