#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vll vector<long long int>
#define pb push_back
#define ii pair<int, int>
#define vii vector<ii>
#define vvi vector<vector<int>>
#define mod 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main() {
	// your code goes here
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int min=a[1]-a[0];
	    for(i=0;i<n-1;i++)
	    {
	        if((a[i+1]-a[i])<min)
	        min=a[i+1]-a[i];
	    }
	    cout<<min<<"\n";
	}
	return 0;
}
