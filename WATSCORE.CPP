#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s,j,sum1=0;
	    cin>>n;
	    int a[12]={0},b[12]={0},i;
	    for(i=0;i<n;i++)
	    {
	        cin>>j;
	        cin>>s;
	        if(s+100>=b[j])
	        b[j]=s+100;
	    }
	    for(i=0;i<=8;i++)
	    {
	        if(b[i]>=100)
	        sum1+=b[i]-100;
	    }
	    cout<<sum1<<"\n";
	}
	return 0;
}
