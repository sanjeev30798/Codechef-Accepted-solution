t=(int)(input())
while(t>0):
    t-=1
    n,k=map(int,input().split())
    a=(list)(map(int,input().split()))
    sum1=0
    max1=max(a)
    for i in range(0,n):
        sum1+=max1-a[i]
    k=k-sum1
    k=k%n
    if(k==0):
        print('Yes')
    else:
        print('No')