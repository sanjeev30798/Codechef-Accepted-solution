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
	    int a[5][5];
	    a[0][0]=0;a[0][1]=1;
	    a[1][0]=2;a[1][1]=1;
	    a[2][0]=3;a[2][1]=1;
	    a[3][0]=4;a[3][1]=1;
	    a[4][0]=0;a[4][1]=1;
	    int i,c=0,l=s.length();
	    for(i=0;i<l;++i)
	    {
	        char ch=s.at(i);
	        int t1=ch-48;
	        c=a[c][t1];
	    }
	    if(c==4)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
