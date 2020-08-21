#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,i;
	    cin>>a>>b;
	    int c=0;
	    for(i=a;i<=b;i++)
	    {
	        int d=i%10;
	        if(d==2 || d==3 || d==9)
	        c++;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
