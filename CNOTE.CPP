#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,k,n;
	    cin>>x>>y>>k>>n;
	    int f=-1;
	    int a[n][2]={0},i;
	    int left=x-y;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i][0]>>a[i][1];
	        if(a[i][0]>=left && a[i][1]<=k)
	        {
	            f=1;
	        }
	    }
	    if(f==1)
	    cout<<"LuckyChef\n";
	    else
	    cout<<"UnluckyChef\n";
	}
	return 0;
}
