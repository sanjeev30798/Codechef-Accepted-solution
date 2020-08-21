#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	   long long int a;
	   cin>>a;
	   if(a%10==0)
	   cout<<0<<"\n";
	   else if(a%10==5)
	   cout<<1<<"\n";
	   else
	   cout<<-1<<"\n";
	}
	return 0;
}
