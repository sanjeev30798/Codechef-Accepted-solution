#include <iostream>
using namespace std;

int main() {
	
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,j,i,p,k;
        cin>>n>>q;
        int c=0,c1=0,d1=0,d2=0;
        long long int a[n],x;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(__builtin_popcount(a[i])%2==0)
            d1++;
            else
            d2++;
        }
        
        for(j=0;j<q;j++)
        {
            cin>>p;
            c=0;c1=0;
            if(__builtin_popcount(p)%2==0)
            cout<<d1<<" "<<d2<<"\n";
            else
            cout<<d2<<" "<<d1<<"\n";
        }
    }
	return 0;
}