#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int a[n],c1=0,c2=0,i;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]%2==0)
	    c1++;
	    else
	    c2++;
	}
	if(c1>c2)
	cout<<"READY FOR BATTLE\n";
	else
	cout<<"NOT READY\n";
	return 0;
}
