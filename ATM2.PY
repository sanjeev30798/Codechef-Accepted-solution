n=int(input())
while(n>0):
    n-=1
    l,k=map(int,input().split(" "))
    s=list(map(int,input().split(" ")))
    c=''
    for i in s:
        if(i<=k):
            k=k-i
            h='1'
            c=c+h
        else:
            c=c+'0'
    print(c)
    