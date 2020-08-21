#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int k=a-b;
	int h=k;
	if(h!=1 && h<=9)
	cout<<1;
	else if(h==1)
	cout<<2;
	else if(h>9 && h%10==1)
	{
	    cout<<(h/10)*10 +2;
	}
	else
	cout<<(h/10)*10+1;
	return 0;
}
