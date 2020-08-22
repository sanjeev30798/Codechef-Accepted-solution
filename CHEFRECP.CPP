#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;++i)
	    {
	        cin>>a[i];
	    }
	    if(n==1)
	    {
	        cout<<"YES\n";
	        continue;
	    }
	    int c1[1001]={0};
	    c1[a[0]]++;
	    int f=1;
	    for(i=1;i<n;i++)
	    {
	        if(c1[a[i]]==0)
	        c1[a[i]]++;
	        else if(c1[a[i]]>0 && a[i]==a[i-1])
	        {
	            c1[a[i]]++;
	        }
	        else
	        {
	            f=-1;
	            break;
	        }
	    }
	    if(f==-1)
	    {
	        cout<<"NO\n";
	        continue;
	    }
	    sort(c1,c1+1001,greater<int>());
	    for(i=0;i<1000;i++)
	    {
	        if(c1[i]==c1[i+1] && (c1[i]!=0 && c1[i+1]!=0))
	        {
	            f=-1;
	            break;
	        }
	        else if(c1[i]==0 && c1[i+1]==0)
	        break;
	    }
	  
	    if(f==-1)
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	}
	return 0;
}
