#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	cin>>ws;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int c1=0,i;
	    for(i=0;i<s.length();i++)
	    {
	        if(s.at(i)!='4' && s.at(i)!='7')
	        c1++;
	    }
	    cout<<c1<<"\n";
	}
	return 0;
}
