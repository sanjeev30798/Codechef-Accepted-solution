#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cin>>a>>b;
	long long int p=2*(a+b);
	long long int area=a*b;
	if(p>area)
	{
	    cout<<"Peri"<<"\n"<<p<<"\n";
	}
	else if(p<area)
	{
	    cout<<"Area"<<"\n"<<area<<"\n";
	}
	else if(p==area)
	{
	    cout<<"Eq"<<"\n"<<p<<"\n";
	}
	
	return 0;
}
