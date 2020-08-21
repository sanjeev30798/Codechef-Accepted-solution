n=int(input())
while(n>0):
    n-=1
    a=int(input())
    l=list(input())
    c=0
    l1=['a','e','i','o','u']
    for i in range(0,a-1):
        if(l[i] not in l1 and l[i+1] in l1):
            c+=1
    print(c)