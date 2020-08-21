n=(int)(input())
while(n>0):
    n-=1
    a,k=map(int,input().split(" "))
    l=list(map(int,input().split(" ")))
    l1=list(l)
    l.sort()
    l1.sort(reverse=True)
    
    s1=0
    for i in range(0,k,1):
        s1+=l[i]+l1[i]
    s2=sum(l1)-s1
    s2=s2/(a-2*k)
    print("%.6f" %s2)
        
    