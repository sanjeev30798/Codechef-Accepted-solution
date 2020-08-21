n=(int)(input())
while(n>0):
    n-=1
    len1=(int)(input())
    l=list(map(int,input().split(" ")))
    l1=list(map(int,input().split(" ")))
    c=0
    k=0
    for i in range(0,len1):
        if(l[i]-k>=l1[i]):
            c+=1
        k=l[i]
    print(c)