#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	cin>>ws;
	while(t--)
	{
	    string a,b;
	    cin>>a;
	    string s1,s2;
	    int l=a.length();
	    if(l==1)
	    {
	        cout<<"YES\n";
	        continue;
	    }
	    s1=a.at(l-1)+a.substr(0,l-1);
	    s2=a.substr(1,l)+a.at(0);
	    if(s1==s2)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    
	    
	}
	return 0;
}
