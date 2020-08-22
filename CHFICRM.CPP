#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int f1=0,f2=0,f3=0,i;
	    bool b=true;
	    for(i=0;i<n;++i)
	    {
	        cin>>a[i];
	        if(a[i]==10 && f1==0)
	        {
	            b=false;
	        }
	        else if(a[i]==15 && f1<2 && f2==0)
	        {
	            b=false;
	        }
	        else if(a[i]==15 && f1==0 && f2==0)
	        b=false;
	        else if(a[i]==5)
	        {
	            f1+=1;
	        }
	        else if(a[i]==10)
	        {
	            f1-=1;
	            f2+=1;
	        }
	        else if(a[i]==15)
	        {
	            if(f2>0)
	            {
	                f2-=1;
	                f3+=1;
	            }
	            else if(f1>=2)
	            {
	                f1-=2;
	                f3+=1;
	            }
	            else
	            {
	                b=false;
	            }
	            
	       }
	    }
	    if(b==true)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
