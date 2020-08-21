#include <iostream>
using namespace std;

int main() {

	int n,i;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cin>>b[i];
	int min1=1000000,min2=1000000,min3=1000000;
	for(i=0;i<n;i++)
	{
	    if(b[i]==1 && a[i]<min1)
	    min1=a[i];
	    else if(b[i]==2 && a[i]<min2)
	    min2=a[i];
	    else if(b[i]==3 && a[i]<min3)
	    min3=a[i];
	}
	cout<<min(min1+min2,min3)<<"\n";
	
	return 0;
}
