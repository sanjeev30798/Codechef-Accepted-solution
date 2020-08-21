#include <iostream>
using namespace std;

int main() {
  
    string s;
    cin>>s;
    int l=s.length();
    if(l==1)
    cout<<1;
    else if(l==2)
    cout<<2;
    else if(l==3)
    cout<<3;
    else
    cout<<"More than 3 digits\n";
    return 0;
}
