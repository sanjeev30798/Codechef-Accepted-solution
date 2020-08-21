#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	int m,c;
	cin>>m>>c;
	long long int p1=0,p2=0;
	for(int i=0;i<t;i++)
	{
	    int x,y,p;
	    cin>>x>>y>>p;
	    long long int sum=y-m*x-c;
	    if(sum>0)
	    {
	        p1+=p;
	    }
	    else
	    p2+=p;
	    
	}
	cout<<max(p1,p2)<<"\n";
	return 0;
}
