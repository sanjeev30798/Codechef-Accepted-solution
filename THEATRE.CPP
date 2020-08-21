#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	int s=0;
	while(t--)
	{
	    int n,f,i,j,sum=-400;
	    cin>>n;
	    if(n==0)
	    {
	    sum=-400;
	    cout<<sum<<endl;
	    s=s+sum;
	    continue;
	    }
	    int a[4][4];
	    memset(a,0,sizeof a);
	    for(i=0;i<n;i++)
	    {
	        char ch;
	        cin>>ch>>f;
	        if(ch=='A')
	        a[0][f/3-1]++;
	        else if(ch=='B')
	        a[1][f/3-1]++;
	        else if(ch=='C')
	        a[2][f/3-1]++;
	        else if(ch=='D')
	        a[3][f/3-1]++;
	    }
	    int b[100]={0},c[4]={0},count=0,k,y,x,r=0;
	    for(i=0;i<4;i++)
	    {
	        memset(c,0,sizeof c);
	        for(j=0;j<4;j++)
	        {
	            if(i==j)
	            continue;
	            for(k=0;k<4;k++)
	            {
	                if(k==i || k==j)
	                continue;
	                for(y=0;y<4;y++)
	                {
	                    if(y==i || y==j || y==k)
	                    continue;
	                    c[0]=a[i][0];
	                    c[1]=a[j][1];
	                    c[2]=a[k][2];
	                    c[3]=a[y][3];
	                   
	                    sort(c,c+4);
	                    
	                     r=25;
	                    for(x=0;x<4;x++)
	                    {
	                        if(c[x]==0)
	                        b[count]+=-100;
	                        else
	                        b[count]+=c[x]*r;
	                        r=r+25;
	                    }
	                    sum=max(sum,b[count]);
	                  
	                    count++;
	                }
	            }
	        }
	    }
	    
	    cout<<sum<<endl;
	    s=s+sum;
	}
	cout<<s<<endl;
	
	return 0;
}
