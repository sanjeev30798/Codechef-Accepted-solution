n=(int)(input())
while(n>0):
    n-=1
    a,b=map(int,input().split(" "))
    if(a<1000):
        k=a*b
        print("%.6f"%k)
    else:
        k=a*0.9*b
        print("%.6f"%k)
        
    