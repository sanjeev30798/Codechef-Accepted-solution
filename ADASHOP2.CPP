#include <iostream>
#include<algorithm>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    if(r==1 && c==1)
	    {
	        cout<<"16\n";
	        cout<<"8 8\n";
	        cout<<"7 7\n";
	        cout<<"8 6\n";
	        cout<<"6 8\n";
	        cout<<"1 3\n";
	        cout<<"3 1\n";
	        cout<<"7 5\n";
	        cout<<"4 8\n";
	        cout<<"1 5\n";
	        cout<<"5 1\n";
	        cout<<"8 4\n";
	        cout<<"7 3\n";
	        cout<<"8 2\n";
	        cout<<"7 1\n";
	        cout<<"1 7\n";
	        cout<<"2 8\n";
	        
	   }
	   else
	   {
	       int x,y;
	        if(c>r)
	        swap(r,c);
	        if(r>c)
	        {
	            if(r==3 && c==1)
	            x=y=2;
	            else if((r==4)&&(c==2))
	            x=y=3;
	            else if((r==5)&&(c==1))
	            x=y=3;
	            else if((r==5)&&(c==3))
	            x=y=4;
	            else if((r==6)&&(c==2))
	            x=y=4;
	            else if((r==6)&&(c==4))
	            x=y=5;
	            else if((r==7)&&(c==1))
	            x=y=4;
	            else if((r==7)&&(c==3))
	            x=y=5;
	            else if((r==7)&&(c==5))
	            x=y=6;
	            else if((r==8)&&(c==2))
	            x=y=5;
	            else if((r==8)&&(c==4))
	            x=y=6;
	            else if((r==8)&&(c==6))
	            x=y=7;
	            
	        }
	        
	        
	        cout<<"18\n";
	        cout<<x<<" "<<y<<"\n";
	        cout<<"1 1\n";
	        cout<<"8 8\n";
	        cout<<"7 7\n";
	        cout<<"8 6\n";
	        cout<<"6 8\n";
	        cout<<"1 3\n";
	        cout<<"3 1\n";
	        cout<<"7 5\n";
	        cout<<"4 8\n";
	        cout<<"1 5\n";
	        cout<<"5 1\n";
	        cout<<"8 4\n";
	        cout<<"7 3\n";
	        cout<<"8 2\n";
	        cout<<"7 1\n";
	        cout<<"1 7\n";
	        cout<<"2 8\n";
	   }
	}
	return 0;
}
