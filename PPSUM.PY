n=(int)(input())
while(n>0):
    n-=1
    s=0
    a,b=map(int,input().split(" "))
    for i in range(0,a):
        s=b*(b+1)//2
        b=s
    print(s)