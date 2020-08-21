#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   long long int n;
        cin>>n;
        string s;
        cin>>s;
        cin>>ws;
        long long int c=0,i;
        for(i=0;i<n;++i)
        if(s[i]=='1')
        ++c;
         long long int y=(c)*(c+1)/2;
        cout<<y<<"\n";
        
	}
	return 0;
}
