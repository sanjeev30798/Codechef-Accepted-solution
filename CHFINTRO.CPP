#include <iostream>
using namespace std;

int main() {
	
	int n,g,s;
	cin>>n>>g;
	while(n--)
	{
	    cin>>s;
	    if(s<g)
	    cout<<"Bad boi\n";
	    else
	    cout<<"Good boi\n";
	}
	return 0;
}
