#include <iostream>
#include<algorithm>
using namespace std;
int search(long long int a[],int lb,int ub,long long int k)
{
    while(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(a[mid]==k)
        {
            return mid+1;
        }
        else if(a[mid]<k)
        {
            lb=mid+1;
        }
        else
        ub=mid-1;
    }
    return 0;
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    long long int a[n],h;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int k;
	    cin>>k;
	    h=a[k-1];
	    sort(a,a+n);
	    cout<<search(a,0,n-1,h)<<"\n";
	}
	return 0;
}
