s=list(input())
n=int(input())
while(n>0):
    n-=1
    h=input()
    r=1
    for i in range(0,len(h)):
        if(h[i] not in s):
            r=-1
            break
    if(r==1):
        print('Yes')
    else:
        print('No')