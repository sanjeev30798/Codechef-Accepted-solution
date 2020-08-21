a=[6,2,5,5,4,5,6,3,7,6]
n=(int)(input())
while(n>0):
    n-=1
    b,c=map(int,input().split(" "))
    c=b+c
    count=0
    while(c!=0):
        count+=a[c%10]
        c=c//10
    print(count)
    