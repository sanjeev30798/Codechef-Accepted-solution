#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int l,i,g=0;
	    cin>>l;
	    cin>>ws;
	    string s;
	    cin>>s;
	    string h="JGEC";
	    int j=0;
	    for(i=0;i<=l-4;i++)
	    {
	        if(s.at(i)==h.at(0))
	        {
	            if(s.substr(i,4)==h)
	            {
	                g++;
	            }
	        }
	    }
	    cout<<g<<"\n";
	}
	return 0;
}
