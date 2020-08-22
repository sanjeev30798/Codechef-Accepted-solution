#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
	int t;
	cin>>t;
	int i;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][2];
		int c1=0,c2=0;
		for(i=0;i<n;++i)
		{
			cin>>a[i][0]>>a[i][1];
			int sum1=a[i][1],sum2=0;
			sum1=(sum1%10)+(sum1/10)%10+(sum1/100)%10+(sum1/1000)%10+(sum1/10000)%10+(sum1/100000)%10+(sum1/1000000)%10+(sum1/10000000)%10+(sum1/100000000)%10+(sum1/1000000000)%10;
			sum2=sum1;
			sum1=a[i][0];
			sum1=(sum1%10)+(sum1/10)%10+(sum1/100)%10+(sum1/1000)%10+(sum1/10000)%10+(sum1/100000)%10+(sum1/1000000)%10+(sum1/10000000)%10+(sum1/100000000)%10+(sum1/1000000000)%10;
			
			if(sum1>sum2)
			c1++;
			else if(sum2>sum1)
			c2++;
			else
			{
				c1++;
				c2++;
			}
			
		}
		if(c1>c2)
		cout<<0<<" "<<c1<<"\n";
		else if(c1<c2)
		cout<<1<<" "<<c2<<"\n";
		else
		cout<<2<<" "<<c2<<"\n";
	}
	
	
	return 0;
}
