// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the required XOR 
long computeXOR(const long long int n) 
{ 
	// Modulus operator are expensive 
	// on most of the computers. 
	// n & 3 will be equivalent to n % 4 
	// n % 4 
	switch (n & 3) { 

	// If n is a multiple of 4 
	case 0: 
		return n; 

	// If n % 4 gives remainder 1 
	case 1: 
		return 1; 

	// If n % 4 gives remainder 2 
	case 2: 
		return n + 1; 

	// If n % 4 gives remainder 3 
	case 3: 
		return 0; 
	} 
} 

// Driver code 
int main() 
{
    ios::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
	long long int  r,l;
	cin>>l>>r;
	//cout<<(computeXOR(r) ^ computeXOR(l - 1))<<"\n";
	if((computeXOR(r) ^ computeXOR(l - 1))%2==0)
	cout<<"Even\n";
	else
	cout<<"Odd\n";
    }
	return 0; 
} 
