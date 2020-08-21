n=int(input())
while(n>0):
    n-=1
    a,b=map(int,input().split(" "))
    l1=list(map(int,input().split(" ")))
    l2=list(map(int,input().split(" ")))
    l1.sort()
    l2.sort()
    count=0
    c=0
    g=min(a,b)
    i=0
    j=0
    while(i<a and j<b):
        if(l1[i]<l2[j]):
            i+=1
        elif(l2[j]<l1[i]):
            j+=1
        elif(l1[i]==l2[j]):
            i+=1
            j+=1
            c+=1
    print(c)