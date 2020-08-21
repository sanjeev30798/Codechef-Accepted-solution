# cook your dish here
def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
        
        
n=(int)(input())
while(n>0):
    n-=1
    a,b=map(int,input().split())
    print(gcd(a,b))
