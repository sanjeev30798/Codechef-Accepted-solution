n=int(input())
while(n>0):
    n-=1
    a,b=map(int,input().split(" "))
    area=p=0
    for i in range(0,a):
        l=list(map(int,input().split(" ")))
        if(l[2]<=b):
            if(l[0]*l[1] > p):
                p=l[0]*l[1]
    if(p>0):
        print(p)
    else:
        print('no tablet')