n=(int)(input())
while(n>0):
    n-=1
    f=1
    k=(int)(input())
    a=list(map(int,input().split()))
    dict1={}
    for i in range(0,k):
        if(a[i]==1 and a[i] not in dict1.keys()):
            dict1[1]=i+1
        elif(a[i]==1):
            if(i+1-dict1[1]<6):
                f=-1
                break
            else:
                dict1[1]=i+1
    if(f==1):
        print("YES")
    else:
        print("NO")