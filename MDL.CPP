#include <iostream>
#include<vector>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    vector<int> a(n);
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int count=0;
	    while(count<=n-3)
	    {
	        count++;
	        int x=a[0],y=a[1],z=a[2];
	        if((x>y && x<z)||(x<y && x>z))
	        a.erase(a.begin());
	        else if((y>x && y<z)||(y>z && x>y))
	        a.erase(a.begin()+1);
	        else if((z>x && z<y)||(z>y && z<x))
	        a.erase(a.begin()+2);
	      
	    }
	    cout<<a[0]<<" "<<a[1]<<"\n";
	}
	return 0;
}
